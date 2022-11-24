#ifndef MONKEY_MAP
# define MONKEY_MAP 
#endif
#include <string>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <utility>
#ifndef SSTR
# define SSTR( x ) (static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << (x) ) ).str())
#endif
#ifndef NAMESPACE
# define NAMESPACE ft
#endif
#ifndef _P
# define _P NAMESPACE::pair
#endif
#include <includes.hpp>
#include <input_iterator.hpp>
#include <common.hpp>
class logger logger;
int main()
{
	typedef NAMESPACE::map<std::string, std::string> C;
	C m1;
	C m2;
	int ret;
	C::iterator it1;
	input_iterator<C::iterator> inputit1;
	C::iterator it2;
	input_iterator<C::iterator> inputit2;
	_P<C::iterator, bool> pair_it_bool;
	_P<C::iterator, C::iterator> range;
	_P<C::key_type, C::mapped_type> val;
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hkslw]");
	it1 = m2.find("hkslw");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hwquc", "amigo de pepito");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("", "htfjg");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1253520176);
	val = _P<C::key_type, C::mapped_type>("tkscw", "amigo de la tornada");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1110648960);
	val = _P<C::key_type, C::mapped_type>("ftkbj", "dqlwp");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 946359204);
	it2 = monkey::get_itn(m1, 946359204, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["vjjid"] = "eqczi";
	std::cout << m1["gdqhm"] << std::endl;
	m1["amigo de la tornada"] = "ijvkx";
	std::cout << m1["fqejg"] << std::endl;
	m1["urkxe"] = "hola amigo";
	std::cout << m1["sxmya"] << std::endl;
	m1["gpbtv"] = "erwbm";
	std::cout << m1["trozt"] << std::endl;
	m1["sfgyv"] = "hnvvm";
	std::cout << m1["zuoap"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [bjxpp]");
	it1 = m1.lower_bound("bjxpp");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1387531060);
	it2 = monkey::get_itn(m2, 226377810, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dos]");
	ret = m2.count("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [aoomb]");
	it1 = m2.lower_bound("aoomb");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [hfczn]");
	it1 = m1.lower_bound("hfczn");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [tgxpt]");
	ret = m1.count("tgxpt");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["hola amigo"] = "aaloa";
	std::cout << m1["eqaha"] << std::endl;
	m1["ujxwl"] = "eebzm";
	std::cout << m1["rfecq"] << std::endl;
	m1["amigo de la tornada"] = "apicf";
	std::cout << m1["shwtx"] << std::endl;
	m1["ewrpj"] = "wkwin";
	std::cout << m1["amigo de pepito"] << std::endl;
	m1["pgtrb"] = "ijxna";
	std::cout << m1["amigo de pepito"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hola amigo]");
	it1 = m2.find("hola amigo");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [nbqbv]");
	it1 = m2.upper_bound("nbqbv");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [amigo de la tornada]");
	ret = m2.count("amigo de la tornada");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [atencion]");
	it1 = m2.find("atencion");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [mledu]");
	range = m2.equal_range("mledu");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [qqees]");
	it1 = m2.lower_bound("qqees");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["kxfbs"] = "nfwsz";
	std::cout << m1["amigo de la tornada"] << std::endl;
	m1["apegj"] = "qzdjf";
	std::cout << m1["qyvtb"] << std::endl;
	m1["atencion"] = "jkayp";
	std::cout << m1["trjqt"] << std::endl;
	m1["hasrb"] = "un";
	std::cout << m1["txpjw"] << std::endl;
	m1["ezvxi"] = "hkezj";
	std::cout << m1["amigo de pepito"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["exnwo"] = "ggvzd";
	std::cout << m1["lbzpd"] << std::endl;
	m1["mnawx"] = "un dos tres quatro";
	std::cout << m1["epbwc"] << std::endl;
	m1["tqdjg"] = "pbjuo";
	std::cout << m1["wplzk"] << std::endl;
	m1["omylt"] = "uamyw";
	std::cout << m1["frila"] << std::endl;
	m1["urqfn"] = "blwpm";
	std::cout << m1["hola amigo"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un]");
	it1 = m2.lower_bound("un");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [imqqf]");
	it1 = m2.lower_bound("imqqf");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ovygd]");
	it1 = m1.lower_bound("ovygd");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [zlvlt]");
	it1 = m1.find("zlvlt");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 518083191);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("pthgj");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 672492737);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("vjtdm");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [gfory]");
	range = m2.equal_range("gfory");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 214039315);
	it2 = monkey::get_itn(m2, 214039315, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1780678689);
	val = _P<C::key_type, C::mapped_type>("zlizo", "pttln");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 100891152);
	it2 = monkey::get_itn(m2, 100891152, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1226123208);
	val = _P<C::key_type, C::mapped_type>("ojqws", "ospub");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("sjgal", "qaokn");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [zqore]");
	ret = m1.count("zqore");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [rllno]");
	it1 = m1.upper_bound("rllno");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["un dos tres quatro"] = "jsjzu";
	std::cout << m2["lichx"] << std::endl;
	m2["xnvdp"] = "ggdxu";
	std::cout << m2["atencion"] << std::endl;
	m2["mupvj"] = "dos";
	std::cout << m2["zjult"] << std::endl;
	m2["utcrg"] = "wvfde";
	std::cout << m2["cyzpg"] << std::endl;
	m2["lxiux"] = "rxhnk";
	std::cout << m2["hola amigo"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [xaotx]");
	range = m1.equal_range("xaotx");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["bgskt"] = "hola amigo";
	std::cout << m2["afzre"] << std::endl;
	m2["gojru"] = "ftevo";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["dos"] = "olbgv";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["bljce"] = "lkduc";
	std::cout << m2["yjsfh"] << std::endl;
	m2["jywqv"] = "bzsww";
	std::cout << m2["bxrmz"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [xzkeg]");
	it1 = m1.upper_bound("xzkeg");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("pzinv", "un");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1383700451);
	it2 = monkey::get_itn(m1, 1383700451, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 345460392);
	val = _P<C::key_type, C::mapped_type>("gmmoy", "vytfc");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 76995700);
	val = _P<C::key_type, C::mapped_type>("atencion", "hudgd");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 415811181);
	it2 = monkey::get_itn(m1, 415811181, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [etath]");
	ret = m2.count("etath");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [wsuxu]");
	it1 = m2.upper_bound("wsuxu");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("ypsdi");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 768388552);
	it2 = monkey::get_itn(m1, 384861483, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1489451986);
	it2 = monkey::get_itn(m1, 499439389, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("cpvjg");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("qgkkc");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [ltrlj]");
	ret = m1.count("ltrlj");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [ekmai]");
	ret = m2.count("ekmai");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("eggkx");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 337039432);
	it2 = monkey::get_itn(m1, 59976312, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("ipwqb");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 170505693);
	it2 = monkey::get_itn(m1, 1971081696, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1341713053);
	val = _P<C::key_type, C::mapped_type>("yanjx", "dos");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("pbfvi", "fyqvz");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ngusa", "ghrgi");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1347199651);
	it2 = monkey::get_itn(m1, 1347199651, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1112316382);
	val = _P<C::key_type, C::mapped_type>("azogw", "atencion");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["un dos tres quatro"] = "lfyef";
	std::cout << m1["amigo de pepito"] << std::endl;
	m1["amigo de la tornada"] = "vsjcp";
	std::cout << m1["qstey"] << std::endl;
	m1["bytwp"] = "soxeu";
	std::cout << m1["ibsuo"] << std::endl;
	m1["amigo de pepito"] = "vvono";
	std::cout << m1["fhifx"] << std::endl;
	m1["dsivl"] = "llhfj";
	std::cout << m1["jblxg"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [rmfyu]");
	it1 = m2.find("rmfyu");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hola amigo]");
	ret = m1.count("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de la tornada]");
	it1 = m1.find("amigo de la tornada");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [ycfeb]");
	it1 = m1.upper_bound("ycfeb");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [amigo de la tornada]");
	range = m1.equal_range("amigo de la tornada");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [pulbs]");
	it1 = m1.upper_bound("pulbs");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["dos"] = "jaems";
	std::cout << m2["llsyj"] << std::endl;
	m2["un"] = "cksty";
	std::cout << m2["oprbs"] << std::endl;
	m2["dos"] = "qjqbl";
	std::cout << m2["nemar"] << std::endl;
	m2["adcic"] = "twart";
	std::cout << m2["hola amigo"] << std::endl;
	m2["un"] = "amigo de la tornada";
	std::cout << m2["wnsoo"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [gimkp]");
	ret = m2.count("gimkp");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["ejnyn"] = "un";
	std::cout << m2["xczni"] << std::endl;
	m2["sukxy"] = "dezrp";
	std::cout << m2["wxewz"] << std::endl;
	m2["amigo de pepito"] = "lvxti";
	std::cout << m2["yhmgu"] << std::endl;
	m2["bfcbx"] = "hola amigo";
	std::cout << m2["wwnuu"] << std::endl;
	m2["amigo de pepito"] = "atencion";
	std::cout << m2["hola amigo"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["sltvs"] = "un";
	std::cout << m1["edoca"] << std::endl;
	m1["ywxrp"] = "twxtb";
	std::cout << m1["cewtt"] << std::endl;
	m1["fonxm"] = "nsnev";
	std::cout << m1["un dos tres quatro"] << std::endl;
	m1["lgmck"] = "";
	std::cout << m1["dos"] << std::endl;
	m1["ufhtz"] = "lerzd";
	std::cout << m1["un"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de la tornada]");
	it1 = m1.find("amigo de la tornada");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hola amigo]");
	range = m2.equal_range("hola amigo");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("lddrl");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 349965946);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 2021080393);
	it2 = monkey::get_itn(m2, 1728319498, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 260168254);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("rshqp");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1637812345);
	it2 = monkey::get_itn(m1, 1914955722, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1803488246);
	it2 = monkey::get_itn(m1, 612321718, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("amigo de pepito");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 1197206436);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("dytvo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [lueen]");
	it1 = m1.lower_bound("lueen");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [mccci]");
	it1 = m1.find("mccci");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1445269244);
	it2 = monkey::get_itn(m2, 1445269244, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 494992032);
	it2 = monkey::get_itn(m2, 494992032, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1219583825);
	it2 = monkey::get_itn(m2, 1219583825, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ceivz", "atencion");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1848346602);
	val = _P<C::key_type, C::mapped_type>("qvlex", "ifbay");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [un dos tres quatro]");
	it1 = m1.find("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dhffl]");
	ret = m2.count("dhffl");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [jtnjy]");
	it1 = m1.lower_bound("jtnjy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [kdxsk]");
	ret = m2.count("kdxsk");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("olrlb", "oixuu");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "queob");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 2111502611);
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "gaadk");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 2068158109);
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "dos");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("dos", "hola amigo");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1021783622);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1571279450);
	it2 = monkey::get_itn(m2, 49437484, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 584579774);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("cobeq");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1924915058);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ndlcw]");
	it1 = m1.lower_bound("ndlcw");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [wlzgh]");
	it1 = m1.lower_bound("wlzgh");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [trvlo]");
	it1 = m2.find("trvlo");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [atgyl]");
	it1 = m2.find("atgyl");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["pqrzz"] = "tuzhu";
	std::cout << m1["zxxwr"] << std::endl;
	m1["amigo de la tornada"] = "rvsxv";
	std::cout << m1["thpcx"] << std::endl;
	m1["sogra"] = "najjd";
	std::cout << m1["un dos tres quatro"] << std::endl;
	m1["atencion"] = "ndcfa";
	std::cout << m1["ewczf"] << std::endl;
	m1["un dos tres quatro"] = "hola amigo";
	std::cout << m1["qfmtj"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dos]");
	ret = m1.count("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [amigo de pepito]");
	it1 = m2.upper_bound("amigo de pepito");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [hola amigo]");
	it1 = m2.lower_bound("hola amigo");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [yyuac]");
	ret = m2.count("yyuac");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [aioji]");
	it1 = m1.upper_bound("aioji");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [fjmfy]");
	it1 = m1.find("fjmfy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 952835970);
	val = _P<C::key_type, C::mapped_type>("un", "ohdmf");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 2031931155);
	it2 = monkey::get_itn(m2, 2031931155, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1941140146);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "sgczk");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1922905978);
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "hola amigo");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("pczei", "lnbsn");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: []");
	it1 = m2.upper_bound("");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [amigo de pepito]");
	it1 = m2.lower_bound("amigo de pepito");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1664928255);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1220010171);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 748013247);
	it2 = monkey::get_itn(m2, 441162029, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 2129054428);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [psyva]");
	it1 = m2.upper_bound("psyva");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [vlzgj]");
	it1 = m2.upper_bound("vlzgj");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("dos", "amigo de pepito");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1079358536);
	val = _P<C::key_type, C::mapped_type>("pvrhn", "un dos tres quatro");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 704818281);
	val = _P<C::key_type, C::mapped_type>("clvzo", "wbfcm");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 415878169);
	it2 = monkey::get_itn(m1, 415878169, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1513665925);
	it2 = monkey::get_itn(m1, 1513665925, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [rmyit]");
	it1 = m1.find("rmyit");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [uelyr]");
	it1 = m1.lower_bound("uelyr");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [mwiry]");
	ret = m1.count("mwiry");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [agqvj]");
	it1 = m1.find("agqvj");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [amigo de la tornada]");
	it1 = m1.upper_bound("amigo de la tornada");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [amigo de pepito]");
	it1 = m1.lower_bound("amigo de pepito");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 235211771);
	it2 = monkey::get_itn(m1, 235211771, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("lcdly", "");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("aejxq", "gyoit");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 637248990);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "aldpg");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 437186986);
	val = _P<C::key_type, C::mapped_type>("wojmo", "dqnop");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 576324058);
	it2 = monkey::get_itn(m2, 576324058, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 82056107);
	it2 = monkey::get_itn(m2, 82056107, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1969088654);
	it2 = monkey::get_itn(m2, 1969088654, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 987866399);
	it2 = monkey::get_itn(m2, 987866399, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1641124907);
	it2 = monkey::get_itn(m2, 1641124907, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["phmym"] = "hola amigo";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["kqyjy"] = "atencion";
	std::cout << m2["norcb"] << std::endl;
	m2["kwvsc"] = "rtxfr";
	std::cout << m2["mhjhc"] << std::endl;
	m2["aceye"] = "hola amigo";
	std::cout << m2["gjvji"] << std::endl;
	m2["idakt"] = "un";
	std::cout << m2["yzbkg"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: []");
	it1 = m2.upper_bound("");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: []");
	it1 = m1.lower_bound("");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un dos tres quatro]");
	range = m2.equal_range("un dos tres quatro");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1940926207);
	it2 = monkey::get_itn(m2, 1940926207, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1671040864);
	it2 = monkey::get_itn(m2, 1671040864, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1904498092);
	val = _P<C::key_type, C::mapped_type>("jfify", "ribpq");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1921159626);
	val = _P<C::key_type, C::mapped_type>("fkryr", "ypfvr");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 638329408);
	val = _P<C::key_type, C::mapped_type>("mubvz", "dzzui");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: []");
	range = m1.equal_range("");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hlufc]");
	it1 = m1.find("hlufc");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [xfalz]");
	ret = m2.count("xfalz");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [nmamg]");
	it1 = m1.lower_bound("nmamg");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [lqdnz]");
	it1 = m2.upper_bound("lqdnz");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [jdooe]");
	it1 = m1.find("jdooe");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [xmnxp]");
	it1 = m1.upper_bound("xmnxp");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de pepito]");
	it1 = m2.find("amigo de pepito");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["mywpl"] = "pxgbc";
	std::cout << m1["hola amigo"] << std::endl;
	m1["amigo de pepito"] = "jmmyl";
	std::cout << m1["hola amigo"] << std::endl;
	m1["amigo de pepito"] = "nzyah";
	std::cout << m1["ygbmd"] << std::endl;
	m1["llrnh"] = "uyhfk";
	std::cout << m1["gvzdi"] << std::endl;
	m1["kvhky"] = "uyuxm";
	std::cout << m1["qxlhn"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [pfwvc]");
	it1 = m1.lower_bound("pfwvc");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hnvhb]");
	range = m2.equal_range("hnvhb");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 289674736);
	val = _P<C::key_type, C::mapped_type>("unohk", "qdhhk");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "un");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("rgton", "hvwyq");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 326874612);
	it2 = monkey::get_itn(m1, 326874612, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 653423364);
	val = _P<C::key_type, C::mapped_type>("uelao", "kuzzw");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [un]");
	it1 = m1.upper_bound("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [cylzd]");
	it1 = m2.lower_bound("cylzd");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["wnlvm"] = "dkncp";
	std::cout << m1["rijox"] << std::endl;
	m1["hola amigo"] = "ynwcm";
	std::cout << m1["dos"] << std::endl;
	m1["icigq"] = "eeehq";
	std::cout << m1["mgffo"] << std::endl;
	m1["vlwgp"] = "wnwiw";
	std::cout << m1["zhejn"] << std::endl;
	m1["crbgb"] = "zpzeu";
	std::cout << m1["uqbsy"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["ecnfl"] = "oyqss";
	std::cout << m1["un"] << std::endl;
	m1["kzikf"] = "acwbu";
	std::cout << m1[""] << std::endl;
	m1["hola amigo"] = "waflf";
	std::cout << m1["ewruq"] << std::endl;
	m1["amigo de la tornada"] = "eysok";
	std::cout << m1[""] << std::endl;
	m1["cppym"] = "jhphh";
	std::cout << m1["spnzl"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["amigo de pepito"] = "jpjtp";
	std::cout << m1["un dos tres quatro"] << std::endl;
	m1["swrei"] = "atencion";
	std::cout << m1["atencion"] << std::endl;
	m1["dos"] = "atencion";
	std::cout << m1["atencion"] << std::endl;
	m1["oxbdg"] = "amigo de pepito";
	std::cout << m1["mjkdl"] << std::endl;
	m1["wfoom"] = "ravzv";
	std::cout << m1["egxgf"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [doaoi]");
	it1 = m2.upper_bound("doaoi");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [un]");
	it1 = m1.find("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: []");
	it1 = m1.find("");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [atencion]");
	ret = m1.count("atencion");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["fhhfx"] = "atencion";
	std::cout << m2["nqaju"] << std::endl;
	m2["amigo de pepito"] = "nhkyo";
	std::cout << m2["qiatv"] << std::endl;
	m2["czdij"] = "pibrb";
	std::cout << m2["kexem"] << std::endl;
	m2["hola amigo"] = "amigo de la tornada";
	std::cout << m2["amigo de la tornada"] << std::endl;
	m2["wrfyn"] = "lpdrz";
	std::cout << m2["dpvhi"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [yqufr]");
	it1 = m2.upper_bound("yqufr");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1583267932);
	it2 = monkey::get_itn(m1, 1982296869, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 503461593);
	it2 = monkey::get_itn(m1, 106571435, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [sdfjy]");
	it1 = m1.find("sdfjy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [kmbfm]");
	it1 = m1.lower_bound("kmbfm");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [lftgh]");
	it1 = m1.upper_bound("lftgh");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [lvcun]");
	ret = m2.count("lvcun");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [oxqiw]");
	it1 = m1.lower_bound("oxqiw");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [slcfq]");
	ret = m1.count("slcfq");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1406712683);
	it2 = monkey::get_itn(m1, 815471958, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 374430987);
	it2 = monkey::get_itn(m1, 863993328, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1399022166);
	it2 = monkey::get_itn(m2, 802530260, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 758391674);
	it2 = monkey::get_itn(m2, 1230619800, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hola amigo]");
	ret = m2.count("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1939386378);
	it2 = monkey::get_itn(m2, 540428572, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1786507567);
	it2 = monkey::get_itn(m2, 1821735110, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 628309816);
	it2 = monkey::get_itn(m2, 1073273628, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["un"] = "amigo de pepito";
	std::cout << m1["qgwws"] << std::endl;
	m1["jvwha"] = "pyxau";
	std::cout << m1["cjico"] << std::endl;
	m1["mhvuo"] = "sfkpd";
	std::cout << m1["mmxkv"] << std::endl;
	m1["ulyrn"] = "zrehu";
	std::cout << m1["pidld"] << std::endl;
	m1["ovxyk"] = "cxoaj";
	std::cout << m1["aeuax"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [badxu]");
	it1 = m2.find("badxu");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1139496496);
	it2 = monkey::get_itn(m1, 1139496496, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("epvqr", "pfzzo");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 240182285);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "un");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 747805343);
	val = _P<C::key_type, C::mapped_type>("", "wxxcx");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1289165425);
	it2 = monkey::get_itn(m1, 1289165425, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("wyeyz");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 998090601);
	it2 = monkey::get_itn(m1, 678477414, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 72156325);
	it2 = monkey::get_itn(m1, 1145823595, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 1112399451);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 599344671);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [ikcfn]");
	it1 = m2.upper_bound("ikcfn");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hcoqb]");
	range = m2.equal_range("hcoqb");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [lqaow]");
	it1 = m2.find("lqaow");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [rwive]");
	range = m2.equal_range("rwive");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 1207144780);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 2097981850);
	it2 = monkey::get_itn(m1, 115536879, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1821123021);
	it2 = monkey::get_itn(m1, 1609707755, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [ugeie]");
	range = m1.equal_range("ugeie");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un]");
	range = m2.equal_range("un");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [pbywg]");
	it1 = m2.lower_bound("pbywg");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [lwcgq]");
	it1 = m2.upper_bound("lwcgq");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [otfkb]");
	it1 = m2.find("otfkb");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [iawan]");
	ret = m2.count("iawan");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("dcsoi", "zhtix");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1873713744);
	val = _P<C::key_type, C::mapped_type>("ibusc", "mmpoj");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "un dos tres quatro");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("jxoso", "un dos tres quatro");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 366578548);
	it2 = monkey::get_itn(m1, 366578548, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 670214126);
	it2 = monkey::get_itn(m2, 1419351705, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 655378041);
	it2 = monkey::get_itn(m2, 1149339126, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ewtjy]");
	it1 = m1.lower_bound("ewtjy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [dos]");
	it1 = m2.find("dos");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [dos]");
	it1 = m2.lower_bound("dos");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [wnygy]");
	it1 = m1.find("wnygy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 433365183);
	it2 = monkey::get_itn(m2, 433365183, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 2007168845);
	val = _P<C::key_type, C::mapped_type>("ndlza", "xexoc");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("atencion", "un dos tres quatro");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1495089972);
	it2 = monkey::get_itn(m2, 1495089972, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("jhtwz", "nogmd");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [zswjn]");
	ret = m1.count("zswjn");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1170108087);
	it2 = monkey::get_itn(m2, 921058682, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1453864949);
	it2 = monkey::get_itn(m2, 1934095931, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 811364545);
	it2 = monkey::get_itn(m2, 741017453, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("kwies");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("xgmgx");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [urdoz]");
	it1 = m2.upper_bound("urdoz");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [inaze]");
	ret = m2.count("inaze");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dos]");
	ret = m1.count("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [nrzbz]");
	it1 = m1.lower_bound("nrzbz");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [owark]");
	it1 = m1.upper_bound("owark");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 36037642);
	it2 = monkey::get_itn(m2, 2100275890, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 980231962);
	it2 = monkey::get_itn(m2, 1304995481, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1429671205);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [qwfeu]");
	it1 = m2.lower_bound("qwfeu");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [un]");
	ret = m1.count("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hshqz]");
	it1 = m2.find("hshqz");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [atencion]");
	range = m1.equal_range("atencion");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [ttupb]");
	it1 = m1.find("ttupb");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1666140100);
	it2 = monkey::get_itn(m2, 583922983, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1101043301);
	it2 = monkey::get_itn(m2, 1187197363, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1[""] = "ixdqy";
	std::cout << m1["un"] << std::endl;
	m1["ggrba"] = "ctfle";
	std::cout << m1["dos"] << std::endl;
	m1["amigo de pepito"] = "unrlf";
	std::cout << m1["upjzg"] << std::endl;
	m1["swdbd"] = "efehz";
	std::cout << m1["ufdvq"] << std::endl;
	m1["wmcpy"] = "dos";
	std::cout << m1["dos"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [toczr]");
	ret = m1.count("toczr");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [occpp]");
	range = m2.equal_range("occpp");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hqzjf]");
	ret = m2.count("hqzjf");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [hola amigo]");
	it1 = m1.upper_bound("hola amigo");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("dos", "nncrr");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 736443438);
	it2 = monkey::get_itn(m2, 736443438, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1600856998);
	val = _P<C::key_type, C::mapped_type>("ajazu", "");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("rjmej", "amigo de pepito");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 346566896);
	it2 = monkey::get_itn(m2, 346566896, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dos]");
	it1 = m2.upper_bound("dos");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1636241759);
	it2 = monkey::get_itn(m2, 1911378842, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("ilukn");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 181222698);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1245039697);
	it2 = monkey::get_itn(m2, 1061454770, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("anzft");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["rniwo"] = "hola amigo";
	std::cout << m2["pgnyu"] << std::endl;
	m2["ijzcw"] = "atencion";
	std::cout << m2["atencion"] << std::endl;
	m2["qvymn"] = "hensc";
	std::cout << m2["jygyg"] << std::endl;
	m2["amigo de pepito"] = "amigo de la tornada";
	std::cout << m2["jenik"] << std::endl;
	m2["hola amigo"] = "xggvs";
	std::cout << m2["xbznt"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m1.lower_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [sdkwm]");
	ret = m1.count("sdkwm");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [vdxda]");
	it1 = m2.lower_bound("vdxda");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 639160759);
	it2 = monkey::get_itn(m2, 639160759, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1750050148);
	val = _P<C::key_type, C::mapped_type>("wmvbz", "ovtqz");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("", "zqjbh");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("adlpe", "gjrex");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1069458672);
	it2 = monkey::get_itn(m2, 1069458672, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [alqjj]");
	it1 = m1.lower_bound("alqjj");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [liikl]");
	range = m1.equal_range("liikl");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ulgde]");
	it1 = m1.lower_bound("ulgde");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [rzznt]");
	it1 = m1.lower_bound("rzznt");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("euxgg", "psrdr");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("", "un dos tres quatro");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 967127941);
	val = _P<C::key_type, C::mapped_type>("dghft", "hwowg");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "gisxc");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("teayf", "amigo de la tornada");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 94966586);
	val = _P<C::key_type, C::mapped_type>("tuzcs", "");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 293935929);
	val = _P<C::key_type, C::mapped_type>("aljld", "amigo de la tornada");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1705678945);
	val = _P<C::key_type, C::mapped_type>("ullzq", "tdiuz");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("yginh", "un dos tres quatro");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("atencion", "dos");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [ymwtx]");
	range = m1.equal_range("ymwtx");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["dosnk"] = "amigo de la tornada";
	std::cout << m2["uakjj"] << std::endl;
	m2["ascdn"] = "amigo de la tornada";
	std::cout << m2["lleje"] << std::endl;
	m2["sbsvr"] = "kbfed";
	std::cout << m2["epjnj"] << std::endl;
	m2["hnoun"] = "mapqj";
	std::cout << m2["tdwla"] << std::endl;
	m2["xlqfp"] = "gvkrk";
	std::cout << m2["un dos tres quatro"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [xabmr]");
	it1 = m2.find("xabmr");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1[""] = "yqvxd";
	std::cout << m1["atencion"] << std::endl;
	m1["hola amigo"] = "ruabr";
	std::cout << m1["hola amigo"] << std::endl;
	m1["zldwn"] = "";
	std::cout << m1["qttib"] << std::endl;
	m1["amigo de la tornada"] = "oglrb";
	std::cout << m1["cuqcw"] << std::endl;
	m1["itmhg"] = "amigo de la tornada";
	std::cout << m1["xpaqi"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [kbjai]");
	it1 = m2.lower_bound("kbjai");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [qvfha]");
	it1 = m1.upper_bound("qvfha");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [amigo de la tornada]");
	it1 = m1.lower_bound("amigo de la tornada");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [atencion]");
	it1 = m1.find("atencion");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [mufuo]");
	it1 = m1.find("mufuo");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["tjxre"] = "dos";
	std::cout << m2["mkbxp"] << std::endl;
	m2["amigo de pepito"] = "atencion";
	std::cout << m2["atencion"] << std::endl;
	m2["pohdl"] = "kroxr";
	std::cout << m2["atencion"] << std::endl;
	m2["zodrf"] = "bimry";
	std::cout << m2["ojpid"] << std::endl;
	m2["ykkjj"] = "dos";
	std::cout << m2["tuiek"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [czegk]");
	it1 = m2.find("czegk");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [zltov]");
	it1 = m1.lower_bound("zltov");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un]");
	range = m1.equal_range("un");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [un]");
	ret = m1.count("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 560192193);
	it2 = monkey::get_itn(m1, 370301329, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 881938270);
	it2 = monkey::get_itn(m1, 2142142101, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [jklxf]");
	ret = m1.count("jklxf");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 53828576);
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "amigo de la tornada");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1094467830);
	val = _P<C::key_type, C::mapped_type>("vuzoj", "wdrkb");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1952494380);
	val = _P<C::key_type, C::mapped_type>("qdkbc", "mxsiw");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 2117862989);
	it2 = monkey::get_itn(m2, 2117862989, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1757736155);
	it2 = monkey::get_itn(m2, 1757736155, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1932671314);
	it2 = monkey::get_itn(m2, 790291160, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 602181008);
	it2 = monkey::get_itn(m2, 936548989, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("bhfbx");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1976318122);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [xexzb]");
	it1 = m1.find("xexzb");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [yglap]");
	it1 = m1.lower_bound("yglap");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [tlsvy]");
	it1 = m1.upper_bound("tlsvy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [myora]");
	range = m2.equal_range("myora");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [onbfm]");
	range = m2.equal_range("onbfm");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 853741262);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "rbdai");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1993567702);
	it2 = monkey::get_itn(m1, 1993567702, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 742371099);
	val = _P<C::key_type, C::mapped_type>("jndcp", "atencion");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 797828408);
	val = _P<C::key_type, C::mapped_type>("tfixg", "keapv");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 751228968);
	it2 = monkey::get_itn(m1, 751228968, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [djehy]");
	it1 = m2.upper_bound("djehy");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [amigo de la tornada]");
	it1 = m2.upper_bound("amigo de la tornada");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1433632504);
	val = _P<C::key_type, C::mapped_type>("fruju", "dos");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 598711625);
	val = _P<C::key_type, C::mapped_type>("lbixv", "amigo de pepito");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 24543198);
	it2 = monkey::get_itn(m2, 24543198, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1668072103);
	val = _P<C::key_type, C::mapped_type>("vamfn", "zxprt");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1529595708);
	it2 = monkey::get_itn(m2, 1529595708, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un dos tres quatro]");
	range = m2.equal_range("un dos tres quatro");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1287630246);
	it2 = monkey::get_itn(m1, 1287630246, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 808218701);
	it2 = monkey::get_itn(m1, 808218701, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("uhshs", "un");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 735750523);
	it2 = monkey::get_itn(m1, 735750523, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "kszie");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hola amigo]");
	range = m1.equal_range("hola amigo");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [nzvjj]");
	ret = m2.count("nzvjj");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un]");
	it1 = m2.lower_bound("un");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [btsij]");
	ret = m2.count("btsij");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [kedsq]");
	range = m2.equal_range("kedsq");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [wdzro]");
	range = m2.equal_range("wdzro");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [un dos tres quatro]");
	it1 = m2.find("un dos tres quatro");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [mcpwh]");
	it1 = m2.upper_bound("mcpwh");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [lmfha]");
	range = m2.equal_range("lmfha");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [un]");
	it1 = m1.upper_bound("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [wamdw]");
	it1 = m1.upper_bound("wamdw");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [acghr]");
	ret = m2.count("acghr");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [cocjv]");
	it1 = m1.lower_bound("cocjv");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [bzpxb]");
	it1 = m1.find("bzpxb");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dpidr]");
	it1 = m2.upper_bound("dpidr");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [atencion]");
	it1 = m2.find("atencion");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [mneno]");
	it1 = m2.lower_bound("mneno");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [arndg]");
	it1 = m2.lower_bound("arndg");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [lnesr]");
	ret = m1.count("lnesr");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [ludcp]");
	it1 = m2.upper_bound("ludcp");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m2.lower_bound("un dos tres quatro");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["diuzk"] = "xanlu";
	std::cout << m1["njjfa"] << std::endl;
	m1["un"] = "jrxzk";
	std::cout << m1["czgrs"] << std::endl;
	m1["aplkm"] = "nbwhu";
	std::cout << m1["rfsrz"] << std::endl;
	m1["okylj"] = "gmkof";
	std::cout << m1["amigo de pepito"] << std::endl;
	m1["amigo de la tornada"] = "un";
	std::cout << m1["zflvm"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [gnzgy]");
	it1 = m1.upper_bound("gnzgy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 2147283004);
	val = _P<C::key_type, C::mapped_type>("uejxj", "un dos tres quatro");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1220906762);
	it2 = monkey::get_itn(m1, 1220906762, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 889148189);
	it2 = monkey::get_itn(m1, 889148189, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("pewpf", "amigo de la tornada");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("atencion", "wxaua");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [pdrac]");
	ret = m2.count("pdrac");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["pfjgn"] = "fhhjc";
	std::cout << m1[""] << std::endl;
	m1["agzas"] = "kgcaj";
	std::cout << m1["covdb"] << std::endl;
	m1["un"] = "sxjyf";
	std::cout << m1["jhwql"] << std::endl;
	m1["amigo de pepito"] = "yqklz";
	std::cout << m1["nikpy"] << std::endl;
	m1[""] = "sepnc";
	std::cout << m1["dos"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [snfdy]");
	it1 = m2.find("snfdy");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [kwrfc]");
	ret = m2.count("kwrfc");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [ghpxf]");
	ret = m2.count("ghpxf");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1022075860);
	it2 = monkey::get_itn(m1, 2040559933, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1785032613);
	it2 = monkey::get_itn(m1, 1935893300, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [ojefv]");
	it1 = m2.upper_bound("ojefv");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [allkw]");
	ret = m2.count("allkw");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un]");
	it1 = m1.lower_bound("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [rahxc]");
	ret = m1.count("rahxc");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "njdax");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 107212180);
	it2 = monkey::get_itn(m1, 107212180, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 2131974579);
	it2 = monkey::get_itn(m1, 2131974579, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1451016617);
	val = _P<C::key_type, C::mapped_type>("qsvbl", "");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("atencion", "atencion");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [geigc]");
	ret = m1.count("geigc");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [kfdca]");
	ret = m1.count("kfdca");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: []");
	it1 = m1.upper_bound("");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 728268359);
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "vzghw");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1449538552);
	val = _P<C::key_type, C::mapped_type>("ialki", "atencion");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1655127425);
	val = _P<C::key_type, C::mapped_type>("cyvso", "dos");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 762389529);
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "atencion");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ousso", "aqplz");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [xidve]");
	ret = m1.count("xidve");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["buisk"] = "cwarq";
	std::cout << m1["jhwlz"] << std::endl;
	m1[""] = "fvbee";
	std::cout << m1["un dos tres quatro"] << std::endl;
	m1["hola amigo"] = "oghya";
	std::cout << m1["ddrfu"] << std::endl;
	m1["afrzq"] = "un";
	std::cout << m1["tskwy"] << std::endl;
	m1["un"] = "un";
	std::cout << m1["un"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [vgcpq]");
	range = m2.equal_range("vgcpq");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [bqeuk]");
	it1 = m1.lower_bound("bqeuk");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [jwilg]");
	range = m2.equal_range("jwilg");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("", "bsmju");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 344180485);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "cnjut");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 301537034);
	val = _P<C::key_type, C::mapped_type>("ypuvz", "dsmbh");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 207361535);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "dos");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 191236858);
	it2 = monkey::get_itn(m2, 191236858, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dos]");
	it1 = m1.upper_bound("dos");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [ptgas]");
	it1 = m1.upper_bound("ptgas");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un]");
	it1 = m1.lower_bound("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 314482409);
	it2 = monkey::get_itn(m2, 1546110060, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 112114060);
	it2 = monkey::get_itn(m2, 1313932615, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1206777265);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 351495979);
	it2 = monkey::get_itn(m2, 2133560814, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["un"] = "ncmit";
	std::cout << m1["plyhg"] << std::endl;
	m1["lqksg"] = "ybsff";
	std::cout << m1["hola amigo"] << std::endl;
	m1["lzqvo"] = "zbosk";
	std::cout << m1["fknlk"] << std::endl;
	m1["atencion"] = "sknso";
	std::cout << m1["atencion"] << std::endl;
	m1["cpxpo"] = "ndtmg";
	std::cout << m1["hqmmc"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un]");
	it1 = m1.lower_bound("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [laelw]");
	ret = m2.count("laelw");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dos]");
	ret = m1.count("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ucbcm]");
	it1 = m2.lower_bound("ucbcm");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dos]");
	it1 = m2.upper_bound("dos");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 455610636);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("amigo de la tornada");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1974540002);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("vifmr");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["slhcg"] = "un dos tres quatro";
	std::cout << m1["ivnky"] << std::endl;
	m1["hola amigo"] = "un dos tres quatro";
	std::cout << m1["eshsy"] << std::endl;
	m1["adttw"] = "atencion";
	std::cout << m1["pvrve"] << std::endl;
	m1["amqnw"] = "sdbpr";
	std::cout << m1["kabif"] << std::endl;
	m1["nyxjc"] = "un";
	std::cout << m1["lurqo"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [ebuye]");
	it1 = m2.upper_bound("ebuye");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["ygkfk"] = "fkijy";
	std::cout << m1["un"] << std::endl;
	m1["un dos tres quatro"] = "zvkea";
	std::cout << m1["dos"] << std::endl;
	m1["hola amigo"] = "atencion";
	std::cout << m1["lzhlh"] << std::endl;
	m1["atencion"] = "";
	std::cout << m1["eagcn"] << std::endl;
	m1["dos"] = "";
	std::cout << m1["amigo de pepito"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["atencion"] = "pihaj";
	std::cout << m1["un dos tres quatro"] << std::endl;
	m1["hfnzc"] = "un dos tres quatro";
	std::cout << m1["vprij"] << std::endl;
	m1["amigo de la tornada"] = "un dos tres quatro";
	std::cout << m1["rusis"] << std::endl;
	m1["szkcp"] = "xydkz";
	std::cout << m1["dbqas"] << std::endl;
	m1["ibegd"] = "ywmre";
	std::cout << m1["zzilb"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ypkax]");
	it1 = m1.lower_bound("ypkax");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["pvzzy"] = "hdxga";
	std::cout << m1["zgtaf"] << std::endl;
	m1["dos"] = "amigo de la tornada";
	std::cout << m1["un"] << std::endl;
	m1["ouenj"] = "amigo de pepito";
	std::cout << m1["cbacj"] << std::endl;
	m1["girgu"] = "opswt";
	std::cout << m1["ewdpa"] << std::endl;
	m1["amigo de la tornada"] = "evliv";
	std::cout << m1["kxsvh"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 557856851);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 86196569);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("krzhw");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("pzotw");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 182678084);
	it2 = monkey::get_itn(m2, 1311254534, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["ajqbr"] = "upihk";
	std::cout << m1["bldxb"] << std::endl;
	m1["ncbiz"] = "mrtci";
	std::cout << m1["dos"] << std::endl;
	m1["ngmgy"] = "wgpid";
	std::cout << m1["dos"] << std::endl;
	m1["outdy"] = "nxxao";
	std::cout << m1[""] << std::endl;
	m1["vukkc"] = "ragpj";
	std::cout << m1["un dos tres quatro"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1573369056);
	it2 = monkey::get_itn(m2, 1573369056, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 456658552);
	val = _P<C::key_type, C::mapped_type>("ukfwa", "dbtzn");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1158689491);
	it2 = monkey::get_itn(m2, 1158689491, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1540038501);
	val = _P<C::key_type, C::mapped_type>("nkpmy", "erhuf");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hola amigo", "amigo de la tornada");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [tovon]");
	it1 = m1.find("tovon");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [wsrph]");
	ret = m1.count("wsrph");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("vsvci", "qxvni");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("wlwlw", "amigo de la tornada");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("atencion", "hola amigo");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 45518552);
	val = _P<C::key_type, C::mapped_type>("dxraq", "dasvx");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 303657234);
	val = _P<C::key_type, C::mapped_type>("gsdrq", "nhrfv");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hola amigo]");
	it1 = m2.find("hola amigo");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [pzthw]");
	it1 = m2.lower_bound("pzthw");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [afafy]");
	it1 = m1.upper_bound("afafy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [tufim]");
	ret = m1.count("tufim");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [nquji]");
	it1 = m1.lower_bound("nquji");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 145107646);
	it2 = monkey::get_itn(m2, 145107646, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("oywof", "gdjgv");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("appwc", "kscvd");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ggqez", "eyvkv");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 847377975);
	val = _P<C::key_type, C::mapped_type>("atencion", "un");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [vyorb]");
	it1 = m2.find("vyorb");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [un]");
	it1 = m1.upper_bound("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [wvhuh]");
	it1 = m2.upper_bound("wvhuh");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [jtsws]");
	it1 = m2.upper_bound("jtsws");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [xswyw]");
	ret = m2.count("xswyw");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [mzqju]");
	it1 = m2.lower_bound("mzqju");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [atencion]");
	ret = m1.count("atencion");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [jkddi]");
	it1 = m1.upper_bound("jkddi");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [wdvty]");
	ret = m1.count("wdvty");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [babtl]");
	it1 = m2.lower_bound("babtl");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [tcdeo]");
	range = m2.equal_range("tcdeo");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [ehpbn]");
	it1 = m2.find("ehpbn");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 2043466723);
	val = _P<C::key_type, C::mapped_type>("ejbhy", "cloqu");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hseov", "amigo de pepito");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1300342553);
	it2 = monkey::get_itn(m1, 1300342553, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 817673601);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "yvqfe");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1580916752);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "amigo de la tornada");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [vsupy]");
	it1 = m1.find("vsupy");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 2012717995);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 682907948);
	it2 = monkey::get_itn(m1, 293903845, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1840040266);
	it2 = monkey::get_itn(m1, 1954895175, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("vcblt", "atencion");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1956005000);
	val = _P<C::key_type, C::mapped_type>("bfnoq", "msdou");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1577564757);
	val = _P<C::key_type, C::mapped_type>("zrkdz", "aulbi");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("coktr", "jgivs");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 726297346);
	it2 = monkey::get_itn(m2, 726297346, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("aqvhm", "xwton");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("xzoax", "hola amigo");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1305550418);
	it2 = monkey::get_itn(m2, 1305550418, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 749223504);
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "atencion");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1366045091);
	val = _P<C::key_type, C::mapped_type>("kstys", "atencion");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [rbhqp]");
	it1 = m2.lower_bound("rbhqp");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["ndtum"] = "qjncc";
	std::cout << m1["auywh"] << std::endl;
	m1["faioq"] = "xdmfa";
	std::cout << m1["fpdzl"] << std::endl;
	m1["un"] = "asfca";
	std::cout << m1["ybbfi"] << std::endl;
	m1["un dos tres quatro"] = "xxpwc";
	std::cout << m1["ccfht"] << std::endl;
	m1["iebnh"] = "hmejt";
	std::cout << m1["kwkuf"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hola amigo]");
	ret = m2.count("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de pepito]");
	it1 = m2.find("amigo de pepito");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1809940065);
	val = _P<C::key_type, C::mapped_type>("dos", "un");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 328482704);
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "amigo de pepito");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "xzgbb");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1669694919);
	val = _P<C::key_type, C::mapped_type>("zxwtu", "un dos tres quatro");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 2145112042);
	val = _P<C::key_type, C::mapped_type>("seyzi", "lzeik");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [yfnzj]");
	ret = m1.count("yfnzj");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dos]");
	ret = m1.count("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("dqxdz", "qatyk");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("vqfiq", "izzef");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1568061657);
	val = _P<C::key_type, C::mapped_type>("bexai", "zlopd");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1935415490);
	val = _P<C::key_type, C::mapped_type>("abzyr", "atencion");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1000173325);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "vqzqb");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["un"] = "ldqcu";
	std::cout << m1["qfwtg"] << std::endl;
	m1["rzfzl"] = "swxno";
	std::cout << m1["un"] << std::endl;
	m1["yznae"] = "fucap";
	std::cout << m1["flqnj"] << std::endl;
	m1["amigo de pepito"] = "";
	std::cout << m1["dos"] << std::endl;
	m1["xoqnm"] = "atencion";
	std::cout << m1["un dos tres quatro"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("wtkty", "jnhsc");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 182130421);
	it2 = monkey::get_itn(m2, 182130421, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ddusp", "vzmon");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("elfyw", "ywmmd");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 966123263);
	it2 = monkey::get_itn(m2, 966123263, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("itkzq", "neydn");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1804968380);
	it2 = monkey::get_itn(m1, 1804968380, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1366596413);
	val = _P<C::key_type, C::mapped_type>("fjito", "un dos tres quatro");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hikje", "eotuc");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1150426084);
	it2 = monkey::get_itn(m1, 1150426084, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["hola amigo"] = "oqiub";
	std::cout << m2["amigo de la tornada"] << std::endl;
	m2["gzhei"] = "otugy";
	std::cout << m2["buokx"] << std::endl;
	m2["ypcbb"] = "un dos tres quatro";
	std::cout << m2["nwfcn"] << std::endl;
	m2["amigo de la tornada"] = "dos";
	std::cout << m2["nghho"] << std::endl;
	m2["tsbke"] = "dcqff";
	std::cout << m2["yygnw"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["averl"] = "amigo de la tornada";
	std::cout << m2["aqbwi"] << std::endl;
	m2[""] = "djouq";
	std::cout << m2["opvuc"] << std::endl;
	m2["huahs"] = "ydaax";
	std::cout << m2["qyzyc"] << std::endl;
	m2["kiqac"] = "xsvsm";
	std::cout << m2["jtwjc"] << std::endl;
	m2["un"] = "ttcsu";
	std::cout << m2["svqxc"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [ejabb]");
	it1 = m1.find("ejabb");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 1983170252);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 250061016);
	it2 = monkey::get_itn(m1, 415892304, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("nioib");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 1686633079);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1357080071);
	it2 = monkey::get_itn(m1, 1025709771, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1988433870);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 448780721);
	it2 = monkey::get_itn(m2, 1365784668, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1204297076);
	it2 = monkey::get_itn(m2, 5568177, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 303136351);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("apokl");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [amigo de la tornada]");
	it1 = m2.lower_bound("amigo de la tornada");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [rahyz]");
	it1 = m1.find("rahyz");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [vdlws]");
	it1 = m2.find("vdlws");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [qyxin]");
	range = m2.equal_range("qyxin");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hzfgx]");
	range = m2.equal_range("hzfgx");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [un]");
	ret = m1.count("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [amigo de la tornada]");
	it1 = m1.upper_bound("amigo de la tornada");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m1.lower_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de pepito]");
	it1 = m2.find("amigo de pepito");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [dglwt]");
	it1 = m1.lower_bound("dglwt");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("yuuuj", "afdxp");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 161280127);
	val = _P<C::key_type, C::mapped_type>("zemiw", "un dos tres quatro");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "atencion");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("udwsx", "hola amigo");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1164566743);
	it2 = monkey::get_itn(m2, 1164566743, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [frjds]");
	range = m1.equal_range("frjds");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [uclug]");
	it1 = m1.lower_bound("uclug");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["un dos tres quatro"] = "sfzbk";
	std::cout << m2["rrdxl"] << std::endl;
	m2["adcse"] = "atencion";
	std::cout << m2["qfvyz"] << std::endl;
	m2["rpegz"] = "amigo de pepito";
	std::cout << m2["zyprr"] << std::endl;
	m2["qehqi"] = "atencion";
	std::cout << m2["yfpqk"] << std::endl;
	m2["rlyic"] = "pcbdb";
	std::cout << m2["un dos tres quatro"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 969267114);
	it2 = monkey::get_itn(m2, 969267114, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("", "fpbfu");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 389121926);
	val = _P<C::key_type, C::mapped_type>("hola amigo", "sexuh");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 554456302);
	it2 = monkey::get_itn(m2, 554456302, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1548479763);
	val = _P<C::key_type, C::mapped_type>("yshvh", "amigo de pepito");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [ilmpf]");
	ret = m2.count("ilmpf");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["frcaa"] = "ykkyy";
	std::cout << m1["shhzb"] << std::endl;
	m1["un"] = "smihd";
	std::cout << m1["mrcbv"] << std::endl;
	m1["amigo de pepito"] = "iuqgf";
	std::cout << m1["gfmam"] << std::endl;
	m1["amigo de la tornada"] = "bfmwt";
	std::cout << m1["dxlro"] << std::endl;
	m1["tlwnl"] = "amigo de pepito";
	std::cout << m1["opfxw"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un dos tres quatro]");
	range = m1.equal_range("un dos tres quatro");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("mncjs");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 797438246);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1199849211);
	it2 = monkey::get_itn(m2, 1979669622, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 2115255480);
	it2 = monkey::get_itn(m2, 1700707352, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("oaqdp");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [veevx]");
	ret = m1.count("veevx");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [amigo de la tornada]");
	range = m2.equal_range("amigo de la tornada");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 549713520);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1795278944);
	it2 = monkey::get_itn(m1, 482610944, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("kpabl");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("ikfgz");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["iwnpu"] = "aaqxv";
	std::cout << m2["pveaz"] << std::endl;
	m2["efaor"] = "uqzpg";
	std::cout << m2["mqebh"] << std::endl;
	m2["ghywh"] = "zwrdy";
	std::cout << m2["vcyyq"] << std::endl;
	m2["inhhc"] = "pqftt";
	std::cout << m2["tztuy"] << std::endl;
	m2["un"] = "yjcye";
	std::cout << m2["acztt"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [hola amigo]");
	it1 = m2.lower_bound("hola amigo");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [axivw]");
	it1 = m2.find("axivw");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 2037144999);
	val = _P<C::key_type, C::mapped_type>("dos", "dos");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("icydx", "hola amigo");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1422204495);
	val = _P<C::key_type, C::mapped_type>("pddmf", "wdacu");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 420746850);
	it2 = monkey::get_itn(m2, 420746850, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 735800800);
	val = _P<C::key_type, C::mapped_type>("qbwrl", "royzb");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [dos]");
	it1 = m1.lower_bound("dos");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [amkeh]");
	ret = m1.count("amkeh");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [zlkrn]");
	it1 = m1.upper_bound("zlkrn");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de la tornada]");
	it1 = m2.find("amigo de la tornada");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de la tornada]");
	it1 = m1.find("amigo de la tornada");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["cccnm"] = "ayihh";
	std::cout << m1["uilgc"] << std::endl;
	m1["omzzq"] = "un";
	std::cout << m1["gtubs"] << std::endl;
	m1["ewlsa"] = "skuzm";
	std::cout << m1["un dos tres quatro"] << std::endl;
	m1["wlyla"] = "atencion";
	std::cout << m1["nxmus"] << std::endl;
	m1["vmgzi"] = "tkhlx";
	std::cout << m1["kjswh"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [cjhqe]");
	ret = m1.count("cjhqe");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [pizmu]");
	it1 = m1.find("pizmu");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [amigo de la tornada]");
	range = m2.equal_range("amigo de la tornada");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [rmndy]");
	ret = m1.count("rmndy");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [irlqs]");
	ret = m2.count("irlqs");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [un dos tres quatro]");
	ret = m1.count("un dos tres quatro");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [hola amigo]");
	it1 = m1.lower_bound("hola amigo");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hola amigo]");
	range = m2.equal_range("hola amigo");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("bfcrh", "qaxkj");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ziumh", "ckbkw");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("xeaex", "lzuuy");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("xygnv", "un dos tres quatro");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("cyypz", "un dos tres quatro");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [atencion]");
	it1 = m1.lower_bound("atencion");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 2145571960);
	it2 = monkey::get_itn(m1, 1944699903, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 188194111);
	it2 = monkey::get_itn(m1, 433833557, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("tdbrb");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1602456952);
	it2 = monkey::get_itn(m1, 1743640794, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 307420186);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1140591295);
	val = _P<C::key_type, C::mapped_type>("sxhmp", "hola amigo");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1043977817);
	val = _P<C::key_type, C::mapped_type>("un", "hola amigo");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("qwnrp", "jjemr");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("tkgoj", "ayufx");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 625766597);
	it2 = monkey::get_itn(m2, 625766597, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1523730463);
	it2 = monkey::get_itn(m2, 1523730463, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1437635491);
	val = _P<C::key_type, C::mapped_type>("neszv", "");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 856041695);
	val = _P<C::key_type, C::mapped_type>("eyxgz", "oyolz");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 358956370);
	val = _P<C::key_type, C::mapped_type>("dos", "jrvef");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("zidfi", "urato");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1496428332);
	val = _P<C::key_type, C::mapped_type>("wkrjq", "ekhvf");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("atencion", "cyyhg");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("avwog", "yekwo");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 981574029);
	it2 = monkey::get_itn(m2, 981574029, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("rihwv", "mqlkq");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1130246409);
	it2 = monkey::get_itn(m1, 1130246409, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 944967513);
	it2 = monkey::get_itn(m1, 944967513, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("huxfk", "krcwi");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 2070539513);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "tzagp");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1024630853);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "hola amigo");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [amigo de pepito]");
	it1 = m1.lower_bound("amigo de pepito");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [qiqyw]");
	it1 = m1.find("qiqyw");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [tptsq]");
	range = m1.equal_range("tptsq");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [asccf]");
	it1 = m2.find("asccf");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [amigo de la tornada]");
	it1 = m2.upper_bound("amigo de la tornada");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["dos"] = "pzphy";
	std::cout << m2["uxkom"] << std::endl;
	m2["atencion"] = "tvgvn";
	std::cout << m2["amigo de pepito"] << std::endl;
	m2["letqi"] = "wshlt";
	std::cout << m2["un"] << std::endl;
	m2["hola amigo"] = "rxbfd";
	std::cout << m2["amigo de pepito"] << std::endl;
	m2[""] = "vtbxp";
	std::cout << m2["dos"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [hbgop]");
	it1 = m1.lower_bound("hbgop");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [rdjcd]");
	ret = m2.count("rdjcd");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [hola amigo]");
	it1 = m1.lower_bound("hola amigo");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [amigo de la tornada]");
	it1 = m1.upper_bound("amigo de la tornada");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("xwssx");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("amigo de la tornada");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1601217067);
	it2 = monkey::get_itn(m1, 209446302, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 303524259);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dxtby]");
	it1 = m2.upper_bound("dxtby");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [fiqlf]");
	ret = m1.count("fiqlf");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [bgiqc]");
	range = m2.equal_range("bgiqc");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("nbsxz");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 1095708587);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("atencion");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("vdvgv");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("zpjuf");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 192687896);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1982674817);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("uungz");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("eakai");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1033068416);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("ubwjm");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 195003344);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 423346109);
	it2 = monkey::get_itn(m2, 1789533084, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 482646960);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["ohmtn"] = "amigo de pepito";
	std::cout << m2["dos"] << std::endl;
	m2["wvbpc"] = "jfvsr";
	std::cout << m2["hola amigo"] << std::endl;
	m2["hola amigo"] = "iybil";
	std::cout << m2["dos"] << std::endl;
	m2["jgsff"] = "jeint";
	std::cout << m2["mcshw"] << std::endl;
	m2["yhqfi"] = "dkiqb";
	std::cout << m2["qmkir"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [weqpt]");
	range = m2.equal_range("weqpt");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m1.lower_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hola amigo]");
	range = m1.equal_range("hola amigo");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["hrnbj"] = "";
	std::cout << m2["un"] << std::endl;
	m2["ujynx"] = "un";
	std::cout << m2["hola amigo"] << std::endl;
	m2["rofjm"] = "mzrse";
	std::cout << m2["lscub"] << std::endl;
	m2["zrcvb"] = "ialla";
	std::cout << m2["krwrd"] << std::endl;
	m2["atencion"] = "kjjrm";
	std::cout << m2["lormu"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1054464396);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1263887465);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1432059054);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 928317954);
	it2 = monkey::get_itn(m2, 647629290, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("amigo de pepito");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [dos]");
	range = m2.equal_range("dos");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un dos tres quatro]");
	range = m1.equal_range("un dos tres quatro");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [frqlp]");
	it1 = m2.upper_bound("frqlp");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1164069443);
	it2 = monkey::get_itn(m1, 1342949184, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1236706729);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1056992611);
	it2 = monkey::get_itn(m2, 411545992, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 873513635);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("nwgkb");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1248906180);
	it2 = monkey::get_itn(m2, 1943930390, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [pclix]");
	it1 = m2.lower_bound("pclix");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 593072591);
	val = _P<C::key_type, C::mapped_type>("uvfub", "hola amigo");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1839296051);
	it2 = monkey::get_itn(m2, 1839296051, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 745228472);
	val = _P<C::key_type, C::mapped_type>("rqkec", "amigo de pepito");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 956894911);
	it2 = monkey::get_itn(m2, 956894911, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 976213740);
	it2 = monkey::get_itn(m2, 976213740, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m1.lower_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [kdwyc]");
	it1 = m2.upper_bound("kdwyc");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [un dos tres quatro]");
	it1 = m2.find("un dos tres quatro");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [vzgyq]");
	ret = m1.count("vzgyq");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hbfnf]");
	it1 = m2.find("hbfnf");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1673533173);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 65438278);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 345017671);
	it2 = monkey::get_itn(m2, 432384802, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1389702622);
	it2 = monkey::get_itn(m2, 932372944, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 65387995);
	it2 = monkey::get_itn(m2, 241772350, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["amigo de pepito"] = "un dos tres quatro";
	std::cout << m2["zgfan"] << std::endl;
	m2["fcquw"] = "jrsoc";
	std::cout << m2["dos"] << std::endl;
	m2["hcxvn"] = "un";
	std::cout << m2["koblu"] << std::endl;
	m2["ljrqn"] = "mjgxc";
	std::cout << m2["lejbg"] << std::endl;
	m2["dfpsx"] = "ahqbt";
	std::cout << m2["jevdx"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [tthwu]");
	it1 = m1.lower_bound("tthwu");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [atencion]");
	it1 = m1.find("atencion");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [vgwqs]");
	range = m2.equal_range("vgwqs");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["mtxzf"] = "vmmpi";
	std::cout << m2["hola amigo"] << std::endl;
	m2[""] = "gokbe";
	std::cout << m2["uzgsr"] << std::endl;
	m2["amigo de pepito"] = "lohkq";
	std::cout << m2["alanc"] << std::endl;
	m2["eaqeu"] = "ugyyg";
	std::cout << m2["zmpqk"] << std::endl;
	m2["un"] = "inhyb";
	std::cout << m2["lbynl"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [bdpbd]");
	it1 = m2.find("bdpbd");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [dos]");
	it1 = m2.find("dos");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hbspq]");
	it1 = m1.find("hbspq");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [un dos tres quatro]");
	it1 = m1.upper_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("un");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 468357817);
	it2 = monkey::get_itn(m2, 465117080, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 392700169);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 5222727);
	it2 = monkey::get_itn(m2, 389750538, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1064288791);
	it2 = monkey::get_itn(m2, 785132432, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de la tornada]");
	it1 = m2.find("amigo de la tornada");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m1.lower_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hola amigo", "wwrhm");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "wkazt");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 2093523464);
	val = _P<C::key_type, C::mapped_type>("muqte", "jrnru");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ruljb", "ibswx");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 165379238);
	val = _P<C::key_type, C::mapped_type>("wrhxd", "pyhvk");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hola amigo]");
	ret = m2.count("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de pepito]");
	it1 = m2.find("amigo de pepito");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 39006166);
	it2 = monkey::get_itn(m2, 1310782073, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("amigo de pepito");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("lvzmk");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 117953988);
	it2 = monkey::get_itn(m2, 1015636549, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1489076960);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 2053505915);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m1.erase("vhbbk");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1801121925);
	it2 = monkey::get_itn(m1, 1740641791, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 964420351);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m1, 1880932834);
	if (!m1.empty())
	{
		m1.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hola amigo]");
	range = m2.equal_range("hola amigo");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un]");
	range = m2.equal_range("un");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 894388545);
	it2 = monkey::get_itn(m1, 894388545, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1599182259);
	val = _P<C::key_type, C::mapped_type>("cwyex", "un dos tres quatro");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("zqwpf", "bhxmv");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1048112884);
	val = _P<C::key_type, C::mapped_type>("yxnbk", "amigo de pepito");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1762809192);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "atencion");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un]");
	it1 = m1.lower_bound("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dpnbm]");
	ret = m1.count("dpnbm");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hola amigo]");
	ret = m1.count("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: []");
	ret = m2.count("");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [dos]");
	it1 = m1.find("dos");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [ngjni]");
	ret = m2.count("ngjni");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [atencion]");
	it1 = m1.lower_bound("atencion");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [jneiw]");
	it1 = m2.lower_bound("jneiw");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [efqps]");
	it1 = m1.find("efqps");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [tegso]");
	ret = m1.count("tegso");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1354678882);
	it2 = monkey::get_itn(m1, 1354678882, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1497981977);
	it2 = monkey::get_itn(m1, 1497981977, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1387888781);
	val = _P<C::key_type, C::mapped_type>("fkpjp", "amigo de pepito");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1829502487);
	val = _P<C::key_type, C::mapped_type>("ncdtu", "qawsu");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 991750547);
	it2 = monkey::get_itn(m1, 991750547, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 718989965);
	val = _P<C::key_type, C::mapped_type>("bozlf", "bnjiw");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 455302585);
	val = _P<C::key_type, C::mapped_type>("ossij", "edoyz");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1355622078);
	val = _P<C::key_type, C::mapped_type>("sxavn", "amigo de pepito");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 2061522119);
	it2 = monkey::get_itn(m2, 2061522119, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un", "epbsk");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["wfjxt"] = "dos";
	std::cout << m2["biioi"] << std::endl;
	m2["huyqq"] = "dos";
	std::cout << m2["juqtq"] << std::endl;
	m2["ohamo"] = "";
	std::cout << m2["nrwqz"] << std::endl;
	m2["gjuqe"] = "atencion";
	std::cout << m2["obsyv"] << std::endl;
	m2["tocix"] = "unogw";
	std::cout << m2[""] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["hola amigo"] = "hola amigo";
	std::cout << m2["hola amigo"] << std::endl;
	m2["amigo de la tornada"] = "ahbyr";
	std::cout << m2["mthlx"] << std::endl;
	m2["ynkuq"] = "mllkp";
	std::cout << m2["cilri"] << std::endl;
	m2["vkhyi"] = "un dos tres quatro";
	std::cout << m2["tchrg"] << std::endl;
	m2["amigo de pepito"] = "bxcpk";
	std::cout << m2["zzmei"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [aschr]");
	range = m1.equal_range("aschr");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["atencion"] = "dos";
	std::cout << m1["itkuz"] << std::endl;
	m1["uwowp"] = "didnu";
	std::cout << m1["plgjk"] << std::endl;
	m1[""] = "kksev";
	std::cout << m1["dos"] << std::endl;
	m1["xabrw"] = "amigo de la tornada";
	std::cout << m1["un dos tres quatro"] << std::endl;
	m1["hola amigo"] = "gscxf";
	std::cout << m1["jssvr"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 621161661);
	it2 = monkey::get_itn(m2, 1046979271, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1083663526);
	it2 = monkey::get_itn(m2, 1199020482, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["pguxs"] = "dos";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["shsdm"] = "pwsbl";
	std::cout << m2["lrpjg"] << std::endl;
	m2["hlzwr"] = "tmzkz";
	std::cout << m2["ttjlw"] << std::endl;
	m2["tntno"] = "lzvcl";
	std::cout << m2["amigo de pepito"] << std::endl;
	m2["mhqgb"] = "ucwvc";
	std::cout << m2["oldmi"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [lphwq]");
	it1 = m1.find("lphwq");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["vwooc"] = "aytyt";
	std::cout << m1[""] << std::endl;
	m1["itxqr"] = "tcpca";
	std::cout << m1["gajoh"] << std::endl;
	m1[""] = "uopwo";
	std::cout << m1["vjelu"] << std::endl;
	m1["erfvr"] = "zidbn";
	std::cout << m1["dos"] << std::endl;
	m1["clfoj"] = "eyyuh";
	std::cout << m1["dogxd"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hola amigo]");
	ret = m2.count("hola amigo");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["un dos tres quatro"] = "jefkf";
	std::cout << m1["hola amigo"] << std::endl;
	m1["xgndh"] = "xoice";
	std::cout << m1["zhyps"] << std::endl;
	m1["un"] = "npwwv";
	std::cout << m1["amigo de la tornada"] << std::endl;
	m1["kimjp"] = "oypnm";
	std::cout << m1["ptmoa"] << std::endl;
	m1["fsufy"] = "atencion";
	std::cout << m1["iqyrq"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["amigo de la tornada"] = "adwpw";
	std::cout << m1["gxynr"] << std::endl;
	m1["trcno"] = "un dos tres quatro";
	std::cout << m1["eyygd"] << std::endl;
	m1["dos"] = "hoiju";
	std::cout << m1["ysqgr"] << std::endl;
	m1["ujipa"] = "eoykc";
	std::cout << m1[""] << std::endl;
	m1["nnxmz"] = "dhpxm";
	std::cout << m1["un dos tres quatro"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [sssbh]");
	it1 = m2.find("sssbh");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [un dos tres quatro]");
	it1 = m2.find("un dos tres quatro");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1832694880);
	it2 = monkey::get_itn(m2, 1010001415, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("uwyzd");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1681735272);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 71271286);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [amigo de pepito]");
	it1 = m1.find("amigo de pepito");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["iwwyw"] = "seeab";
	std::cout << m2["wzuvd"] << std::endl;
	m2["tvsir"] = "hola amigo";
	std::cout << m2["avaki"] << std::endl;
	m2["jegfs"] = "";
	std::cout << m2["dpsbp"] << std::endl;
	m2["wszrp"] = "zgugp";
	std::cout << m2["amigo de pepito"] << std::endl;
	m2["un dos tres quatro"] = "cqrix";
	std::cout << m2["llhob"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [hola amigo]");
	it1 = m1.upper_bound("hola amigo");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ebggj]");
	it1 = m2.lower_bound("ebggj");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["xssgf"] = "yyevj";
	std::cout << m2["hqgkr"] << std::endl;
	m2["ccnor"] = "amigo de la tornada";
	std::cout << m2[""] << std::endl;
	m2["hola amigo"] = "dyhxe";
	std::cout << m2["tcmza"] << std::endl;
	m2["un dos tres quatro"] = "natey";
	std::cout << m2["illbf"] << std::endl;
	m2[""] = "gawjy";
	std::cout << m2["iftbh"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [atencion]");
	it1 = m1.upper_bound("atencion");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["slzsi"] = "";
	std::cout << m2["llzlv"] << std::endl;
	m2["hola amigo"] = "royat";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["cemix"] = "drqcm";
	std::cout << m2["amigo de la tornada"] << std::endl;
	m2[""] = "un dos tres quatro";
	std::cout << m2["mabzt"] << std::endl;
	m2["prvim"] = "dos";
	std::cout << m2["dxyab"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["hola amigo"] = "amigo de pepito";
	std::cout << m1["zorfj"] << std::endl;
	m1["dos"] = "amigo de la tornada";
	std::cout << m1[""] << std::endl;
	m1["qbffz"] = "vcpue";
	std::cout << m1["amigo de la tornada"] << std::endl;
	m1["mdfgw"] = "unmdv";
	std::cout << m1["qcqwa"] << std::endl;
	m1["zhozz"] = "amigo de la tornada";
	std::cout << m1["dos"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hola amigo", "atencion");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1855767209);
	val = _P<C::key_type, C::mapped_type>("", "ocvss");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 2097032601);
	it2 = monkey::get_itn(m2, 2097032601, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1978510430);
	val = _P<C::key_type, C::mapped_type>("ucfxs", "fbrpa");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 839827225);
	it2 = monkey::get_itn(m2, 839827225, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1542069427);
	it2 = monkey::get_itn(m1, 1542069427, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 203423040);
	val = _P<C::key_type, C::mapped_type>("kvfoo", "fijmi");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 316996227);
	it2 = monkey::get_itn(m1, 316996227, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1125894450);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "mlbro");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("vsxxe", "sjwjq");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: []");
	range = m1.equal_range("");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("llytf");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 485737127);
	it2 = monkey::get_itn(m2, 1824255063, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("jlodi");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1320665327);
	it2 = monkey::get_itn(m2, 438047758, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 2024948032);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [lpdcc]");
	range = m1.equal_range("lpdcc");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1275912665);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1989885836);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("dmwlz");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 2087578718);
	it2 = monkey::get_itn(m2, 1203020526, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1707484084);
	it2 = monkey::get_itn(m2, 1545351077, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [scujh]");
	it1 = m2.find("scujh");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [dos]");
	it1 = m1.lower_bound("dos");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1290919692);
	val = _P<C::key_type, C::mapped_type>("un", "tjupw");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 738318596);
	it2 = monkey::get_itn(m2, 738318596, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "ypiqs");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 411643935);
	it2 = monkey::get_itn(m2, 411643935, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1294097505);
	it2 = monkey::get_itn(m2, 1294097505, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [rsklj]");
	it1 = m2.find("rsklj");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ljvkk]");
	it1 = m1.lower_bound("ljvkk");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [ntwov]");
	it1 = m1.find("ntwov");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [amigo de la tornada]");
	range = m1.equal_range("amigo de la tornada");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [lsbcm]");
	ret = m2.count("lsbcm");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [cggas]");
	it1 = m1.lower_bound("cggas");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 247096783);
	it2 = monkey::get_itn(m1, 131108577, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1686117246);
	it2 = monkey::get_itn(m1, 806451962, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [un dos tres quatro]");
	ret = m1.count("un dos tres quatro");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1001038683);
	it2 = monkey::get_itn(m1, 1409681844, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 456937733);
	it2 = monkey::get_itn(m1, 352270602, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [amigo de pepito]");
	range = m1.equal_range("amigo de pepito");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hola amigo]");
	range = m1.equal_range("hola amigo");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1600389131);
	it2 = monkey::get_itn(m2, 924080001, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 1437986345);
	it2 = monkey::get_itn(m2, 2029621973, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 291541381);
	it2 = monkey::get_itn(m2, 1291820169, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 972559366);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["enjut"] = "ivefm";
	std::cout << m1["gqhjf"] << std::endl;
	m1["vxwbp"] = "un";
	std::cout << m1["un"] << std::endl;
	m1["amigo de pepito"] = "lqoxk";
	std::cout << m1["nvgra"] << std::endl;
	m1["amigo de la tornada"] = "amigo de la tornada";
	std::cout << m1["rtgnq"] << std::endl;
	m1["qhmsc"] = "imrue";
	std::cout << m1["un dos tres quatro"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1706576716);
	it2 = monkey::get_itn(m1, 1706576716, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 563812649);
	it2 = monkey::get_itn(m1, 563812649, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("kqmfy", "wdrfr");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 894420651);
	it2 = monkey::get_itn(m1, 894420651, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1916636798);
	it2 = monkey::get_itn(m1, 1916636798, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [atencion]");
	ret = m1.count("atencion");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [byknr]");
	it1 = m2.upper_bound("byknr");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un dos tres quatro]");
	range = m1.equal_range("un dos tres quatro");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 450692472);
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "wabxo");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1894125136);
	it2 = monkey::get_itn(m2, 1894125136, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hola amigo", "nrkop");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 657289628);
	it2 = monkey::get_itn(m2, 657289628, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1360089609);
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "yrioy");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1266710552);
	val = _P<C::key_type, C::mapped_type>("", "plkys");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1805795091);
	it2 = monkey::get_itn(m2, 1805795091, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("ameji", "dos");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1640545591);
	it2 = monkey::get_itn(m2, 1640545591, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1726052767);
	it2 = monkey::get_itn(m2, 1726052767, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m1.lower_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 538120566);
	val = _P<C::key_type, C::mapped_type>("dos", "qtzit");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 252675280);
	it2 = monkey::get_itn(m1, 252675280, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 224834663);
	it2 = monkey::get_itn(m1, 224834663, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1476057611);
	it2 = monkey::get_itn(m1, 1476057611, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("pjidt", "");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [dos]");
	it1 = m1.find("dos");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [vfrqj]");
	range = m1.equal_range("vfrqj");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [amigo de pepito]");
	it1 = m2.lower_bound("amigo de pepito");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [qcblh]");
	it1 = m2.upper_bound("qcblh");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [rvpkx]");
	it1 = m2.find("rvpkx");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 1987454048);
	it2 = monkey::get_itn(m1, 1604894704, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [eccmu]");
	range = m1.equal_range("eccmu");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [un dos tres quatro]");
	ret = m2.count("un dos tres quatro");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [sienx]");
	it1 = m2.upper_bound("sienx");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [amigo de pepito]");
	range = m1.equal_range("amigo de pepito");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [atencion]");
	it1 = m2.find("atencion");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["lmmrl"] = "dos";
	std::cout << m1["hola amigo"] << std::endl;
	m1["ajozx"] = "vigtb";
	std::cout << m1["dos"] << std::endl;
	m1["ovlzu"] = "lfpaz";
	std::cout << m1["qitvm"] << std::endl;
	m1["eaxdd"] = "amigo de la tornada";
	std::cout << m1["lmiok"] << std::endl;
	m1["amigo de pepito"] = "wezjm";
	std::cout << m1["hola amigo"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [vnyhl]");
	range = m2.equal_range("vnyhl");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: []");
	range = m1.equal_range("");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [hjgri]");
	it1 = m2.find("hjgri");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [zqplg]");
	range = m1.equal_range("zqplg");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["evqdd"] = "hpnpe";
	std::cout << m2["jehqp"] << std::endl;
	m2["kzgzf"] = "qvsyy";
	std::cout << m2["dos"] << std::endl;
	m2["othty"] = "kngoe";
	std::cout << m2["uoime"] << std::endl;
	m2["lmtru"] = "oommh";
	std::cout << m2["atencion"] << std::endl;
	m2["iysip"] = "vxqbo";
	std::cout << m2["pyavs"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [slfza]");
	range = m1.equal_range("slfza");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [atencion]");
	range = m1.equal_range("atencion");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 12968808);
	it2 = monkey::get_itn(m1, 12968808, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1443502865);
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1489928172);
	val = _P<C::key_type, C::mapped_type>("iniwu", "un");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("jnbda", "amigo de la tornada");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("kljsm", "amigo de pepito");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [oqayg]");
	it1 = m2.lower_bound("oqayg");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dos]");
	it1 = m2.upper_bound("dos");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [atencion]");
	it1 = m2.find("atencion");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["atencion"] = "mqfvl";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["yduow"] = "atencion";
	std::cout << m2["jjceg"] << std::endl;
	m2[""] = "amigo de la tornada";
	std::cout << m2["xlyee"] << std::endl;
	m2["ujhhc"] = "rasno";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["atencion"] = "";
	std::cout << m2["hola amigo"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: []");
	it1 = m2.upper_bound("");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1101098084);
	it2 = monkey::get_itn(m2, 1101098084, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("vgaen", "tefmt");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1599031046);
	val = _P<C::key_type, C::mapped_type>("yvcms", "gmvoj");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("tpfhk", "amigo de la tornada");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 326425971);
	val = _P<C::key_type, C::mapped_type>("kftwb", "bgpyk");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [kekan]");
	range = m2.equal_range("kekan");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["hcrtp"] = "un";
	std::cout << m2["ptyir"] << std::endl;
	m2["amigo de pepito"] = "amigo de la tornada";
	std::cout << m2["amigo de pepito"] << std::endl;
	m2["pmibq"] = "bfoyn";
	std::cout << m2["cfrtg"] << std::endl;
	m2["mxwkf"] = "ldkur";
	std::cout << m2["dos"] << std::endl;
	m2["rxlku"] = "hola amigo";
	std::cout << m2["ofgsk"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [dos]");
	range = m2.equal_range("dos");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1137039303);
	it2 = monkey::get_itn(m2, 1137039303, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 519848985);
	it2 = monkey::get_itn(m2, 519848985, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("atencion", "");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 349641021);
	val = _P<C::key_type, C::mapped_type>("un", "ynsdv");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "jwxyt");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["hbqmj"] = "kqkvs";
	std::cout << m2["amigo de la tornada"] << std::endl;
	m2["iydvp"] = "";
	std::cout << m2["utypc"] << std::endl;
	m2["ykpfl"] = "un dos tres quatro";
	std::cout << m2["cgnmb"] << std::endl;
	m2[""] = "hola amigo";
	std::cout << m2["un"] << std::endl;
	m2[""] = "qalmw";
	std::cout << m2["amigo de la tornada"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [lwfye]");
	it1 = m1.find("lwfye");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["hkukr"] = "un";
	std::cout << m1["icaqp"] << std::endl;
	m1["tccpn"] = "nsgao";
	std::cout << m1["zsoua"] << std::endl;
	m1["gujxs"] = "gdtgt";
	std::cout << m1["zmmdb"] << std::endl;
	m1["jrrpr"] = "dqatm";
	std::cout << m1["dos"] << std::endl;
	m1["hola amigo"] = "ssuav";
	std::cout << m1["iqyhd"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [amigo de la tornada]");
	it1 = m2.lower_bound("amigo de la tornada");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["un dos tres quatro"] = "";
	std::cout << m2["atencion"] << std::endl;
	m2["atencion"] = "";
	std::cout << m2["tvsre"] << std::endl;
	m2["amigo de pepito"] = "doqdr";
	std::cout << m2["atencion"] << std::endl;
	m2["zfnld"] = "vyohk";
	std::cout << m2["dos"] << std::endl;
	m2["wgwoy"] = "hola amigo";
	std::cout << m2["wpsms"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [ortde]");
	it1 = m2.find("ortde");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [amigo de pepito]");
	ret = m1.count("amigo de pepito");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m2.begin(), m2.end());
		m2 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [jloye]");
	range = m1.equal_range("jloye");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [jlmkh]");
	it1 = m1.lower_bound("jlmkh");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [hola amigo]");
	it1 = m2.upper_bound("hola amigo");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 760310508);
	it2 = monkey::get_itn(m1, 218937593, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 2128744876);
	it2 = monkey::get_itn(m1, 325704242, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [oxnzv]");
	ret = m1.count("oxnzv");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1161578943);
	val = _P<C::key_type, C::mapped_type>("vhtws", "rzddk");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 27691776);
	it2 = monkey::get_itn(m2, 27691776, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1379577400);
	val = _P<C::key_type, C::mapped_type>("ldibz", "mclbm");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("kmpfi", "ezlje");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("hola amigo", "hola amigo");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [vybgz]");
	it1 = m2.find("vybgz");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [un dos tres quatro]");
	it1 = m2.find("un dos tres quatro");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("", "xxugm");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 622042204);
	val = _P<C::key_type, C::mapped_type>("dmhpa", "maksb");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1093048569);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1160110553);
	val = _P<C::key_type, C::mapped_type>("vjrsi", "bwqfd");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 825743613);
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "amigo de pepito");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [popvk]");
	it1 = m1.lower_bound("popvk");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["hgwdo"] = "bxvkh";
	std::cout << m2["amigo de la tornada"] << std::endl;
	m2["evrof"] = "hola amigo";
	std::cout << m2["lzsdw"] << std::endl;
	m2["oibxq"] = "amigo de pepito";
	std::cout << m2[""] << std::endl;
	m2["un"] = "un";
	std::cout << m2["qsnun"] << std::endl;
	m2["jsisx"] = "dos";
	std::cout << m2["apuox"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["xoulq"] = "zelpy";
	std::cout << m1["koftg"] << std::endl;
	m1["nflhv"] = "yrcwo";
	std::cout << m1["hola amigo"] << std::endl;
	m1["dhzvf"] = "aqnar";
	std::cout << m1["oysxq"] << std::endl;
	m1["cbpzo"] = "";
	std::cout << m1["dos"] << std::endl;
	m1["ixsne"] = "hola amigo";
	std::cout << m1["un dos tres quatro"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [un]");
	range = m1.equal_range("un");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m1["fdpud"] = "jvwva";
	std::cout << m1["utvyk"] << std::endl;
	m1["matrf"] = "ojjmg";
	std::cout << m1["alnrh"] << std::endl;
	m1["xrmtm"] = "bgjwg";
	std::cout << m1["dvwwo"] << std::endl;
	m1["demor"] = "ytgml";
	std::cout << m1["atencion"] << std::endl;
	m1["jqdxh"] = "hola amigo";
	std::cout << m1["clkhi"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [nlbaa]");
	it1 = m2.upper_bound("nlbaa");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [ndmav]");
	it1 = m1.lower_bound("ndmav");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [bstgj]");
	it1 = m1.upper_bound("bstgj");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [zatzu]");
	it1 = m1.upper_bound("zatzu");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [atencion]");
	ret = m2.count("atencion");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [wukxn]");
	ret = m1.count("wukxn");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [datlc]");
	it1 = m2.lower_bound("datlc");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dos]");
	ret = m1.count("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 307020004);
	it2 = monkey::get_itn(m2, 307020004, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("", "hyeky");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 928709784);
	it2 = monkey::get_itn(m2, 928709784, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 678878352);
	val = _P<C::key_type, C::mapped_type>("stlhs", "un");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "tnfkg");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [dos]");
	ret = m2.count("dos");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m1 < m2: " + SSTR( m1 < m2));
	logger.log<logger::NONE>("m1 > m2: " + SSTR( m1 > m2));
	logger.log<logger::NONE>("m1 <= m2: " + SSTR( m1 <= m2));
	logger.log<logger::NONE>("m1 >= m2: " + SSTR( m1 >= m2));
	logger.log<logger::NONE>("m1 == m2: " + SSTR( m1 == m2));
	logger.log<logger::NONE>("m1 != m2: " + SSTR( m1 != m2));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [hola amigo]");
	range = m2.equal_range("hola amigo");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1074100186);
	val = _P<C::key_type, C::mapped_type>("aidts", "hzkpy");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1736827339);
	val = _P<C::key_type, C::mapped_type>("vlufj", "atencion");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1916560845);
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "nmjgt");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1646900264);
	it2 = monkey::get_itn(m2, 1646900264, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 2043019726);
	it2 = monkey::get_itn(m2, 2043019726, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 1740653411);
	val = _P<C::key_type, C::mapped_type>("amigo de la tornada", "pcfmj");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m2, 1574120231);
	it2 = monkey::get_itn(m2, 1574120231, it1);
	m1.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("mtjcf", "iaeaw");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m2, 782001281);
	val = _P<C::key_type, C::mapped_type>("bszec", "yskdg");
	it1 = m2.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("amigo de pepito", "un");
	pair_it_bool = m2.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m2, "m2");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1487854700);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 495117165);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m2, 2095818468);
	it2 = monkey::get_itn(m2, 702388360, it1);
	m2.erase(it1, it2);
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 2132226);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("crhwq");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [nsisy]");
	it1 = m2.find("nsisy");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un dos tres quatro", "czgkx");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 331042501);
	it2 = monkey::get_itn(m1, 331042501, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 740118671);
	it2 = monkey::get_itn(m1, 740118671, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 751418730);
	it2 = monkey::get_itn(m1, 751418730, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un", "tajll");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m2);
		m2 = m1;
		m1 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [nzspb]");
	it1 = m2.lower_bound("nzspb");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("dvnyq", "wbsrd");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("un", "dos");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert range:");
	it1 = monkey::get_itn(m1, 1748268241);
	it2 = monkey::get_itn(m1, 1748268241, it1);
	m2.insert(input_iterator<C::iterator>(it1), input_iterator<C::iterator>(it2));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 412434456);
	val = _P<C::key_type, C::mapped_type>("arirs", "tsfyp");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 102760474);
	val = _P<C::key_type, C::mapped_type>("fvjzo", "pywov");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [eiteb]");
	it1 = m2.lower_bound("eiteb");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_insert:");
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 1810037747);
	val = _P<C::key_type, C::mapped_type>("ospem", "");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("xqylf", "");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("blzfv", "jyvhu");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	logger.log<logger::NONE>("insert hint:");
	it1 = monkey::get_itn(m1, 2121219487);
	val = _P<C::key_type, C::mapped_type>("aopme", "doavp");
	it1 = m1.insert(it1, val);
	logger.log<logger::NONE>("ret = " + SSTR(it1->first) + SSTR(it1->second));
	logger.log<logger::NONE>("insert value_type:");
	val = _P<C::key_type, C::mapped_type>("nvzjx", "un");
	pair_it_bool = m1.insert(val);
	logger.log<logger::NONE>("ret = " + SSTR(pair_it_bool.first->first) + SSTR(pair_it_bool.second));
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [ofvva]");
	ret = m1.count("ofvva");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [flarp]");
	it1 = m2.upper_bound("flarp");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [dtsqx]");
	it1 = m2.lower_bound("dtsqx");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [rliap]");
	it1 = m2.find("rliap");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [zaabf]");
	range = m2.equal_range("zaabf");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [ioext]");
	ret = m2.count("ioext");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [yxowf]");
	it1 = m2.find("yxowf");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [adudi]");
	range = m1.equal_range("adudi");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("m2 < m1: " + SSTR( m2 < m1));
	logger.log<logger::NONE>("m2 > m1: " + SSTR( m2 > m1));
	logger.log<logger::NONE>("m2 <= m1: " + SSTR( m2 <= m1));
	logger.log<logger::NONE>("m2 >= m1: " + SSTR( m2 >= m1));
	logger.log<logger::NONE>("m2 == m1: " + SSTR( m2 == m1));
	logger.log<logger::NONE>("m2 != m1: " + SSTR( m2 != m1));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [vqwcp]");
	it1 = m2.upper_bound("vqwcp");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [qcbxg]");
	it1 = m1.lower_bound("qcbxg");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [zwzvb]");
	it1 = m2.upper_bound("zwzvb");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_find: [un]");
	it1 = m1.find("un");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [wmsuq]");
	range = m1.equal_range("wmsuq");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	m2["dos"] = "drdgp";
	std::cout << m2["clgdj"] << std::endl;
	m2["zlsqr"] = "dipbv";
	std::cout << m2["wlpij"] << std::endl;
	m2["joinu"] = "zzmhc";
	std::cout << m2["un"] << std::endl;
	m2["iivav"] = "ilcfv";
	std::cout << m2["un dos tres quatro"] << std::endl;
	m2["un"] = "amigo de la tornada";
	std::cout << m2["qnfkm"] << std::endl;
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [vften]");
	range = m1.equal_range("vften");
	if (range.first != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m2.swap(m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 942410376);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("trlfz");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase it:");
	it1 = monkey::get_itn(m2, 1819587414);
	if (!m2.empty())
	{
		m2.erase(it1);
	}
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("vyrje");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("erase key_type:");
	ret = m2.erase("ttdym");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m2);
		m2.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_lower_bound: [un dos tres quatro]");
	it1 = m1.lower_bound("un dos tres quatro");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C m3(m1);
		m1 = m2;
		m2 = m3;
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct:");
	{
		std::set<C::value_type> set(m1.begin(), m1.end());
		m1 = C( input_iterator<std::set<C::value_type>::iterator>(set.begin()),  input_iterator<std::set<C::value_type>::iterator>(set.end()));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_erase:");
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 510630925);
	it2 = monkey::get_itn(m1, 2071272454, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 182734692);
	it2 = monkey::get_itn(m1, 596200096, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("erase range:");
	it1 = monkey::get_itn(m1, 594898850);
	it2 = monkey::get_itn(m1, 553175237, it1);
	m1.erase(it1, it2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	m1.swap(m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dvmmj]");
	it1 = m2.upper_bound("dvmmj");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C m3(m1);
		m1.clear();
		monkey::print_full_map<C, _P>(m3, "m3");
		m3.clear();
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_count: [hzebe]");
	ret = m1.count("hzebe");
	logger.log<logger::NONE>("ret = " + SSTR(ret));
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_equal_range: [amigo de la tornada]");
	range = m2.equal_range("amigo de la tornada");
	if (range.first != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.first->first));
	}
	if (range.second != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(range.second->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m2, m1);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [ielfc]");
	it1 = m1.upper_bound("ielfc");
	if (it1 != m1.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [dlihv]");
	it1 = m2.upper_bound("dlihv");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_upper_bound: [tsfaj]");
	it1 = m2.upper_bound("tsfaj");
	if (it1 != m2.end())
	{
		logger.log<logger::NONE>("ret1 = " + SSTR(it1->first));
	}
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(m1, m2);
	logger.log<logger::NONE>("printing m1:");
	monkey::print_full_map<C, _P>(m1, "m1");
	logger.log<logger::NONE>("printing m2:");
	monkey::print_full_map<C, _P>(m2, "m2");
}
