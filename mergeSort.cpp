#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int const first, int const mid, int const last)
{
  //define the size of new subarrays
   int leftSubArraySize = mid-first+1;
   int rightSubArraySize = last-mid;

   //defined new temp arrays
   int LeftArr[leftSubArraySize], RightArr[rightSubArraySize];

    //copy data into temp arrays
    for(int itLeft=0; itLeft<leftSubArraySize; itLeft++)
        LeftArr[itLeft]=arr[first+itLeft];
    for(int rightit=0; rightit<rightSubArraySize; rightit++)
        RightArr[rightit]=arr[mid+1+rightit];

    //
    int indexLeftArr=0, indexrightArr=0, MergedArr=first;

      //merge temp SubArr in arr
      while(indexLeftArr<leftSubArraySize && indexrightArr<rightSubArraySize)
      {
        if(LeftArr[indexLeftArr]<=RightArr[indexrightArr])
        {
            arr[MergedArr]=LeftArr[indexLeftArr];
            indexLeftArr++;
        }
        else{
            arr[MergedArr]=RightArr[indexrightArr];
            indexrightArr++;
        }
        MergedArr++;
      }

    //copy remaining elements
    while(indexLeftArr<leftSubArraySize)
    {
        arr[MergedArr]=LeftArr[indexLeftArr];
        indexLeftArr++;
        MergedArr++;
    }
    while(indexrightArr<rightSubArraySize)
    {
        arr[MergedArr]=RightArr[indexrightArr];
        indexrightArr++;
        MergedArr++;
    }

}
void mergesort(int arr[], int const first, int const last)
{
   // if(first>last)
     //  return;
 if(first<last){
   int mid = first + (last-first)/2;
   mergesort(arr, first, mid);
   mergesort(arr, mid+1, last);
   merge(arr, first, mid, last);
 }
}

void print(int arr[], int size)
{
    for(int i=0; i<size; i++)
      cout << " " << arr[i];
      cout << "\n"; 
}

int main()
{
    int arr[]={4, 87, 9, 23, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    //print(arr,size);
    mergesort(arr, 0, size-1);
    print(arr, size);
    return 0;
}