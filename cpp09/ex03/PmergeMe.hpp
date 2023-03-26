/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:14 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 19:54:55 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//learn about merg sort, and insertion sort, merg insertion sort
#ifndef PMERGME_HPP
#define PMERGME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>

const int INSERTION_SORT_THRESHOLD = 16;

void fillVector(std::vector<int> &v, std::string &ar);
void filldeque(std::deque<int> &d, const std::string &s);
bool allDigits(const std::string& str);
void sort(std::vector<int>& v);
#endif