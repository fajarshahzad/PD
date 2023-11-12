#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry,float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{
	string stdName;
	cout<<"Enter student name: ";
	 cin>>stdName;
	float marksEnglish;
	cout<<"Enter marks for English: ";
	cin>>marksEnglish;
	float marksMaths;
	cout<<"Enter marks for Maths: ";
	cin>>marksMaths;
	float marksChemistry;
	cout<<"Enter marks for Chemistry: ";
	cin>>marksChemistry;
	float marksSocialScience;
	cout<<"Enter marks for Social Science: ";
	cin>>marksSocialScience;
	float marksBiology;
	cout<<"Enter marks for Biology: ";
	cin>>marksBiology;
	cout<<"Student Name: "<<stdName<<endl;
	float average=calculateAverage( marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
	string result1=calculateGrade(average);
	cout<<"Percentage: "<<average<<"%"<<endl;
	cout<<"Grade: "<<result1; 
}
	float calculateAverage(float marksEnglish,float marksMaths,float marksChemistry,float marksSocialScience,float marksBiology)
{
	float total=marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology;
	float average=(total/500)*100;
	return average;
}
string  calculateGrade(float average)
{
	string result1;
	if(average>90 && average<=100)
	{
	result1="A+";
	}
	else if ( average>80 && average <=90)
	{
	result1="A";
	}
	else if( average>70 && average<=80)
	{
	result1="B+";
	}
	else if (average>60 && average <= 70)
	{
	result1="B";
	}
	else if ( average >50 && average <=60)
	{
	result1="C";
	}
	else if (average>40 && average <=50) 
	{
	result1="D";
	}
	else
	{
	result1="F";
	}
	return result1;
}


