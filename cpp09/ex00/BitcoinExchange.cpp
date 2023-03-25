#include "BitcoinExchange.hpp"

void fill(std::ifstream &input, std::map<std::string, std::string> &data, int is)
{
    std::string n;
    std::string delimiter;
    if (is == 1)
        delimiter = ",";
    else                            //no need anymore
        delimiter = "|";
    while (input >> n)
        data.insert(saveSpliter(n, ","));
}

std::pair<std::string, std::string> saveSpliter(std::string &line, std::string delimiter)
{
    int pos = line.find(delimiter);

    std::string key = line.substr(0, pos);
    std::string value = line.substr(pos + 1, line.length());
    return std::make_pair(key, value);
}

bool isDateValid(std::string date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    int year = std::stoi(date.substr(0, 4));//c++11
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return false;
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (day > 29)
                return false;
        }
        else
        {
            if (day > 28)
                return false;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)// %2 and !%2
    {
        if (day > 30)
            return false;
    }
    else
    {
        if (day > 31)
            return false;
    }
    return true;
}

std::pair<std::string, std::string> getClosestDate(std::map<std::string, std::string> &data, std::string date)
{
    std::pair<std::string, std::string> result;
    if (!isDateValid(date))
        return result;
    std::map<std::string, std::string>::iterator it = data.begin();
    while (it != data.end())
    {
        if (it->first == date)
        {
            result = *it;
            return result;
        }
        else if (it->first > date)
        {
            *it--;
            return *it;
        }
        it++;
    }
    if (result.first.empty())
        result = *data.begin();
    if (result.first.empty())
        result = *data.end();
    return result;
}

void showResult(std::ifstream &input, std::map<std::string, std::string> &data)
{
    std::string key;
    std::string value;
    int ratVal = 0;
    while (input.good())
    {
        std::string line;
        std::getline(input, line);
        if (line.empty())
            continue;
        size_t pos = line.find("|");
        if (pos  != std::string::npos)
        {
            key = line.substr(0, pos - 1);
            value = line.substr(pos + 2, line.length());
            // std::cout << key << "=>" << value << std::endl;
            if(getClosestDate(data, key).first.empty())
                continue;
            else
            {
                ratVal = std::stoi(value) * std::stoi(getClosestDate(data, key).second);
                // std::cout <<"|"<<getClosestDate(data, key).second<<"|"<< std::endl;
                std::cout << getClosestDate(data, key).first << "=>" << value <<" = "<<  ratVal << std::endl;
            }
        }
    }
}