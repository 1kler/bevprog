#include "std_lib_facilities.h"
int main()
{
	string first_name;
	cout<<"Enter the name of the person you want write to"<<endl;
	cin>>first_name;
	cout<<"Dear "<<first_name<<", "<<endl;
	cout<<"How are you? I am fine. I miss you."<<endl;
	cout<<"Enter your friend name: ";
	string friend_name;
	cin>>friend_name;
	cout<<"Have you seen "<<friend_name<<" lately?"<<endl;
	char friend_sex = 0;
	cout<<"Enter friend's sex: ";
	cin>>friend_sex;
	if(friend_sex == 'm')
	cout<<"If you see "<<friend_name<<" please ask him to call me."<<endl;
	else if(friend_sex == 'f')
	cout<<"If you see "<<friend_name<<" please ask her to call me."<<endl;
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	cout<<"I hear you just had a birthday an you are "<<age<<" years old."<<endl;
	if(age<=0 || age>=110)
	simple_error("You're kidding!");
	if(age==12)
	cout<<"Next year you will be "<<age+1<<endl;
	if(age==17)
	cout<<"Next year you will be able to vote"<<endl;
	if(age==70)
	cout<<"I hope you are enjoying retirement"<<endl;
	cout<<endl<<endl;
	cout<<"Your sincerely, Miklos"<<endl;
return 0;
}
