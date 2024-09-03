#include<iostream.h>
#include<conio.h>
class test
{
	public:
	int x;
	test()
	{
		cout<<"this is the constructor.";
	}
	~test()
	{
		cout<<"this is the distructor.";
	}
};
int main()
{
	test t;
	getch();
	return 0;
}