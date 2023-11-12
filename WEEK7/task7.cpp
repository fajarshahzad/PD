#include<iostream>
using namespace std;
bool isPrime(int number);
int primorial(int n);
main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	int result= primorial(n);
	cout<<result;
}
bool isPrime(int number)
 {
    if (number <= 1) 
	{
        	return false; 
   	 }
    if (number <= 3)
	 {
        	return true;  
   	 }
    if (number % 2 == 0 || number % 3 == 0)
	 {
        	return false; 
    	}
    for (int i = 5; i * i <= number; i =i+ 6)
{
        if (number % i == 0 || number % (i + 2) == 0)
	 {
            	return false;  
        	}
}

    return true;
}
int primorial(int n)
{  
if (n <= 0) 
{
        return 1; 
 }
    int  result = 1;
    int count = 0;
    int currentNumber = 2;
    while (count < n) 
{
        if (isPrime(currentNumber))
	 {
            	result = result*currentNumber;
            	count++;
       	 }
        currentNumber++;
    }

    return result;
}
