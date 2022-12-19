#include <iostream>
class AbstractClass {
 public:
  virtual void someMethod() = 0;
};

class ConcreteClassA : public AbstractClass {
 public:
  void someMethod() {
    std::cout << "done\n";
  }
};

class ConcreteClassB : public AbstractClass {
 public:
  void someMethod() {
    std::cout << "done2\n";
  }
};

AbstractClass* me(std::string str)
{
    AbstractClass* objects[2];
    std::string strs[2] = {"1", "2"};
    objects[0] = new ConcreteClassA();
    objects[1] = new ConcreteClassB();
    for (int i = 0; i <= 2; i++)
    {
        if (strs[i] == str)
            return (objects[i]);
    }
    throw(std::exception());
}

int main()
{
    try
    {
        AbstractClass *b = me("1");
        AbstractClass *b2 = me("2");
        b->someMethod();
        b2->someMethod();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
