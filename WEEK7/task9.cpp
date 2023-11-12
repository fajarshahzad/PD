#include <iostream>
#include <iomanip> 
using namespace std;
main()
 {
   	 int n; 
	 cout<<"Enter the count of cargo for transportation: ";
    	cin >> n;
    	float totalCargo = 0;
    	float minibusCargo = 0;
    	float truckCargo = 0;
    	float trainCargo = 0;
       	
        int tonnage;
    	for (int i = 1; i <=n; i++) 
    {
		cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin >> tonnage;
        	totalCargo =totalCargo + tonnage;
        if (tonnage <= 3)
 			{	
            minibusCargo =minibusCargo+ tonnage;
       		} 
	 	if (tonnage > 3 && tonnage <= 11)
 			{
            truckCargo =truckCargo+ tonnage;
        	}
 		if  (tonnage > 11)
			{
            trainCargo = trainCargo+tonnage;
        	}
    }


    totalCargo=minibusCargo+truckCargo+trainCargo;

    float   minibusPercentage = (minibusCargo / totalCargo) * 100;
    float   truckPercentage = (truckCargo / totalCargo) * 100;
    float   trainPercentage = (trainCargo / totalCargo) * 100;
    float   averagePricePerTon = (minibusCargo*200+truckCargo*175+trainCargo*120)/totalCargo;

    cout << fixed << setprecision(2) << averagePricePerTon << endl;
    cout << fixed << setprecision(2) << minibusPercentage << "%" << endl;
    cout << fixed << setprecision(2) << truckPercentage << "%" << endl;
    cout << fixed << setprecision(2) << trainPercentage << "%";
 
}
