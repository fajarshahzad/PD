#include<iostream>
using namespace std;
string decideActivity(string temp, string humidity);
main()
{
	string temp;
	cout<<"Enter temperature (warm or cold): "; 
	cin>>temp;
	string humidity;
	cout<<"Enter humidity (dry or humid): ";
	cin>>humidity;
	string result=decideActivity(temp,humidity);
	cout<<"Recommended activity: "<<result;
}
string decideActivity(string temp, string humidity)
{
	string result;
	if(temp == "warm" && humidity == "dry")
	{
		result="Play tennis";
	}
	else if(temp =="warm" && humidity== "humid")
	{
		result="Swim";
	}
	else if(temp == "cold" && humidity== "humid")
	{
		result="Watch TV";
	}
	else if(temp =="cold" && humidity=="dry")
	{
		result="Play basketball";
	}
	return result;
}

	
