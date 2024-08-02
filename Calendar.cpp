#include <iostream>
using namespace std;

void calender()
{
    int daysOfYear = 365;
    int monthOfYear = 12;
    string nameOfMonth[12] = {"January", "Fabruary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int dayPerMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Fixed array size
    int weekOfYear = 52;
    int daysOfWeek = 7;
    string dayPerWeek[daysOfWeek] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for(int i = 0; i < daysOfWeek; i++)
    {
        cout << dayPerWeek[i] << "|";
    }
    cout << endl << endl;

    for(int i = 0; i < monthOfYear; i++)
    { 
            cout <<nameOfMonth[i] <<endl << endl;
        for(int j = 1; j <= dayPerMonth[i]; j++)
        {
            for(int k = 0; k < daysOfWeek; k++)
            {
                if (j <= dayPerMonth[i])
                {
                    cout << j << "\t\t ";
                    j++;
                }
            }
            j--; 
            cout << endl;
        }
    }
}

int main()
{
    calender();
}
