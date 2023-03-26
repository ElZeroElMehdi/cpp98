/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:56:32 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 02:56:33 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <sstream>
#include <ctime>

void fill(std::ifstream &input, std::map<std::string, std::string> &data);
std::pair<std::string, std::string> saveSpliter(std::string &line, std::string delimiter);

//function to check if date is valid
bool isDateValid(std::string date);
std::pair<std::string, std::string> getClosestDate(std::map<std::string, std::string> &data, std::string date);
std::string trimer(std::string &str);
// void fillDataInput(std::ifstream &input, std::map<std::string, std::string> &data);
void showResult(std::ifstream &input, std::map<std::string, std::string> &data);
#endif