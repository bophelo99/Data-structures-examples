#include <bits/stdc++.h>
using namespace std;

void bubblesort(int Arr[], int size)
{
    for(int i=0; i<size-1; i++)
        for(int j=0; j<size-i-1; j++)
            if(Arr[j]>Arr[j+1])
                swap(Arr[j], Arr[j+1]);
}

void printArr(int Arr[], int size)
{
    for(int i=0; i<size; i++)
     cout<<" " << Arr[i];
      cout << endl;
}

int main()
{
    int arr[] = {5, 9, 20, 1, 4};
    int ArrSize = sizeof(arr)/sizeof(arr[0]);

    printArr(arr, ArrSize);
    bubblesort(arr, ArrSize);
    printArr(arr, ArrSize);

    return 0;
}