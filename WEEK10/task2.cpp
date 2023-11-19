#include<iostream>
using namespace std;
main()
{
	int size;
	cout<<"Enter how many words you want to enter: ";
	cin>>size;
	string arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter word "<<i+1<<": ";
		cin>>arr[i];
	}
	char letter;
	cout<<"Enter the letter you want to count: ";
	cin>>letter;
	int charCount=0;
	for(int i=0;i<size;i++)
	{
		string myWord;
		myWord=arr[i];
		for(int j=0;myWord[j]!='\0';j++)
		{
			if(letter==myWord[j])
			charCount++;
		}
	}
	cout<<letter<<" shows up "<<charCount<<" times in the data.";
}
