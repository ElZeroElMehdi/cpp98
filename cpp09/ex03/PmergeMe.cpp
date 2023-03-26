/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:48 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 07:55:35 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool allDigits(const std::string& str) {
    std::istringstream iss(str);
    std::string token;
    while (std::getline(iss, token, ' ')) {
        for (std::string::const_iterator it = token.begin(); it != token.end(); ++it) {
            if (!std::isdigit(*it))
                return false;
        }
    }
    return true;
}

void fillVector(std::vector<int> &v, std::string &ar)
{
    std::istringstream iss(ar);
    std::string token;
    while (std::getline(iss, token, ' '))
    {
        if (!token.empty())
            v.push_back(std::atoi(token.c_str()));
    }
}

void fillDeque(std::deque<int> &d, const std::string &s) {
    std::istringstream iss(s);
    std::string token;
    while (std::getline(iss, token, ' ')) {
        if (!token.empty())
            d.push_back(std::atoi(token.c_str()));
    }
}

