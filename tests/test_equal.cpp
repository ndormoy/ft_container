#include <algorithm>
#include <iostream>
#include <string_view>
 
bool is_palindrome(std::string& s)
{
    return std::equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
}
 
void test(std::string& s)
{
    std::cout << "\"" << s << "\" "
        << (is_palindrome(s) ? "is" : "is not")
        << " a palindrome\n";
}
 
int main()
{
	std::string s1 = "radar";
	std::string s2 = "hello";
    test(s1);
    test(s2);
}