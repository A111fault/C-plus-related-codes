#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Enter a character or symbol" << endl;
    cin >> c;


    if(c>='a' && c<='z'){
            cout << "Lowercase letter";
    }
    else if(c>='A' && c<='Z'){
            cout << "Uppercase letter";
    }
    else if(c>='0' && c<='9'){
             cout << "Digit";
    }
    else if(c>='%' && c<=','){
            cout << "Symbol";
    }


    return 0;
}
