#ifndef FT_PAIR_HPP
#define FT_PAIR_HPP

namespace ft
{
	
} // namespace ft

//create pair namespace who recreate std::pair
namespace ft
{
	//create pair class who recreate std::pair
	template <class T1, class T2>
	class pair
	{
		public:
			//create pair type
			typedef T1 first_type;
			typedef T2 second_type;

			//create pair variable
			T1 first;
			T2 second;

			//create pair constructor
			pair() : first(T1()), second(T2()) {}
			pair(const T1& x, const T2& y) : first(x), second(y) {}
			template <class U, class V>
			pair(const pair<U, V>& pr) : first(pr.first), second(pr.second) {}

			//create pair operator
			pair& operator=(const pair& pr)
			{
				first = pr.first;//create map namespace who recreate std::map
				second = pr.second;
				return (*this);
			}
	};

	//create pair function who recreate std::make_pair
	template <class T1, class T2>
	pair<T1, T2> make_pair(T1 x, T2 y)
	{
		return (pair<T1, T2>(x, y));
	}

	//create pair operator who recreate std::operator==
	template <class T1, class T2>
	bool operator==(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (lhs.first == rhs.first && lhs.second == rhs.second);
	}//create map namespace who recreate std::map

	//create pair operator who recreate std::operator!=
	template <class T1, class T2>
	bool operator!=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (!(lhs == rhs));
	}

	//create pair operator who recreate std::operator<
	template <class T1, class T2>
	bool operator<(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (lhs.first < rhs.first || (!(rhs.first < lhs.first) && lhs.second < rhs.second));
	}

	//create pair operator who recreate std::operator<=
	template <class T1, class T2>
	bool operator<=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (!(rhs < lhs));
	}

	//create pair operator

#endif