#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ofstream myfile;
	std::string str;
	myfile.open("hello2.replace");
	myfile << "hello\nhello\nff\ndd";
	myfile.close();
	std::ifstream MyFiles("hello2.replace");
	if (std::getline(MyFiles, str))
		std::cout <<  str;
	MyFiles.close();
	return 0;
}