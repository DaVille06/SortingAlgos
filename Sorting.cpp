#include <iostream>
#include "Sorting.h"

// Sorts the given array in ascending order
// Compares each index with every other item in the array
// Runs in O(n^2)
void Sorting::selection_sort(std::vector<int> &arr) {

}

// Sorts the given array in ascending order
// Finds a pivot point and divides the array in half each time
// Runs in O(n * log n)
std::vector<int>& Sorting::quick_sort(std::vector<int> &arr) {
	return arr;
}

// Prints the given array values
void Sorting::print(std::vector<int>& arr) {
	std::cout << "***** Printing the Array *****\n";
	for (auto i : arr) {
		std::cout << i << " ";
	}
	std::cout << "\n***** Printing Complete *****\n";
}