/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:48 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 08:11:00 by eelmoham         ###   ########.fr       */
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

void filldeque(std::deque<int> &d, const std::string &s) {
    std::istringstream iss(s);
    std::string token;
    while (std::getline(iss, token, ' ')) {
        if (!token.empty())
            d.push_back(std::atoi(token.c_str()));
    }
}



/*
#include <vector>

const int INSERTION_SORT_THRESHOLD = 16;

void insertion_sort(std::vector<int>& arr, int left, int right) {
  for (int i = left + 1; i <= right; ++i) {
    int key = arr[i];
    int j = i - 1;

    while (j >= left && arr[j] > key) {
      arr[j + 1] = arr[j];
      --j;
    }

    arr[j + 1] = key;
  }
}

void merge(std::vector<int>& arr, int left, int mid, int right) {
  int i, j, k;
  int n1 = mid - left + 1;
  int n2 = right - mid;

  std::vector<int> L(n1), R(n2);

  for (i = 0; i < n1; ++i) L[i] = arr[left + i];
  for (j = 0; j < n2; ++j) R[j] = arr[mid + 1 + j];

  i = j = 0;
  k = left;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      ++i;
    } else {
      arr[k] = R[j];
      ++j;
    }
    ++k;
  }

  while (i < n1) {
    arr[k] = L[i];
    ++i;
    ++k;
  }

  while (j < n2) {
    arr[k] = R[j];
    ++j;
    ++k;
  }
}

void merge_insertion_sort(std::vector<int>& arr, int left, int right) {
  if (left >= right) return;

  if (right - left < INSERTION_SORT_THRESHOLD) {
    insertion_sort(arr, left, right);
    return;
  }

  int mid = left + (right - left) / 2;
  merge_insertion_sort(arr, left, mid);
  merge_insertion_sort(arr, mid + 1, right);
  merge(arr, left, mid, right);
}


*/