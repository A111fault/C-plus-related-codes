#include <iostream>

using namespace std;

int main()
{
    float length, breadth, area, perimeter;
    cout << " Input the length of rectangle" << endl;
    cin >> length;
    cout << " Input the breadth of the rectangle" <<endl;
    cin >> breadth;
    area = length*breadth;
    perimeter = 2*length*breadth;

    cout << " the area is" << area << endl;
    cout << "the perimeter is" << perimeter << endl;
    return 0;
}
