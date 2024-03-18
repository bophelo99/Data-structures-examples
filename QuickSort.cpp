#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int begin_, int end_)
{
    //choose pivot ele
    int pivot = arr[end_];
    //index of smaller element, & iondicate right positin of pivot found so far
    int i = (begin_-1);

    //put elements smaller than pivot on the left
    //and greater than pivot on the right of pivot
    for(int j=begin_;j<end_; j++){
        //if current element less than pivot
        if(arr[j]<=pivot){
            i++; // skip element of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[end_]);
    return (i+1);
}
void QuickSort(int arr[], int begin_, int end_){
    if(begin_<end_)
    {
        int Pi=partition(arr, begin_, end_);

        //recursion caall
        //smaller element than pivot goes left and
        //higher element goes right
        QuickSort(arr, begin_, Pi-1);
        QuickSort(arr, Pi+1, end_);

    }
}

void print(int arr[], int size)
{
    for(int i=0; i<size;i++)
      cout << " " << arr[i];
      cout << "\n";
}

int main()
{
    int arr[]={10,7,9,3,6};
    int size_=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, size_-1);
    print(arr, size_);
    return 0;
}