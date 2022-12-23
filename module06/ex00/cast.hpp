#include <iostream>
#include <string>
#include <cstdlib>
class Caster
{
    private:
        std::string arg;
    public:
        Caster();
        Caster(std::string str);
        Caster(const Caster &cst);
        Caster& operator=(const Caster &rhs);
        ~Caster();
        void setArg(std::string _arg);
        char to_char();
        int to_int ();
        float to_float();
        double to_double();
};

std::ostream& operator<<(std::ostream &COUT, Caster & obj);
operator