#include <iostream>
using namespace std;
void printStars(int rowSize);
void lowerPart(int rowSize);
main()
{
	int rowSize;
	cout << "Enter desired number of rows: ";
	cin >> rowSize;
	printStars(rowSize);
	lowerPart(rowSize);
}
void printStars(int rowSize)
{
	for (int row = 1; row <= rowSize; row++)
	{
		for (int s = rowSize; s>=row ; s--)
			cout << " ";
		for (int col = 1; col <= row; col++)
			cout << "*";
		cout<<endl;
	}
}
void lowerPart(int rowSize)
{
	for(int row=1;row<= rowSize; row++)
	{
		for(int s=1;s<=row;s++)
		cout<<" ";
	for(int col =rowSize; col>=row;col--)
		cout<<"*";
		cout<<endl;
	}
}