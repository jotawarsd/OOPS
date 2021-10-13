#include <iostream>
using namespace std;
int n;
#define size 10

template<class T>

void sel(T A[size])
{
    int i, j, min;
    T temp;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(A[j] < A[min])
            min = j;            
        }
        temp = A[i];
        A[i] = A[min]; 
        A[min] = temp; 
    }
    cout<< "\nSorted array: ";
    for(i = 0; i < n; i++)
    {
        cout<< " "<< A[i];
    }
}

int main()
{
    int A[size];
    float B[size];
    int i;
    cout<< "Enter total number of integer elements: ";
    cin>> n;
    for(i = 0; i < n; i++)
    {
        cout<< "Enter int element "<< i + 1<< ": ";
        cin>> A[i]; 
    }

    sel(A);

    cout<< "\nEnter total number of float elements: ";
    cin>> n;
    for(i = 0; i < n; i++)
    {
        cout<< "Enter float element "<< i + 1<< ": ";
        cin>> B[i];
    }

    sel(B);

}