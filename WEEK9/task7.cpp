#include<iostream>
using namespace std;
void convertPINToDance(string pin)
{
	string MOVES[]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
	if (pin[0] == '\0' || pin[1] == '\0' || pin[2] == '\0' || pin[3] == '\0' ||
        !(pin[0] >= '0' && pin[0] <= '9') || !(pin[1] >= '0' && pin[1] <= '9')||
        !(pin[2] >= '0' && pin[2] <= '9') || !(pin[3] >= '0' && pin[3] <= '9'))
        {
        	cout<<"Invalid input."<<endl;
        	return;
		}
		for(int i=0;i<pin.length();i++)
		{
			int digit=pin[i]-'0';
			int idx=(digit+i)%10;
			cout<<MOVES[idx]<<"";
			if(i!=pin.length()-1)
			{
				cout<<", ";
			}
		}
		cout<<endl;
}
main()
{
	string pin;
	cout<<"Enter your PIN (4 digits): ";
	cin>>pin;
	convertPINToDance(pin);
}
