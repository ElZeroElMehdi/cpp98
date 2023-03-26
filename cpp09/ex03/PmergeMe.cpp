/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:48 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 19:54:44 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool allDigits(const std::string &str)
{
  std::istringstream iss(str);
  std::string token;
  while (std::getline(iss, token, ' '))
  {
    for (std::string::const_iterator it = token.begin(); it != token.end(); ++it)
    {
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

void filldeque(std::deque<int> &d, const std::string &s)
{
  std::istringstream iss(s);
  std::string token;
  while (std::getline(iss, token, ' '))
  {
    if (!token.empty())
      d.push_back(std::atoi(token.c_str()));
  }
}

static void merge(std::vector<int>& v, int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    std::vector<int> temp(right - left + 1);
    while (i <= mid && j <= right) {
        if (v[i] <= v[j]) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = v[i++];
    }
    while (j <= right) {
        temp[k++] = v[j++];
    }
    for (i = 0; i < k; ++i) {
        v[left + i] = temp[i];
    }
}

static void insertionSort(std::vector<int>& v, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = v[i];
        int j = i - 1;
        while (j >= left && v[j] > key) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

static void mergeSort(std::vector<int>& v, int left, int right) {
    const int threshold = 8;
    if (right - left + 1 < threshold) {
        insertionSort(v, left, right);
    } else {
        int mid = left + (right - left) / 2;
        mergeSort(v, left, mid);
        mergeSort(v, mid + 1, right);
        merge(v, left, mid, right);
    }
}

void sort(std::vector<int>& v) {
    mergeSort(v, 0, v.size() - 1);
}

