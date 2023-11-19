#include<iostream>
using namespace std;
int progressiveDay(int size,int num[])
{
	int count=0;
	for(int i=1;i<size;i++)
	{
	if(num[i]>num[i-1])
	{
		count=count+1;
	}
	}
	return count;
}
main()
{
	int size;
	cout<<"Enter the number of Saturdays: ";
	cin>>size;
	int num[size];
	for(int i=0;i<size;i++)
	{
	cout<<"Enter miles run for Saturday "<<i+1<<": ";
	cin>>num[i];
	}
	int result=progressiveDay(size,num);
	cout<<"Total progress days: "<<result;	
}
