#include<iostream>
using namespace std;
main()
{
	int size;
	cout<<"Enter the length of the array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<(size-1);j++)
		{	
		if(arr[j]>arr[j+1])
			{
			int swap=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=swap;
			}
		}
	}
	bool flag=false;
	for(int i=0;i<size;i++)
	{
		if(arr[i]+1==arr[i+1])
		flag=true;
	}
	cout<<"Can be arranged: "<<flag;
}
