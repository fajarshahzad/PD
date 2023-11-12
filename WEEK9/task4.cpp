#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n)
{
	for(int counter=0;counter<n;counter++)
	{
	for(int  i=0;i<size;i++)
	{
	if(arr[i]%2==0)
	{
	arr[i]=arr[i]-2;
	}
	else
	{
	arr[i]=arr[i]+2;
	}
	}
}
}
main()
{
	int size;
	int arr[size];
	cout<<"Enter the size of Array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Element "<<i+1<<": ";
		cin>>arr[i];
	}
	int n;
	cout<<"Enter number of times even-odd transformation need to be done: ";
	cin>>n;
	evenOddTransform(arr,size,n);
	cout<<"[";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"";
		if(i!=size-1)
		{
			cout<<", ";
		}
	
	}
	cout<<"]";
	
}

