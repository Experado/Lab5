#include "HugeInt.h"



ostream & operator<< (ostream &out, const HugeInt &test)
{
	if (test.num!=0)
		out<<test.num;
	return out;
}	

istream & operator>> (istream &in, HugeInt &test)
{
	in>>test.num;
	return in;
}

HugeInt::HugeInt(){}

HugeInt::HugeInt(int data)	{num=data;}

HugeInt::HugeInt(string data)	
{
	length=data.length();
	for(int i=0;i<length;i++)
		array[i]=data[i]-48;
}

HugeInt HugeInt::operator+ (HugeInt &test)
{
	return (num+test.num);
}

HugeInt HugeInt::operator- (HugeInt &test)
{
	int i=length-1;
	while(test.num>0)
	{
		int storage=test.num%10;
		test.num=test.num/10;
		if(storage>array[i])
		{
			array[i-1]--;
			array[i]=array[i]+10;
		}
		array[i]=array[i]-storage;
		i--;
	}
	for(i=0;i<length;i++)
	{
		arr_char[i]=array[i];
	}
	str.assign(arr_char);
	cout<<str;
	return str;
}
