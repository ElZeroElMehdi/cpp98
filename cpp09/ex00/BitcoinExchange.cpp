/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:56:29 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/30 01:44:24 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static int toInt(std::string str)
{
    int num;

    std::stringstream ss(str);
    ss >> num;
    return num;
}

void fill(std::ifstream &input, std::map<std::string, std::string> &data)
{
    std::string n;
    while (input >> n)
        data.insert(saveSpliter(n, ","));
}

std::pair<std::string, std::string> saveSpliter(std::string &line, std::string delimiter)
{
    line = trimer(line);
    int pos = line.find(delimiter);
    
    std::string key = line.substr(0, pos);
    std::string value = line.substr(pos + 1, line.length());
    return std::make_pair(key, value);
}

int isStringDigit(std::string str1, std::string str2, std::string str3)
{
    for (size_t i = 0; i < str1.length(); i++)
    {
        if (!std::isdigit(str1[i]))
            return 0;
    }
    for (size_t i = 0; i < str2.length(); i++)
    {
        if (!std::isdigit(str2[i]))
            return 0;
    }
    for (size_t i = 0; i < str3.length(); i++)
    {
        if (!std::isdigit(str3[i]))
            return 0;
    }
    return 1;
}

bool isDateValid(std::string date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    if (!isStringDigit(date.substr(0, 4), date.substr(5, 2), date.substr(8, 2)))
        return false;
    int year = toInt(date.substr(0, 4));
    int month = toInt(date.substr(5, 2));
    int day = toInt(date.substr(8, 2));
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

std::string trimer(std::string &str)
{
   std::string::iterator newEnd = std::remove(str.begin(), str.end(), ' ');
   return std::string(str.begin(), newEnd);
}

bool isDateFormat(std::string date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    if (!isStringDigit(date.substr(0, 4), date.substr(5, 2), date.substr(8, 2)))
        return false;
    return true;
}

static int countChar(std::string str, char c)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
            count++;
    }
    return count;
}

static bool checkFormat(std::string str)
{
    if (countChar(str, '-') != 2)
        return false;
    if (countChar(str, '|') != 1)
        return false;
    if (countChar(str.substr(0, 10), '-') != 2)
        return false;
    if (countChar(str.substr(11, str.length()), '|') != 1)
        return false;
    if (countChar(str.substr(11, str.length()), '.')  > 1)
        return false;
    return true;
}

void showResult(std::ifstream &input, std::map<std::string, std::string> &data)
{
    std::string key;
    std::string value;
    std::string firstDate = data.begin()->first;
    float ratVal = 0;
    std::string line;
    std::getline(input, line);
    while (input.good())
    {
        std::getline(input, line);
        if (!isDateFormat(line.substr(0, 10)) || !checkFormat(line))
        {std::cout << "Error: bad input => " <<line<< std::endl;continue;}
        line = trimer(line);
        if (line.empty() || line == "date|value")
            continue;
        size_t pos = line.find("|");
        if (pos  == std::string::npos)
            std::cout << "Error: bad input => " <<line<< std::endl;
        else if (pos  != std::string::npos)
        {
            key = line.substr(0, pos);
            value = line.substr(pos + 1, line.length());
            if (key < firstDate)
                 std::cout << "Error: date " <<key<<" less then date :"<< firstDate << std::endl;
            else if(getClosestDate(data, key).first.empty() || isDateValid(key) == false)
                std::cout << "Error: bad input => " <<line<< std::endl;
            else
            {
                ratVal = std::atof(value.c_str()) * (std::atof(getClosestDate(data, key).second.c_str()));
                if ((std::atof(value.c_str()) - 1000.0) > 0)
                    std::cout << "Error: too large a number" << std::endl;
                else if (std::atof(value.c_str()) >= 0)
                    std::cout << getClosestDate(data, key).first << " => " << value <<" = "<<  ratVal << std::endl;
                else if (ratVal < 0)
                    std::cout<< "Error: not a positive number" << std::endl;
            }
        }
    }
}
