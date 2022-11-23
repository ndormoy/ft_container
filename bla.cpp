#include "./includes/vector.hpp"
#include <vector>

int i = 0;

class LeakClass
{
	public:

		LeakClass()
		{
			ptr = new int;
		}

		LeakClass(const LeakClass& other)
		: ptr(NULL)
		{
			if (i++ == 10)
				throw std::runtime_error("caca");
			if (ptr)
				delete ptr;
			ptr = new int;
		}

		LeakClass operator=(const LeakClass& rhs)
		{
			if (ptr)
				delete ptr;
			ptr = new int;
			return (*this);
		}

		~LeakClass()
		{
			delete ptr;
		}

		int *ptr;
};

int main()
{
	ft::vector<LeakClass> v;

try
{
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());

} catch (
	std::exception &e)
{
	std::cout << e.what() << std::endl;
}
}