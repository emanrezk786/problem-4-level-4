#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{

    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);

}

short NumberOfDaysInYear(short Year)
{
    return IsLeapYear(Year) ? 366 : 365;
}

short NumberOfHoursInYear(short Year)
{
    return NumberOfDaysInYear(Year) * 24;
}

int NumberOfMinutesInYear(short Year)
{
   return NumberOfHoursInYear(Year) * 60;
}

int NumberOfSecondsInYear(short Year)
{
    return NumberOfMinutesInYear(Year) * 60;
}

short ReadYear()
{
    short Year;
    cout << "\n Please Enter a Year To Check ?";
    cin >> Year;
    return Year;
}

int main()
{
    short Year = ReadYear();

    cout << "\n Number of Days        in Year [" << Year << "] is " << NumberOfDaysInYear(Year);
    cout << "\n Number of Hours       in Year [" << Year << "] is " << NumberOfHoursInYear(Year);
    cout << "\n Number of Minutes     in Year [" << Year << "] is " << NumberOfMinutesInYear(Year);
    cout << "\n Number of Seconds     in Year [" << Year << "] is " << NumberOfSecondsInYear(Year);
    
    return 0;
}

