#include "tests/tests_functions.cpp"
#include "tests/tests_vector.cpp"
#include "tests/tests_stack.cpp"
#include "tests/tests_map.cpp"
#include "tests/tests_set.cpp"

int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		std::string	optn(argv[1]);
		if(optn == "functions")
			tests_functions();
		else if (optn == "vector")
			tests_vector();
		else if (optn == "stack")
			tests_stack();
		else if (optn == "map")
			tests_map();
		else if (optn == "set")
			tests_set();
		else
			std::cout << MY_RED << "Expected : <functions> <vector> <stack> <map> <set>" << CRESET << std::endl;
	}
	else
	{
		tests_functions();
		tests_vector();
		tests_stack();
		tests_map();
		tests_set();
	}
}
