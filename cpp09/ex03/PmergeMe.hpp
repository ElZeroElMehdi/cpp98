/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:14 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/27 00:45:38 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//learn about merg sort, and insertion sort, merg insertion sort
#ifndef PMERGME_HPP
#define PMERGME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>

// const int INSERTION_SORT_THRESHOLD = 16;

void fillVector(std::vector<int> &v, std::string &ar);
void filldeque(std::deque<int> &d, const std::string &s);
bool allDigits(const std::string& str);

template <typename Container>
void merge(Container& v, int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    Container temp(right - left + 1);
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

template <typename Container>
void insertionSort(Container& v, int l, int r) {
    for (int i = l + 1; i <= r; ++i) {
        int key = v[i];
        int j = i - 1;
        while (j >= l && v[j] > key) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

template <typename Container>
void mergeSort(Container& v, int l, int r) {
    const int threshold = 8;
    if (r - l + 1 < threshold) {
        insertionSort(v, l, r);
    } else {
        int mid = l + (r - l) / 2;
        mergeSort(v, l, mid);
        mergeSort(v, mid + 1, r);
        merge(v, l, mid, r);
    }
}

template <typename Container>
void mergeInsertionSort(Container& v) {
    mergeSort(v, 0, v.size() - 1);
}
#endif