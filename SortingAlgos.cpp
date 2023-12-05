#include <iostream>
#include "Sorting.h"

int main()
{
    std::vector<int> arr{ 31, 0, 15, 50, 63, 36, 99, 4, 85, 10 };

    Sorting::print(arr);

    /*auto simpResultFound = Search::simple_search(arr, 15);
    auto simpResultNotFound = Search::simple_search(arr, 100);
    std::cout << "Simple - 15 was found at position: " << simpResultFound << std::endl;
    std::cout << "Simple - 100 was not found: " << simpResultNotFound << std::endl;

    auto binResultFound = Search::binary_search(arr, 15);
    auto binResultNotFound = Search::binary_search(arr, 100);
    std::cout << "Binary - 15 was found at position: " << binResultFound << std::endl;
    std::cout << "Binary - 100 was not found: " << binResultNotFound << std::endl;*/
}
