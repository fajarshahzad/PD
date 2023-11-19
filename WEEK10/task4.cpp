#include<iostream>
using namespace std;
main()
{
	int box,sum=0;
	cout<<"Enter the number of boxes: ";
	cin>>box;
	int dimension[box];
	cout<<"Enter the dimensions of the boxes(length, width, height): "<<endl;
	for(int i=0;i<(box*3);i++)
	{
		cin>>dimension[i];
	}
	for(int i=0;i<(box*3);i=i+3)
	{
		int volume=dimension[i]*dimension[i+1]*dimension[i+2];
		sum=sum+volume;	
	}
	cout<<"Total volume of all boxes: "<<sum;
}
