#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

class HugeInt
{
	friend ostream & operator<< (ostream &, const HugeInt &);
	friend istream & operator>> (istream &, HugeInt &);
	
	public:
	
		HugeInt();
		HugeInt(int);
		HugeInt(string);
		HugeInt operator+(HugeInt &);
		HugeInt operator-(HugeInt &);
		
	private:
		int length;
		int num;
		int array[100000];
		char arr_char[100000];
		string str;
};
