#include "BitcoinExchange.hpp"

int main(int ac, char **file)
{

    if (ac == 2)
    {
        std::map<std::string, std::string> data;
        // std::string x = "hello,world";
        // data.insert(saveSpliter(x));
        std::ifstream input(file[1]);
        std::ifstream inputF("input.txt");
        if (!input.is_open() || !inputF.is_open()){ std::cerr << "Error opening file" << std::endl; return 1;}
        else
            fill(input, data, 1); //fill(inputF, inputFile, 3);
        showResult(inputF, data);
    //    std::cout << data["2011-03-02"] << std::endl;
        // std::cout << getClosestDate(data, "2009-01-02").first << "=>" << getClosestDate(data, "2009-01-02").second << std::endl;
        input.close();
        inputF.close();
    }
}