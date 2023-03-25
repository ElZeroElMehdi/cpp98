#include "BitcoinExchange.hpp"

int main(int ac, char **file)
{

    if (ac == 2)
    {
        std::map<std::string, std::string> data;
        // std::string x = "hello,world";
        // data.insert(saveSpliter(x));
        std::ifstream input("data.csv");
        std::ifstream inputF(file[1]);
        if (!input.is_open() || !inputF.is_open()){ std::cerr << "Error opening file" << std::endl; return 1;}
        else
            fill(input, data, 1); //fill(inputF, inputFile, 3);
        showResult(inputF, data);
        input.close();
        inputF.close();
    }
}