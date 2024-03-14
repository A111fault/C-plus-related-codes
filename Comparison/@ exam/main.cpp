#include <iostream>

using namespace std;

int main()
{
  float ACC, F1, TP, TN, FP, FN;

    cout << "Enter values of TP : ";
    cin >> TP;

    cout << "Enter values of TN : ";
    cin >> TN;

    cout << "Enter values of FP : ";
    cin >> FP;

    cout << "Enter values of FN : " ;
    cin >> FN;

    ACC = (((TP+TN)*(TP+TN))/(TP+TN+FP+(FN*FN)));
    F1 = ((2*TP)/((2*TP)+FP+FN));

    cout << "The value of ACC : " << ACC << endl;
    cout << "The value of F1 : " << F1 << endl;
    return 0;
}
