#include <iostream>

using namespace std;

int main()
{
     float x,y,z;

    cout << "Enter x= ";
    cin >> x;
    cout << "Enter y= ";
    cin >> y;
    cout << "Enter z= ";
    cin >> z;

    if(x>y){
// x is larger then y
        if(x>z){
            cout << "Largest:"<<x<<endl;
//x is larger then y and x is larger than z
            if(y>z){
//x is larger then y and x is larger than z and y is larger then z
                cout << "Smallest: " << z ;
            }
            else{
//x is larger then y and x is larger than z and z is larger then y
                cout << "Smallest: " << y ;
            }
        }
        else{
// x is larger then y and z is larger than x
            cout <<"Largest:" <<z<<endl;
            cout << "Smallest:"<<y;
        }
    }
    else{
// y is larger then x
        if(y>z){
            cout << "Largest: "<<y<< endl;
            if(x>z){
                cout <<"Smallest:"<<z ;
            }
            else{
                cout <<"Smallest:"<<x;
            }
        }
        else{
            cout<<"Largest:"<<z<<endl;
            cout <<"Smallest:"<<x;
        }
    }
    return 0;
}
