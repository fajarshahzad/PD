#include<iostream>
using namespace std;
string containsSeven(int arr[],int size)
{
	string result="there is no 7 in the array";
	bool found=false;
	int num=0;
	int digit=0;
	for(int i=0;i<size;i++)
	{
	if(!(found))
	{
	num=arr[i];
	while(num!=0)
	{
		digit=num%10;
		if(digit==7)
		{
		result="Boom!";
		found=true;
		break;	
		}
		num=num/10;
		}	
	}
}
return result;
}
main()
{
	int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Element "<<i+1<<": ";
		cin>>arr[i];
	}
	string result=containsSeven(arr,size);	
	cout<<result;
}
