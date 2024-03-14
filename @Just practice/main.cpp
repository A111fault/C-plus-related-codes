#include <iostream>
using namespace std;

void charArrayInit(char arr[], int arrSize){
        int i;
	for (i = 0; i < arrSize; i++){
		arr[i] = '\0';
	}
	cout << arr[i];
}
int charArrayInput(char arr[]){
	int length;
	cout << "Enter a character string (<10): ";
	cin >> arr;
	length = 0;
	while (arr[length] != '\0'){
		length++;
	}
	return length;

}
int main()
{
	char c1[20], c2[20];

	int len1, len2;

		len1 = charArrayInput(c1);
	cout << len1<< endl;;
	len2 = charArrayInput(c2);
	cout << len2;
     charArrayInit(c1, 20);

	charArrayInit(c2, 20);

	return 0;

}
