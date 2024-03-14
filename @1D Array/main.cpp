#include <iostream>
#include <cstdlib>
using namespace std;

int array_input_random(float []);
int array_input(float []);
void array_print(float [], int);
float array_max(float [], int);
float array_min(float [], int);
float array_sum(float [], int);
void array_copy(float [], float [], int);
void vector_sum(float [], float [], float [], int);
float array_average(float [],int);//Define
float array_standard_deviation(float [],int);
void array_sort(float [],int);//Define
int array_search(float [],int,int);//Define
int array_search_frequency(int [],int,int);//Define
float dot_product(float [],float[],int);
float cross_product(float [],float[],int);

int main()
{
    int n;
    float x[100],y[100],z[100];
    float b, c, a, search_n,d;

    n = array_input(x);
    cout <<"-----X-----"<<endl;
    array_print(x,n);
    array_copy(y,x,n);
    cout <<"-----Y-----"<<endl;
    array_print(y,n);

    n = array_input(z);
    cout <<"-----Z-----"<<endl;
    array_print(z,n);

    vector_sum(y,x,z,n);
    cout <<"-----Y-----"<<endl;
    array_print(y,n);
    cout << endl;

     cout << "Standard deviation :" << array_standard_deviation(x,n) << endl;

    c = array_average(x,n);
    cout << "Average :" << c << endl;

    a = array_min(x,n);
    cout << "Min :" << a << endl;


    b = array_max(x,n);
    cout << "Max :" << b << endl;

    cout << "Sorting in ascending order:";
    array_sort(x,n);
    array_print(x,n);
    cout << endl;
    cout<<"What do you want to find?" << endl;
    cin>>search_n ;
    d = array_search(x,search_n,n);
    cout << search_n << " Occurs " << d << " times .";



    return 0;
}

int array_input_random(float x[]){
    int i, n;

    cout << "How many elements: ";
    cin >> n;

    for(i = 0 ; i < n; i = i +1){
            x[i] = rand()%10;
    }

    return n;
}


float array_standard_deviation(float x[],int n){

    int i;
    float ave,sd,sum;
    ave = array_average(x,n);
    sum = 0;
    for(i = 0 ; i < n; i = i +1){

            sum = sum + (ave - x[i])*(ave - x[i]);
    }
    sd = sum/n;
    return sd;

}

void vector_sum(float y[], float x[], float z[], int n){
    int i;

    for(i = 0 ; i < n; i = i +1){
            y[i] = x[i] + z[i];
    }
}

void array_copy(float y[], float x[], int n){

    int i;

    for(i = 0 ; i < n; i = i +1){
            y[i] = x[i];
    }
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

float array_max(float x[], int n){
 int i,max;
  max = x[0];
  for(i=0; i<n; i=i+1){
        if(x[i]>max){
            max =x[i];
        }
  }
    return max;

}
float array_min(float x[], int n){
 int i,min;
  min = x[0];
  for(i=0; i<n; i=i+1){
        if(x[i]<min){
            min =x[i];
        }
  }
    return min;

}
float array_average(float x[],int n){
  int i, sum =0;
  float ave;
  for(i = 0; i < n; i = i +1){
            sum = sum +x[i];
    }
   ave = sum / n;
   return ave;
}
void array_sort(float x[],int n){
  int i, j, min;
  float temp;

    for(j=0; j<n; j++){
        min = j;
        for(i=(j+1); i<n; i++){
             if(x[min]>x[i]){
                min=i;
             }
        }
        //swap
        temp = x[min];
        x[min] = x[j];
        x[j] = temp;
   }


}
int array_search(float x[],int y,int n){
   int i,sum;
   sum = 0;
   for(i=0; i<n; i++){
    if(x[i]==y){
        cout << "Search elements found.Position is :" << i+1 << endl;
        sum ++;
    }
   }
   return sum;

}

