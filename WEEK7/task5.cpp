#include<iostream>
using namespace std;
int NumberofDots(int n);
main()
{
	int n; 
	cout<<"Enter number of Triangle: ";
	cin>>n;
	int sum=NumberofDots(n);
	cout<<"Dots in the Triangle: "<<sum;
}
int NumberofDots(int n)
{	int x;
	int sum=0;
	for(x=0;x<=n;x++)
	{
		 sum=sum+x;
	}
	return sum;
} 
