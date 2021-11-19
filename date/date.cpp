#include "std_lib_facilities.h"
struct Date{
	int y;
	int m;
	int d;
	Date operator=(const Date& date){
		y=date.y;
		m=date.m;
		d=date.d;
		return *this;
	}
};
void init_Date(Date& date,int y,int m,int d)
{
	if(y>0)
		date.y=y;
	else 
		error("Invalid year");
	if(m>0&&m<=12)
		date.m=m;
	else 
		error("Invalid month");
	if(d>0&&d<32)
		date.d=d;
	else 
		error("Invalid day");
}
void add_day(Date& date,int n)
{
	date.d+=n;
	if(date.d>31)
	{
		date.m++;
		date.d-=31;
		if(date.m>12)
		{
			date.y++;
			date.m-=12;
		}
	}
}
ostream& operator<<(ostream& os, const Date& d)

{
	return os<<"("<<d.y<<","<<d.m<<","<<d.d<<")";
}
int main()
{
	Date today,tomorrow;
	init_Date(today,1978,6,25);
	tomorrow=today;
	add_day(tomorrow,1);
	cout<<today<<endl;
	cout<<tomorrow<<endl;
return 0;
}
