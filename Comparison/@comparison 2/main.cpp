#include <iostream>

using namespace std;

int main()
{
    int number;


    cout << "Enter your total number:";
    cin >> number;

    if( number >= 100){
        cout<<"greater than A"<<endl;
    }
    if(number>=70 && number < 100){
            cout<< "greater than B"<< endl;
    }
    if(number>=85 && number < 100){
        cout <<" greater than C" << endl;
    } return 0;
}
