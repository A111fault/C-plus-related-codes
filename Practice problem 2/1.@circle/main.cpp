#include <iostream>

using namespace std;

int main()
{
   float radius, area, circumference;
   float pi = 3.1416;

   cout <<" Enter radius" << endl;
   cin  >> radius;

   area = 3.1416*radius*radius;
   circumference = 2*3.1416*radius;

   cout << "Area of the circle with the radius" << radius <<"is"<< area<< endl;
   cout << "Circumference of the circle with radius"<< radius<<"is"<<circumference;

    return 0;
}
