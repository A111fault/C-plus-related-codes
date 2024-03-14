#include <iostream>
#include <cstdlib>
using namespace std;

int array_input_random(float []);
int array_input(float []);
void array_print(float [], int);
void array_sort(int [],int);//Define
int array_search(float [], int , float );//Define
int array_search_frequency(int [],int,int);//Define


int main()
{
    int n,m;
    float x[100],y[100],z[100];
    int b, j, temp,sum;


    n = array_input(x);
    cout <<"-----X-----"<<endl;
    array_print(x,n);
    b = array_input_random(y);
    cout <<"-----Y-----"<<endl;
    array_print(y,m);

    for(j=0; j<m; j = j+1){
        temp = array_search(x,n,y[j]);{
        if(temp > -1){
            sum = sum + 1;
        }
     }
  }
  if(sum==m){
    cout << "Is a subset";
  }


    return 0;
}

int array_input_random(float x[]){
    int i, m;

    cout << "How many elements: ";
    cin >> m;

    for(i = 0 ; i < m; i = i +1){
            x[i] = rand()%10;
    }

    return m;
}

int array_input(float x[]){
    int i, n;

    cout << "How many elements: ";
    cin >> n;

    for(i = 0 ; i < n; i = i +1){
            cout << "[" << i+1 << "]=";
            cin >> x[i];
    }


    return n;
}

void array_print(float x[], int n){
    int i;

    for(i = 0 ; i < n; i = i +1){
            cout << x[i]<<"   ";
    }
    cout <<endl;
}

int array_search(float x[], int n, float p){
   int i;

    for(i = 0 ; i < n; i = i +1){
            if (x[i] == p){
                 return i;
            }
    }

    return -1;
}
