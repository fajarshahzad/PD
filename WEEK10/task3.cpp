#include<iostream>
using namespace std;
bool isRepeatingCycle(int arr[],int size,int c);
main()
{
	int size,c;
	cout<<"Enter the length of the array: ";
	cin>>size;
	cout<<"Enter the elements of the array: "<<endl;
	int arr[size];
	for(int i=0;i<size;i++)
	{
	cin>>arr[i];
	}
	cout<<"Enter the length of the cycle: ";
	cin>>c;
	bool result=isRepeatingCycle(arr,size,c);
	cout<<"Output: "<<result;	
}
bool isRepeatingCycle(int arr[],int size,int c)
{
	bool flag=false;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==arr[i+c])
		flag=true;
	}
	if(c>size)
	{
		flag=true;
	}
	return flag;

}
