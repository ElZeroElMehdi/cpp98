#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

void fill(std::ifstream &input, std::map<std::string, std::string> &data, int is);
std::pair<std::string, std::string> saveSpliter(std::string &line, std::string delimiter);

//function to check if date is valid
bool isDateValid(std::string date);
std::pair<std::string, std::string> getClosestDate(std::map<std::string, std::string> &data, std::string date);

// void fillDataInput(std::ifstream &input, std::map<std::string, std::string> &data);
void showResult(std::ifstream &input, std::map<std::string, std::string> &data);
#endif