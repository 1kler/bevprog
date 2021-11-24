#include "std_lib_facilities.h"
int main()
{
	int* p1 = new int(7);
	cout<<"p1: "<<p1<<" int: "<<*p1<<endl;
	int* p2 = new int[7]{1,2,3,4,5,6,7};
	cout<<"p2: "<<p2<<" ";
	for(int i=0;i<7;i++)
	{
		cout<<"array["<<i<<"]: "<<p2[i]<<" ";
	}
	cout<<endl;
	int* p3 = p2;
	p1=p2;
	p3=p2;
	cout<<"p1: "<<p1<<" *p1: "<<*p1<<endl;
	cout<<"p2: "<<p1<<" *p2: "<<*p2<<endl;
	delete []p1;
	p1 = new int[10]{1,2,3,4,5,6,7,8,9,10};
	p2 = new int[10];
	for(int i=0;i<10;i++)
	{
		p2[i]=p1[i];
	}
	delete []p1;
	delete []p2;
return 0;
}
