#include <iostream>
#include "Sorting.h"

int main()
{
    std::vector<int> arr{ 31, 0, 15, 50, 63, 36, 99, 4, 85, 10 };
    std::vector<int> arr2{ 31, 0, 15, 50, 63, 36, 99, 4, 85, 10 };

    std::cout << "Before Selection Sort\n" << std::endl;
    Sorting::print(arr);
    Sorting::selection_sort(arr);
    std::cout << "Selection Sort\n" << std::endl;
    Sorting::print(arr);

    std::cout << "Before Quick Sort\n" << std::endl;
    Sorting::print(arr2);
    arr2 = Sorting::quick_sort(arr2);
    std::cout << "Quick Sort\n" << std::endl;
    Sorting::print(arr2);
}
