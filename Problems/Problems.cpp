#include "Problems.h"
#include <iostream>
#include <string>
using namespace std;
 bool  Problems::str_end_with(string const& str, string const& ending)
{
	 if (ending == "") return true;
	 size_t len_end = ending.size();
	 //   cout << "len of ending " << len_end << " " << ending << "\n";
	 size_t last_compare_with_str = str.size() >= len_end ? str.size() - len_end : len_end - str.size();
	 //    cout << "difference btwn str and ending " << last_compare_with_str<< " where str len " << str.size() << " " << str << "\n";
	 string sub_str = str.size() >= len_end ? str.substr(last_compare_with_str, str.size()) : ending.substr(last_compare_with_str, ending.size());
	 cout << sub_str << "\n";
	 cout << str.c_str() << "    " << endl;
	 return sub_str == ending;
}

string Problems::find_the_intergral(const int& exponent, const int& coefficient)
{
	int add_exponent = exponent + 1;
	int divide_over_new_exponent = coefficient / add_exponent;
	string result = to_string(divide_over_new_exponent) +
		"x^" + to_string(add_exponent);
	return result;
}

string Problems::disemvowel(const std::string& str)
{ 
	// vowels if a u i o e
	string vowels = "auioe";
	string new_str = str;
	for (char c : vowels) {
		new_str.erase(
			remove(
				new_str.begin(), new_str.end(), c
			),
			new_str.end()
		);
		new_str.erase(
			remove(
				new_str.begin(), new_str.end(),(char)toupper(c)
			),
			new_str.end()
		);
	}
	return new_str;
}
