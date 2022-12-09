#include <iostream>

class exception : public std::exception
{
    private:
        std::string message;
    public:
        exception(std::string _message);
        std::string what();
        virtual ~exception();
};