#include "std_lib_facilities.h"
ostream& print_array10(ostream& os, int* a)
{
	for(int i=0;i<10;i++)
	{
		os<<a[i]<<" ";
	}
	os<<endl;
	return os;
}
ostream& print_array(ostream& os, int* a, int n)
{
	switch(n){
	case 10:
	for(int i=0;i<10;i++)
	{
		os<<a[i]<<" ";
	}
	os<<endl;
	break;
	case 11:
	for(int i=0;i<11;i++)
	{
		os<<a[i]<<" ";
	}
	os<<endl;
	break;
	case 20:
	for(int i=0;i<20;i++)
	{
		os<<a[i]<<" ";
	}
	os<<endl;
	break;
	}
	return os;
}
ostream& print_vector(ostream& os, Vector<int> a, int n)
{
	switch(n){
	case 10:
	for(int i=0;i<10;i++)
	{
		os<<a[i]<<" ";
	}
	os<<endl;
	break;
	case 11:
	for(int i=0;i<11;i++)
	{
		os<<a[i]<<" ";
	}
	os<<endl;
	break;
	case 20:
	for(int i=0;i<20;i++)
	{
		os<<a[i]<<" ";
	}
	os<<endl;
	break;
	}
	return os;
}
int main()
{
	int *p = new int[10];
	for(int i=0;i<10;i++)
	{
		p[i] = i+1;
	}
	print_array10(cout,p);
	delete []p;
	int *ten = new int[10];
	int *elev = new int[11];
	for(int i=0;i<10;i++)
	{
		ten[i] = 100+i;
		elev[i] = 100+i;
	}
	elev[10]=ten[9]+1;
	print_array(cout,ten,10);
	print_array(cout,elev,11);
	int *more = new int[20];
	for(int i=0;i<20;i++)
	{
		more[i]=100+i;
	}
	print_array(cout,more,20);
	delete []ten;
	delete []elev;
	delete []more;
	vector<int> v10;
	vector<int> v11;
	vector<int> v20;
	for(int i=0;i<10;i++)
	{
		v10.push_back(100+i);
		v11.push_back(100+i);
	}
	v11.push_back(v10[9]+1);
	for(int i=0;i<20;i++)
	{
		v20.push_back(100+i);
		
	}
	print_vector(cout,v10,10);
	print_vector(cout,v11,11);
	print_vector(cout,v20,20);
return 0;
}
