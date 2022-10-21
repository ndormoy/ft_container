# define CCOUT(x) std::cout << x << std::endl;
# define COUT(x) std::cout << x << std::endl;
# define EXCEPTION(x, y) public: class x : public std::exception { const char * what (void) const throw { return y; } }

#include "vector.hpp"
#include <vector>

int main()
{
	ft::vector<int> test3;
    test3.push_back(1);
    test3.push_back(2);
    test3.push_back(3);
    // ft::vector<int>::iterator it3 = test3.begin();
    // // it3++;
    // test3.insert(it3, 9999);
    // CCOUT(BHYEL, "insert begin")
    // for (ft::vector<int>::iterator ito = test3.begin(); ito != test3.end(); ito++)
    //     CCOUT(BGRN, *ito)
    
    // CCOUT(BHYEL, "insert middle")
    ft::vector<int>::iterator it_middle = test3.begin();
    it_middle++;
    test3.insert(it_middle, 22222);
    for (ft::vector<int>::iterator ita = test3.begin(); ita != test3.end(); ita++)
        CCOUT(*ita)
    test3.insert(it_middle, 22222);
    for (ft::vector<int>::iterator ita = test3.begin(); ita != test3.end(); ita++)
        CCOUT(*ita)
    test3.insert(it_middle, 22222);
    for (ft::vector<int>::iterator ita = test3.begin(); ita != test3.end(); ita++)
        CCOUT(*ita)
}