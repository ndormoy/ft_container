#include <iostream>
#include <iomanip>
#include "is_integral.hpp"
// #include <type_traits>
 
class A {};
 
enum E : int {};
 
template <class T>
T f(T i)
{
    static_assert(ft::is_integral<T>::value, "Integral required.");
    return i;
}
 
#define SHOW(...) std::cout << std::setw(29) << #__VA_ARGS__ << " == " << __VA_ARGS__ << '\n'
 
int main()
{
    std::cout << std::boolalpha;
 
    std::cout << ft::is_integral<A>::value << std::endl;
    std::cout << ft::is_integral<E>().value << std::endl;
    std::cout << ft::is_integral<float>().value << std::endl;
    std::cout << ft::is_integral<int>().value << std::endl;
    std::cout << ft::is_integral<const int>().value << std::endl;
    std::cout << ft::is_integral<bool>().value << std::endl;
    std::cout << f(123) << std::endl;
}