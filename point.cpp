#include "std_lib_facilities.h"
struct Point{
	int x,y;
};
int main()
{
	vector<Point> original_points;
	cout<<"Input seven x,y pairs"<<endl;
	int szam=0,szam1=0;
	char symbol;
	while(original_points.size()<7)
	{
		cin>>symbol>>szam>>symbol>>szam1>>symbol;
		original_points.push_back(Point{szam,szam1});
	}
	cout<<"Points: ";
	for(Point p: original_points)
	{
		cout<<"("<<p.x<<","<<p.y<<") ";
	}
	cout<<endl;
	ofstream ost;
	ost.open("mydata.txt");
	for(Point p: original_points)
	{
		ost<<"("<<p.x<<","<<p.y<<")\n";
	}
	ost.close();
	ifstream ist;
	ist.open("mydata.txt");
	vector<string> processed_points;
	string point="";
	while(ist>>point)
	{
		processed_points.push_back(point);
	}
	cout<<"Two vectors: "<<endl;
	for(Point p: original_points)
	{
		cout<<"("<<p.x<<","<<p.y<<") ";
	}
	cout<<endl;
	for(int i=0;i<processed_points.size();i++)
	{
		cout<<processed_points[i]<<" ";
	}
	cout<<endl;
	if(original_points.size()!=processed_points.size())
	error("Something's wrong!");
	return 0;
}
