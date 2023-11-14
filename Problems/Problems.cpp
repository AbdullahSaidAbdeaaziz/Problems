#include "Problems.h"
#include <bits/stdc++.h>
#include <Windows.h>
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

string Problems::disemvowel(const string& str)
{ 
	// vowels are a u i o e
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
				new_str.begin(),
				new_str.end(),
				(char)toupper(c)
			),
			new_str.end()
		);
	}
	return new_str;
}

void Problems::draw_palestine_flag()
{
    // #Free Palestine
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int size = 10;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
            cout << " ";
        }
        for (int k = 1; k <= size * 5 - i; k++) {
            if (!(abs(i - size) <= size / 3)) {
                SetConsoleTextAttribute(hConsole, 0);
                cout << " ";
            }
            else {
                SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = size - 1; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
            cout << " ";
        }
        int temp = size * 5 - i;
        for (int k = 1; k <= temp; k++) {
            if (abs(i - size) <= size / 3) {
                SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
                cout << " ";
            }
            else {
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN);
                cout << " ";
            }
        }
        cout << "\n";
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset to default color
}
