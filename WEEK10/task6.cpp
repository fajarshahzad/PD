#include<iostream>
using namespace std;
main()
{
	int count=1;
	string sentence;
	cout<<"Enter a string: ";
	getline(cin,sentence);
	int size=0;
	for(int i=0;sentence[i]!='\0';i++)
	{
		size++;
		if(sentence[i]==' ')
		{
			count++;
		}
	}
	string answer[count];
	int count1=count;
	string word="";
	for(int j=0;j<size+1;j++)
	{
		if(sentence[j]==' '||j==size)
		{
			answer[count1-1]=word;
			word="";
			count1--;
		}
		else
		{
			word=word+sentence[j];
		}
	}
	string result="";
	for(int i=0;i<count;i++)
	{
		result=result+answer[i]+" ";
	}
	cout<<"Reversed string: "<<result;
}
