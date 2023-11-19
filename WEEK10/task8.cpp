#include <iostream>
using namespace std;
main()
{
	int size;
	cout<<"Enter the length of the array: ";
	cin>>size;
	string arr[size];
	cout<<"Enter the elements of the array (\"left\" or \"right\"): "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]=="right")
		{
		sum=sum+90;
		}
		if(arr[i]=="left")
		{
			sum=sum-90;
		}	
	}
	if(sum<0)
	{
		sum=-sum;
	}
	cout<<"Number of full rotations: "<<(sum/360);
}
