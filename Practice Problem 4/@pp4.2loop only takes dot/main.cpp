#include <iostream>

using namespace std;

int main()
{
    char character;

    cout << "Enter a character: ";
    cin >> character;

    while(character!='.'){
        cout << "Enter a character: ";
        cin >> character;
    }
    return 0;
}
