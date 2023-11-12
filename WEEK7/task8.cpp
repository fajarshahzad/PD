#include<iostream>
using namespace std;
main()
{
	int visitDays;
	cout<<"Enter Number of days you visited Hospital: ";
	cin>>visitDays;
    int doctors=7;
	int treatedPatients=0;
	int untreatedPatients=0;
	
	int n;
    for(int i=1;i<=visitDays;i++)
	{
	cout<<"Number of patients who visited hospital on Day "<<i<<": ";
	cin>>n;
	    if((i%3==0)&&untreatedPatients>treatedPatients)
		{
			doctors=doctors+1;
		}
		if(doctors>=n)
		{
			treatedPatients=treatedPatients+n;
            untreatedPatients=untreatedPatients+0;
		}
		else
		{
			treatedPatients=treatedPatients+doctors;
			untreatedPatients=untreatedPatients + n-doctors;
		}
	}
		cout<<"Treated Patients: "<<treatedPatients<<endl;
		cout<<"Untreated Patients: "<<untreatedPatients<<endl;
}
