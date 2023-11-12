#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main()
{
    string fruit;
    cout<<"Enter the fruit name: ";
    cin >> fruit;
    string dayOfWeek;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    double quantity;
    cout<<"Enter the quantity: ";
    cin >> quantity;
    float result;
    result = calculateFruitPrice(fruit, dayOfWeek, quantity);
    if(result!=0)
	{
    cout << result;
	}
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float result;
    if (dayOfWeek =="Sunday" || dayOfWeek=="Saturday")
{
        if (fruit=="banana")
	{
           	 result=quantity*2.70;
	}
        if (fruit=="apple")
	{
            	result=quantity*1.25;
	}
        if (fruit=="orange")
	{
           	 result=quantity*0.90;
	}
        if (fruit=="grapefruit")
	{
            	result=quantity*1.60;
	}
        if (fruit=="kiwi")
	{
           	 result=quantity*3.00;
	}
        if (fruit=="pineapple")
	{
            	result=quantity*5.60;
	}
        if (fruit=="grapes")
	{
            	result=quantity*4.20;
	}
}
  else if(dayOfWeek=="Monday" || dayOfWeek=="Tuesday" || dayOfWeek=="Wednesday" || dayOfWeek=="Thursday" || dayOfWeek=="Friday")
{
        if (fruit=="banana")
	{
           	 result=quantity*2.50;
	}
        if (fruit=="apple")
	{
            	result=quantity*1.20;
	}
        if (fruit=="orange")
	{
           	 result=quantity*0.85;
	}
        if (fruit=="grapefruit")
	{
           	 result=quantity*1.45;
	}
        if (fruit=="kiwi")
	{
            	result=quantity*2.70;
	}
        if (fruit=="pineapple")
	{
            	result=quantity*5.50;
	}
        if (fruit=="grapes")
	{
            	result=quantity*3.85;
	}
}
	else
		{
		cout<<"error";
		return 0;
		}
	return result;
}
