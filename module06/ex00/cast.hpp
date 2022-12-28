#include <iostream>
#include <string>
#include <cstdlib>
class Caster
{
    private:
        std::string arg;
        char c;
    public:
        std::string getArg();
        Caster();
        Caster(std::string str);
        Caster(int nan);
        Caster(const Caster &cst);
        Caster& operator=(const Caster &rhs);
        ~Caster();
        void setArg(std::string _arg);
        void setArg(char _arg);
        char to_char();
        int to_int ();
        float to_float();
        double to_double();
};

std::ostream& operator<<(std::ostream &COUT, Caster & obj);