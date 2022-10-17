#ifndef IS_INTEGRAL_HPP
#define IS_INTEGRAL_HPP

/*

Checks whether T is an integral type

*/

namespace	ft
{

	// std::integral_constant wraps a static constant of specified type
	template < class T, T v>
	struct integral_constant
	{
		static const T value = v;
		typedef T value_type;
		typedef integral_constant type;
		operator value_type() const { return value; }
	};

	typedef	ft::integral_constant<bool, false>	false_type;
	typedef	ft::integral_constant<bool, true>	true_type;

	//On va passer par toutes ces templates, si aucune ne renvoie true c'est que T n'est pas un type integral

	template <class T>
	struct	is_integral : public false_type {};

	template <>
	struct	is_integral<bool> : public true_type {};

	template <>
	struct	is_integral<char> : public true_type {};

	template <>
	struct	is_integral<signed char> : public true_type {};
	
	template <>
	struct	is_integral<unsigned char> : public true_type {};

	template <>
	struct	is_integral<wchar_t> : public true_type {};

	template <>
	struct	is_integral<short> : public true_type {};

	template <>
	struct	is_integral<unsigned short> : public true_type {};

	template <>
	struct	is_integral<int> : public true_type {};

	template <>
	struct	is_integral<unsigned int> : public true_type {};

	template <>
	struct	is_integral<long> : public true_type {};

	template <>
	struct	is_integral<unsigned long> : public true_type {};

	template <>
	struct	is_integral<long long> : public true_type {};

	template <>
	struct	is_integral<unsigned long long> : public true_type {};

}
#endif