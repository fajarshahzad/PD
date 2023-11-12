#include<iostream>
using namespace std;
main()
{
	int result;
	int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	string arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Element "<<i+1<<": ";
		cin>>arr[i];
	}
	result=size*2+(size-1);
	cout<<"Time to color: "<<result<<" seconds";
}
