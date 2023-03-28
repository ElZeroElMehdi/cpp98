/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:48 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/28 00:54:08 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isAllDigits(char **av)
{
  for (int i = 1; av[i]; ++i)
  {
    if (!std::isdigit(*av[i]))
      return false;
  }
  return true;
}

bool isSorted(int ac, char **argv)
{
  for (int i = 2; i < ac; i++)
  {
    int a = atoi(argv[i - 1]);
    int b = atoi(argv[i]);
    if (a > b)
      return false;
  }
  return true;
}
