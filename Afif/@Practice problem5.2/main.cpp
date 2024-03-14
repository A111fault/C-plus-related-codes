#include <iostream>

using namespace std;

int main()
{
    float x, result=1;
    int y,c;
    cout << "Enter X= " << endl;
    cin >> x;
    cout << "Enter Y= " << endl;
    cin >> y;

    for(c=y; c>0; c--){
        result = (result*x);
    }
    cout << result << endl;
    return 0;
}
