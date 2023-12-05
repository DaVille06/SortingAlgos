#include <iostream>
#include "Sorting.h"

// Sorts the given array in ascending order
// Compares each index with every other item in the array
// Runs in O(n^2)
void Sorting::selection_sort(std::vector<int> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[j] < arr[i]) {
				auto temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

// Sorts the given array in ascending order
// Finds a pivot point and divides the array in half each time
// Runs in O(n * log n)
std::vector<int> Sorting::quick_sort(std::vector<int> &arr) {
	if (arr.size() < 2) {
		return arr;
	}

	int pivot = arr[0];
	std::vector<int> lower;
	std::vector<int> higher;

	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] <= pivot) {
			lower.push_back(arr[i]);
		}
		else {
			higher.push_back(arr[i]);
		}
	}

	std::vector<int> result;
	lower = Sorting::quick_sort(lower);
	result.insert(result.end(), lower.begin(), lower.end());
	result.push_back(pivot);
	higher = Sorting::quick_sort(higher);
	result.insert(result.end(), higher.begin(), higher.end());

	return result;
}

// Prints the given array values
void Sorting::print(std::vector<int>& arr) {
	std::cout << "***** Printing the Array *****\n";
	for (auto i : arr) {
		std::cout << i << " ";
	}
	std::cout << "\n***** Printing Complete *****\n\n";
}