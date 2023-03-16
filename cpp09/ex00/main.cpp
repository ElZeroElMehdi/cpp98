#include "BitcoinExchange.hpp"

int main(int ac, char **file)
{

    if (ac == 2)
    {
        std::map<std::string, std::string> data;
        std::map<std::string, std::string> inputFile;
        // std::string x = "hello,world";
        // data.insert(saveSpliter(x));
        std::ifstream input(file[1]);
        std::ifstream inputF("input.txt");
        if (!input.is_open() || !inputF.is_open()){ std::cerr << "Error opening file" << std::endl; return 1;}
        else {fill(input, data); fill(inputF, inputFile);}
        // for (std::map<std::string, std::string>::iterator it = data.begin(); it != data.end(); ++it)
        //     std::cout << "done >>>" << it->first << " : " << it->second << std::endl;
        // for (std::map<std::string, std::string>::iterator it = inputFile.begin(); it != inputFile.end(); ++it)
        //     std::cout << "done >>>" << it->first << " : " << it->second << std::endl;
        std::cout << isDateValid("2020-02-29") << std::endl;
    }
}


/*
std::vector<std::string> numbers;
        std::ifstream input(file[1]);
        
        if (!input.is_open())
        {
            std::cerr << "Error opening file" << std::endl;
            return 1;
        }

        std::string n;
        while (input >> n)
        {
            for (char *token = std::strtok(const_cast<char *>(n.c_str()), ",");
                 token != NULL; token = std::strtok(nullptr, ","))
            numbers.push_back(token);
        }

        if (input.bad())
        {
            std::cerr << "Error reading file" << std::endl;
            return 1;
        }
        std::cout << "The numbers in the file are: ";
        for (std::vector<std::string>::iterator it = numbers.begin(); it != numbers.end(); ++it)
        {
            std::cout << *it << "\n";
        }
        std::cout << std::endl;

        input.close();
        return 0;
*/