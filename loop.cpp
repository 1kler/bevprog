#include "std_lib_facilities.h"
int main()
{
	char symbol=0;
	double number1, number2,largest=0,smallest=0,k=0, sum = 0;
	vector <double> v ={};
	string unit="";
	while(cin>>symbol)
	{
		if(symbol == '|')
			break;
		/*cin>>number1>>number2;
		if(number1>larger){
		cout<<"The larger value is: "<<number1<<endl;
		cout<<"The smaller value is: "<<number2<<endl;
		}
		else if(number2>number1)
		{
		cout<<"The larger value is: "<<number2<<endl;
		cout<<"The smaller value is: "<<number1<<endl;
		}
		else if(number1==number2)
		cout<<"The numbers are equal"<<endl;
		double diff =0;
		diff=abs(number1-number2);
		if(diff<=(1.0/100))
		cout<<"The numbers are almost equal"<<endl;*/
		cin>>number1>>unit;
		if(unit == "cm")
		number1/=100;
		else if(unit == "in")
		number1*=0.0254;
		else if(unit == "ft")
		number1*=0.3048;
		else if(unit != "m")
		error("Illegal representations of unit");
		k++;
		if(k==1)
		{
			largest = number1;
			smallest = number1;
			cout<<largest<<" the largest so far."<<endl;
		}
		else
		{
			if(number1>largest){
				cout<<number1 <<" the largest so far"<<endl;
				largest=number1;
			}
			if(number1<smallest){
				cout<<number1<<" the smallest so far"<<endl;
				smallest = number1;
			}
		}
		sum+=number1;
		v.push_back(number1);
	}
	cout<<"The largest value is: "<<largest<<endl;
	cout<<"The smallest value is: "<<smallest<<endl;
	sort(v);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"The number of values: "<<k<<endl;
	cout<<"The sum of values: "<<sum<<endl;
return 0;
}
