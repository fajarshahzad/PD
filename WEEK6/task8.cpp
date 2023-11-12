#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
	string yearType;
	cout<<"Enter year type: ";
	cin>>yearType;
	int holidays;
	cout<<"Enter number of holidays: ";
	cin>>holidays;
	int hometownWeekends;
	cout<<"Enter number of weekends: ";
	cin>>hometownWeekends;
	int result= calculateVolleyballGames( yearType,  holidays,  hometownWeekends);
	cout<<result;
}
int  calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
	int result;
	int roundoff;
	if(yearType=="leap")
	{
	holidays=holidays*0.67;
	hometownWeekends=hometownWeekends*0.75;
	roundoff=holidays+hometownWeekends;
	result=48-48*0.15;
	result=result+roundoff+1;
	}
	else
	{
	holidays=holidays*0.67;
	hometownWeekends=hometownWeekends*0.75;
	roundoff=holidays+hometownWeekends;
	result=48-48*0.15;
	result=result+roundoff;
	result=result-result*0.15;
	if(result>=44)
		result=result+2;
	result=result+1;
	}
return result;
}
	

	
	
