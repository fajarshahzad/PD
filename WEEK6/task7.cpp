#include <iostream>
using namespace std;
string checkStudentStatus(int examHour,int examMinutes,int studentHour,int studentMinutes);

 main()
{
	int examHour;
	cout<<"Enter Exam Starting Time (hour): ";
	cin>>examHour;
	int examMinutes;
	cout<<"Enter Exam Starting Time (minutes): ";
	cin>>examMinutes;
	int studentHour;
	cout<<"Enter Student hour of arrival: ";
	cin>>studentHour;
	int studentMinutes;
	cout<<"Enter Student minutes of arrival: ";
	cin>>studentMinutes;
	checkStudentStatus( examHour, examMinutes, studentHour, studentMinutes);
}

string checkStudentStatus(int examHour,int examMinutes,int studentHour,int studentMinutes)
{
    	int examStartTimeInMinutes = examHour * 60 + examMinutes;
    	int arrivalTimeInMinutes = studentHour * 60 + studentMinutes;
    if (arrivalTimeInMinutes > examStartTimeInMinutes)
    {
       cout<<"Late"<<endl;
        int minutesLate = arrivalTimeInMinutes - examStartTimeInMinutes;
        if (minutesLate >= 60)
	 {
            int hoursLate = minutesLate / 60;
            minutesLate %= 60;
            cout<<hoursLate << ":"<< minutesLate<< " hours after the start" << endl;
            return " "; 
        }
else
{

            cout << minutesLate << " minutes after the start" << endl;
            return " ";
    }
}
   if (examStartTimeInMinutes - arrivalTimeInMinutes >30)
 {
        cout << "Early" << endl;
        int minutesEarly = examStartTimeInMinutes - arrivalTimeInMinutes;
        if (minutesEarly >= 60)
 {
            int hoursEarly = minutesEarly / 60;
            minutesEarly %= 60;
            cout  << hoursEarly << ":" << minutesEarly << " hours before the start" << endl;
            return " ";
        } else
 {
            cout << minutesEarly << " minutes before the start" << endl;
            return " ";
        } 
    }
	else {
        cout << "On time" << endl;
        return " ";
    }


}
