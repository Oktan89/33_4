#include <iostream>
#include <string>
#include <vector>
#include <type_traits>
#include <cassert>

/*
template <typename T>
std::size_t arithmetic_mean(T mas)
{
    static_assert(std::is_fundamental<T>() , "Type must be fundamental");
    std::cout << mas << std::endl;
    return 0;
}
*/

template <typename T>
T arithmetic_mean(const std::vector<T>& vec)
{
    static_assert(std::is_fundamental<T>() , "Type must be fundamental");
    T num = 0;
    for(const auto &v : vec)
    {
        num += v;
    }
    return num / static_cast<T>(vec.size());
}

int main()
{
    std::vector<int> t = {1, 2, 3, 4, 5};

    std::cout<< arithmetic_mean(t) << std::endl;;

}