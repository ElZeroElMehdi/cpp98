#include "BitcoinExchange.hpp"

void fill(std::ifstream &input, std::map<std::string, std::string> &data)
{
    std::string n;
    while (input >> n)
    {
        data.insert(saveSpliter(n));
    }
}

std::pair<std::string, std::string> saveSpliter(std::string &line)
{
    int pos = line.find(",");

    std::string key = line.substr(0, pos);
    std::string value = line.substr(pos + 1, line.length());
    return std::make_pair(key, value);
}

bool isDateValid(std::string date)
{
    // check date is valid
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
    if (year % 4 != 0 && month == 2 && day > 28)
        return false;
    if (year <= 0 || month <= 0 || month > 12 || day <= 0 || day > 31)
        return false;
    return true;
 }