#include <algorithm>
#include <iostream>
#include <vector>

// Q1.1
template <size_t m, size_t n>
size_t ackermann()
{
    if (m == 0)
        return n + 1;

    else if (n == 0)
        return ackermann<m - 1, 1>();

    else
        return ackermann<m - 1, ackermann<m, n - 1>()>();
}

// Q1.2
std::vector<int> unionAndFilterContainer(std::vector<int> c1, std::vector<int> c2, bool (*cond)(int))  // [](int x) { return x % 2 == 0; }
{
    std::vector<int> filtered;
    c1.insert(c1.end(), c2.begin(), c2.end());

    filtered.reserve(c1.size());

    for (int i = 0; i < c1.size(); i++)
    {
        if (cond(c1[i]))
        {
            filtered.push_back(c1[i]);
        }
    }

    return filtered;
}

// Q1.3
/*
 * I'm going back to my Roots!
 */

// Q1.4
bool matMulPossible(
    const std::tuple<std::pair<int,int>> *tuple, int size)               //leh m4 *tuple?
{
    for (int i = 1; i < size; i+=2)
    {
        if (std::get<0>(tuple[i - 1]).first != std::get<0>(tuple[i]).second)
            return false;   //ezay 7att el tuples kda tupe[i -1]? el 4rt m3mol 8lt
    }
    //get works with tuple
    //.first .second works with pair

    return true;
}
