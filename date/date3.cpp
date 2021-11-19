#include "std_lib_facilities.h"
class Date{
	int year;
	int month;
	int day;
	public:
	Date operator=(const Date& date){
		this->year=date.year;
		this->month=date.month;
		this->day=date.day;
		return *this;
	}
	Date()
	{
		year=0;
		month=0;
		day=0;
	}
	Date(int y,int m,int d);
	void add_day(int n);
	int get_y(){return year;}
	int get_m(){return month;}
	int get_d(){return day;}
};
Date::Date(int y,int m,int d)
{
	if(y>0)
		year=y;
	else 
		error("Invalid year");
	if(m>0&&m<=12)
		month=m;
	else 
		error("Invalid month");
	if(d>0&&d<32)
		day=d;
	else 
		error("Invalid day");
}
void Date::add_day(int n)
{
	day+=n;
	if(day>31)
	{
		month++;
		day-=31;
		if(month>12)
		{
			year++;
			month-=12;
		}
	}
}
ostream& operator<<(ostream& os, Date& d)

{
	return os<<"("<<d.get_y()<<","<<d.get_m()<<","<<d.get_d()<<")";
}
int main()
{
	Date today{1978,6,25};
	Date tomorrow;
	tomorrow=today;
	tomorrow.add_day(1);
	cout<<today<<endl;
	cout<<tomorrow<<endl;
return 0;
}
