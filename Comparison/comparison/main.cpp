#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << " Enter your first number: " ;
    cin >> n1;
    cout << " Enter your second number";
    cin >> n2;
    if(n1 > n2){
        cout<< " first number is greater than second number" << endl;
    }

    if( n1 <  n2) {

        cout << "second number is greater than first number" << endl;
    }
    if( n1 == n2){
            cout << "They are equal" << endl;}
    return 0;
}
