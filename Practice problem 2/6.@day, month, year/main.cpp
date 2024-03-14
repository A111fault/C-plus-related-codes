#include <iostream>

using namespace std;

int main()
{
    int day, month, year;

    cout << "input the number of days" << endl;
    cin >> day;

    year = (day/365);
    month = ((day%365)/30);
    day = ((day%30));

    cout <<" It is " << year << "year and" << month << "months and" << day << "days" << endl;


    return 0;
}
