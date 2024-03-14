#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << " Enter your number";
    cin >> number;

    if(number>89){
        cout <<" Grade A "<<endl;
    }
    else if(number>80){
            cout <<" Grade B+ "<< endl;
    }
    else if (number>70){
        cout <<" Grade B-" << endl;
    }
    else if (number>60){
        cout <<" Grade C+ " << endl;
    }
    else if (number>50){
        cout <<" Grade C- " <<endl;
    }
    else if (number>40){
        cout << " Grade D" << endl;
    }
    return 0;
}
