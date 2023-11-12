#include<iostream>
using namespace std;
void amplify(int number);
main()
{
	int number;
	cout<<"Enter the number to Amplify: ";
	cin>>number;
	amplify(number);
}
void amplify(int number)
{	int i;
	for( i=1;i<=number;i++)
	{
	
	if(i % 4 == 0)
	{
	 cout<<i*10<<", ";
	continue;
	}
	cout<<i;
	if(i<number)
	{
	cout<<", ";
	}

	}
}
