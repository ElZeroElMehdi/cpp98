#include <iostream>
#include <fstream>

int main() {
	std::ofstream myfile;

	myfile.open("hello.replace");
	myfile << "hello\n";
	myfile.close();
	return 0;
}