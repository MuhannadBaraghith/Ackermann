#include "utils.h"
#include <tuple>
#include <utility>

int main()
{
    // std::vector<int> a = {1, 2, 3, 4, 5};
    // std::vector<int> b = {6, 7, 8, 9, 10};

    // // get all even numbers from a and b
    // auto c = unionAndFilterContainer(a, b, [](int x)
    //                                  { return x % 2 == 0; });

    // if (std::all_of(c.begin(), c.end(), [](auto x)
    //                 { return x % 2 == 0; }))
    //     std::cout << "QUESTION 2 PASSED" << std::endl;
    // else
    //     std::cout << "QUESTION 2 FAILED" << std::endl;

    // std::cout << std::endl;
    // std::cout << ackermann<1, 2>() << std::endl;

    std::tuple<std::pair<int, int>> tuple_arr[] = {std::make_tuple(std::make_pair(1, 2)),
                                                   std::make_tuple(std::make_pair(2, 2)),
                                                   std::make_tuple(std::make_pair(3, 4)),
                                                   std::make_tuple(std::make_pair(4, 4))};

    matMulPossible(tuple_arr, 4);
}
