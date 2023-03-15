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