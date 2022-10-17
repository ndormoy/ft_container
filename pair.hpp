#ifndef FT_PAIR_HPP
#define FT_PAIR_HPP

/*

Pair is used to combine together two values that may be of different data types.
Pair provides a way to store two heterogeneous objects as a single unit.
It is basically used if we want to store tuples. 
The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

*/

namespace	ft
{

	template <typename T1, typename T2>
	struct pair
	{
		typedef T1 first_type;
		typedef T2 second_type;

		T1 first;
		T2 second;
		//default constructor
		pair() : first(T1()), second(T2()) {}
		//constructor
		pair(const T1 &x, const T2 &y) : first(x), second(y) {}
		//copy constructor
		template <class U, class V>
		pair(const pair<U, V> &pr) : first(pr.first), second(pr.second) {}
		//destructor
		~pair() {}
		//operator=
		pair &operator=(const pair &pr)
		{
			if (this != &pr)
			{
				first = pr.first;
				second = pr.second;
			}
			return (*this);
		}
	};
	//operator==
	template <class T1, class T2>
	inline bool operator==(const pair<T1, T2>& x, const pair<T1, T2>& y)
	{
		return x.first == y.first && x.second == y.second;
	}
	//operator!=
	template <class T1, class T2>
	inline bool operator!=(const pair<T1, T2>& x, const pair<T1, T2>& y)
	{
		return !(x == y);
	}
	//operator<
	template <class T1, class T2>
	inline bool operator<(const pair<T1, T2>& x, const pair<T1, T2>& y)
	{
	}
	//operator>
	template <class T1, class T2>
	inline bool operator>(const pair<T1, T2>& x, const pair<T1, T2>& y)
	{
		return (y < x);
	}
	//operator>=
	template <class T1, class T2>
	inline bool operator>=(const pair<T1, T2>& x, const pair<T1, T2>& y)
	{
		return !(x < y);
	}
	//make_pair
	template <class T1, class T2>
	inline pair<T1, T2> make_pair(T1 x, T2 y)
	{
		return (pair<T1, T2>(x, y));
	}
}





#endif