#include<iostream.h>
#include<conio.h>
class arith
{
	public:
	arith(int x,int y)
	{
		cout<<"\n addition is :"<<x+y;
		cout<<"\n subtraction is:"<<x-y;
		cout<<"\n multiply:"<<x*y;
		cout<<"\n divide :"<<x/y;
	}
};
int main()
{
	int a,b;
	clrscr();
	cout<<"enter two number :";
	cin>>a>>b;
	arith c(a,b);
	getch();
	return 0;
}

