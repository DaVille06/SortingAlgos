#ifndef SORTING_H
#define SORTING_H

#include <vector>

class Sorting {
public:
	static void selection_sort(std::vector<int> &arr);
	static std::vector<int> quick_sort(std::vector<int> &arr);
	static void print(std::vector<int>& arr);
};

#endif // !SORTING_H
