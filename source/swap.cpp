#include "std_lib_facilities.h"
void swap_v(int,int);
void swap_r(int&,int&);
void swap_cr(const int&,const int&);
int main()
{
	int x=7;
	int y=9;
	swap_v(x,y);
	cout<<"x: "<<x<<" y: "<<y<<endl;
	swap_r(x,y);
	cout<<"x: "<<x<<" y: "<<y<<endl;
	//swap_cr(x,y);    - hiba
	swap_v(7,9);
	//swap_r(7,9);     - hiba
	//swap_cr(7,9);    - hiba 
	const int cx=7;
	const int cy=9;
	swap_v(cx,cy);
	cout<<"cx: "<<cx<<" cy: "<<cy<<endl;
	//swap_r(cx,cy);   - hiba
	swap_cr(cx,cy);
	cout<<"cx: "<<cx<<" cy: "<<cy<<endl;
	swap_v(7.7,9.9);
	//swap_r(7.7,9.9); - hiba
	swap_cr(7.7,9.9);
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx,dy);
	cout<<"dx: "<<dx<<" dy: "<<dy<<endl;
	//swap_r(dx,dy);   - hiba
	swap_cr(dx,dy);
	cout<<"dx: "<<dx<<" dy: "<<dy<<endl;
	swap_v(7.7,9.9);
	//swap_r(7.7,9.9); - hiba
	swap_cr(7.7,9.9);
return 0;
}
void swap_v(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swap_r(int& a,int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swap_cr(const int& a,const int& b)
{
	int temp;
	temp=a;
	//a=b;    - hiba
	//b=temp; - hiba
}
