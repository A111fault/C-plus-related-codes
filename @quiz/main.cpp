#include <iostream>

using namespace std;

int main()
{
    float TPR, TNR, TP, TN, FP, FN;

    cout << "Enter values of TP : ";
    cin >> TP;

    cout << "Enter values of TN : ";
    cin >> TN;

    cout << "Enter values of FP : ";
    cin >> FP;

    cout << "Enter values of FN : " ;
    cin >> FN;

    TPR = (TP/(TP+FN));
    TNR = (TN/(TN+FP));

    cout << "The value of TPR : " << TPR << endl;
    cout << "The value of TNR : " << TNR << endl;


    return 0;
}
