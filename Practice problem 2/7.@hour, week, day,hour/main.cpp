#include <iostream>

using namespace std;

int main()
{
    int hour, week, day;
    cin >> hour;

    week = (hour/168);
    day = ((hour%168)/24);
    hour = ((hour%168)-(day*24));


    cout << "it is " << week << "weeks" << day << "days" << hour << "hours" << endl;

    return 0;
}
