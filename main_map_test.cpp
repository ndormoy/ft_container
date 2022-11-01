#include <iostream>
#include <map>
#include <string>
#include <string_view>
 
void print_map(const std::map<std::string, int>& m)
{

// C++98 alternative
 for (std::map<std::string, int>::const_iterator it = m.begin(); it != m.end(); it++)
     std::cout << it->first << " = " << it->second << "; ";
 
    std::cout << '\n';
}
 
int main()
{
    // Create a map of three (string, int) pairs
    std::map<std::string, int> m{{"CPU", 10}, {"GPU", 15}, {"RAM", 20}};
 
	std::cout << "1) Initial map: " << std::endl; 
    print_map(m);
 
    m["CPU"] = 25; // update an existing value
    m["SSD"] = 30; // insert a new value
	std::cout << "2) Updated map: " << std::endl;
    print_map(m);
 
    // using operator[] with non-existent key always performs an insert
    std::cout << "3) m[UPS] = " << m["UPS"] << '\n';
	std::cout << "4) Updated map: " << std::endl;
    print_map(m);
 
    m.erase("GPU");
	std::cout << "5) After erase: " << std::endl;
    print_map(m);
 
    // std::erase_if(m, [](const auto& pair){ return pair.second > 25; });
    // print_map("6) After erase: ", m);
    // std::cout << "7) m.size() = " << m.size() << '\n';
 
    m.clear();
    std::cout << std::boolalpha << "8) Map is empty: " << m.empty() << '\n';
}