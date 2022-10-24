#include "vector.hpp"
#include <vector>
#include <iostream>

class MyClass
{
    public:
    MyClass()
    {
        std::cout << "Object Created" << std::endl;
    }

    ~MyClass()
    {
        std::cout << "Object Destroyed" << std::endl;
    }
};

class OTHER_MyClass
{
    public:
    OTHER_MyClass()
    {
        std::cout << "OTHER_MyClass Object Created" << std::endl;
    }

    ~OTHER_MyClass()
    {
        std::cout << "OTHER_MyClass Object Destroyed" << std::endl;
    }
};

int main()
{
  std::vector<MyClass*> testVec;

  ft::vector<OTHER_MyClass*>	other_testVec;

	// Creating the objects
	MyClass* p = NULL;
	for (int i = 0; i < 3; i++)
	{
		p = new MyClass();
		testVec.push_back(p);
	}

	OTHER_MyClass* other_p = NULL;
	for (int i = 0; i < 3; i++)
    {
		other_p = new OTHER_MyClass();
		other_testVec.push_back(other_p);
	}

	// Destroying the objects
	for (std::vector<MyClass *>::iterator p = testVec.begin(); p != testVec.end(); ++p)
	{
		delete *p;
	}
	testVec.clear();

	for (ft::vector<OTHER_MyClass *>::iterator p = other_testVec.begin(); p != other_testVec.end(); ++p)
	{
		delete *p;
	}
	other_testVec.clear();

	return 0;
}