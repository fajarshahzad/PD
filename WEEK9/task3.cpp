#include<iostream>
using namespace std;
main()
{
	int count=0;
	int result;
	int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	string arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Element "<<i+1<<": ";
		cin>>arr[i];
	if(arr[i]==arr[0])
		count=count+1;
	}
	if(count==size)
	{
		result=1;
	}
	else
	{
		result=0;
	}
cout<<result;
}
