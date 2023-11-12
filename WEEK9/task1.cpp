#include<iostream>
using namespace std;
main()
{
	int result;	
	int count=0;
	string word;
	cout<<"Enter a String: ";
	getline(cin,word);
	for(int i=0;i<word.length();i++)
	{
	count=count+1;
	}
	if(count%2==0)
	{
	result=1;
	}
	else
	{
	result=0;
	}
	cout<<result;
}
