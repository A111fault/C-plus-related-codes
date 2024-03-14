#include <iostream>

using namespace std;

int main()
{
    float x,y;

    cout << "x= " << endl;
    cin >> x;
    cout << "y= " << endl;
    cin >> y;

    if(x==0 && y==0){
        cout << "Origin" << endl;
    }else if(x<0 && y<0){
        cout << "3rd quadrant" << endl;
    }else if(y==0 && (x<0 || x>0)){
        cout << "x-axis" << endl;
    }else if(x==0 && (y<0 || y>0)){
        cout << "y-axis" << endl;
    }else if(x>0 && y>0){
        cout << "4th quadrant" << endl;
    }else if(x>0 && y>0){
        cout << "1st quadrant" << endl;
    }else if(x<0 && y>0){
         cout << "2nd quadrant" << endl;
    }


    return 0;
}
