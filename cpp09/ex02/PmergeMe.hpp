/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:14 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/30 02:41:29 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// learn about merg sort, and insertion sort, merg insertion sort
#ifndef PMERGME_HPP
#define PMERGME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <ctime>

bool isSorted(int ac, char **argv);
void fillVector(std::vector<int> &v, std::string &ar);
void filldeque(std::deque<int> &d, char **av);
bool isAllDigits(char **av);

template <typename Container>
void merge(Container &v, int left, int mid, int right)
{
    int i = left, j = mid + 1, k = 0;
    Container temp(right - left + 1);
    while (i <= mid && j <= right)
    {
        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else
            temp[k++] = v[j++];
    }
    while (i <= mid)
        temp[k++] = v[i++];
    while (j <= right)
        temp[k++] = v[j++];
    for (i = 0; i < k; ++i)
        v[left + i] = temp[i];
}

template <typename Container>
void insertionSort(Container &v, int l, int r)
{
    for (int i = l + 1; i <= r; ++i)
    {
        int key = v[i];
        int j = i - 1;
        while (j >= l && v[j] > key)
        {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

template <typename Container>
void mergeSort(Container &v, int l, int r)
{
    const int threshold = std::max(20, static_cast<int>(std::sqrt(v.size())));
    if (r - l + 1 < threshold)
        insertionSort(v, l, r);
    else
    {
        int mid = l + (r - l) / 2;
        mergeSort(v, l, mid);
        mergeSort(v, mid + 1, r);
        merge(v, l, mid, r);
    }
}

template <typename Container>
void mergeInsertionSort(Container &c)
{
    mergeSort(c, 0, c.size() - 1);
}

template <typename Container>
void fillContainer(Container &c, char **av)
{
    int i = 1;
    while (av[i])
    {
        if (av[i][1])
            throw std::invalid_argument("Error: Invalid argument");
        c.push_back(std::atoi(av[i++]));
    }
}

template <typename Container>
double sortContainer(Container &c)
{
    clock_t start = clock();
    mergeInsertionSort(c);
    clock_t end = clock();
    return (double)(end - start) / (double)CLOCKS_PER_SEC * 1000;
}

#endif