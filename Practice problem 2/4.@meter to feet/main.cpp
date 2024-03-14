#include <iostream>

using namespace std;

int main()
{
    float heightm, heightf;

    cout << "Enter the height in m" << endl;
    cin >> heightf;

    heightm = (heightf*3.281);

    cout << "height in feet is" << heightm << "ft" << endl;

    return 0;
}
