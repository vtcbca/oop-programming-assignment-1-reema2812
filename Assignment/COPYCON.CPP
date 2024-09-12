#include<iostream.H>
#include<conio.h>
class test
{
	int a;
	public:
	test(int value)
	{
		a=value;
		cout<<"\n in parameterized constructor:'
	}
	void print(test &m)
	{
		a=m.a;
		cout<<"\n in copy constructor";
	}
};
int main()
{
	test t1(2),t2(t1);
	test t3=t2;
	return 0;
}
