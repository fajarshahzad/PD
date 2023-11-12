#include<iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
 	string month;
    cout <<"Enter the month (May, June, July, August, September, October): ";
    cin >> month;
	int numberOfStays;
    cout <<"Enter the number of stays: ";
    cin >> numberOfStays;
   	string result;
   	result = calculateHotelPrices(month, numberOfStays);
    cout << result;
}

string calculateHotelPrices(string month, int numberOfStays)
{
    string result;
    float sCost, aCost;

    if (month=="May"||month=="October")
       	 	sCost=numberOfStays*50;
    		aCost=numberOfStays*65;
        if (numberOfStays>7 && numberOfStays<14)
        	{
            	sCost=sCost-sCost*0.05;
       		}
        else if (numberOfStays>14)
       	 	{
            	sCost=sCost-sCost* 0.30;
            	aCost=aCost-aCost* 0.10;
        	}
    
    if (month=="June"||month=="September")
	{
        sCost=numberOfStays*75.20;
        aCost=numberOfStays*68.70;
    
        if (numberOfStays>14)
        {
            sCost=sCost-sCost*0.20;
            aCost=aCost-aCost*0.10;
        }
    }
    if (month=="July"||month=="August")
    {
        sCost=numberOfStays*76;
        aCost=numberOfStays*77;
    
        if (numberOfStays>14)
            aCost=aCost-aCost*0.10;
    } 
    result = "Appartment: " + to_string(aCost) + "$.\nStudio: " + to_string(sCost) + "$." ; 
    return result;

}