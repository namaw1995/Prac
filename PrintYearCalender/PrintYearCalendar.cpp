

#include <iostream>
#include <iomanip>
using namespace std;
int printMonthCalender(int numOfDays, int startingDay);
bool leapyear(int year);
void printYearCalender(int year, int startingDay);

int main()
{
    int year, newyear;
    cout << "what year is this year? ";
    cin >> year;
    cout << "which day in a week did this year's new year happen? ";
    cin >> newyear;
    printYearCalender(year, newyear);
}

int printMonthCalender(int numOfDays, int startingDay)
{  
    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;
    int firstweek = 7 - startingDay + 1;
    for (int s = 1; s < startingDay; s++)
    {
        cout << "\t";
    }
    for (int i = 1; i <= numOfDays; i++)
    {
        if ( (i-firstweek)%7 == 0)
        {
            cout <<  i << endl;
        }
        else
        {
            cout << i<< "\t";
        }
    }
    cout << endl <<endl;
        int n;
        n = (numOfDays - (7 - startingDay + 1)) % 7;
        return n;
}

bool leapyear(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0))
        return true;
    else
        return false;
}

void printYearCalender(int year, int startingDay)
{
    int leap;
    leap = leapyear(year);
    int days;
    int j;
    for (int i = 1; i < 12; i++)
    {
        if (i == 1)
        {
            cout << "January " << year << endl;
            j = printMonthCalender(31, startingDay);
        }
        else if (i == 2)
        {
            cout << "Feburary " << year << endl;
            if (leap == true)
                j = printMonthCalender(29, j + 1);
            else
                j = printMonthCalender(28, j + 1);
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            if (i == 4)
                cout << "April " << year << endl;
            else if (i == 6)
                cout << "June " << year << endl;
            else if (i == 9)
                cout << "September " << year << endl;
            else
                cout << "November " << year << endl;
            j = printMonthCalender(30, j + 1);
        }
        else
        {
            if (i == 3)
                cout << "March " << year << endl;
            else if (i == 5)
                cout << "May " << year << endl;
            else if (i == 7)
                cout << "July " << year << endl;
            else if (i == 8)
                cout << "August " << year << endl;
            else if (i == 10)
                cout << "October " << year << endl;
            else
                cout << "December " << year << endl;
            j = printMonthCalender(31, j + 1);
        }
    }
}