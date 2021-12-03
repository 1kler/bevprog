#include "std_lib_facilities.h"
int ga[10] = {1,2,3,4,55,6,7,8,9,10};
void fa(int* t,int n)
{
	int la[n];
	for(int i=0;i<n;i++)
	{
		la[i]=t[i];
		cout<<la[i]<<" ";
	}
	cout<<endl;
	int* p = new int[10];
	for(int i=0;i<n;i++)
	{
		p[i]=t[i];
		cout<<p[i]<<" ";
	}
	cout<<endl;
	delete []p;
	
}
int main()
{
	fa(ga,10);
	int aa[10];
	aa[0]=1;
	for(int i=1;i<10;i++)
	{
		aa[i]=aa[i-1]*(i+1);
		
	}
	fa(aa,10);

return 0;
}
