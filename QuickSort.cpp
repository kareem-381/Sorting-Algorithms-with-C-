#include <iostream>
#include <algorithm>

using namespace std;

int partition(int arr[],int lb,int ub)
{
    int pivot = arr[lb];
    int i = lb;
    int j = ub;

    while(i<j)
    {
        do
        {
            i++;
        }while(arr[i]<=pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);

        if(i<j)
        {
             swap(arr[i],arr[j]);
        }
    }

    swap(arr[lb],arr[j]);
    return j;

}


void quickSort(int arr[], int lb, int ub)
{
    if(lb<ub)
    {
        int h = partition(arr,lb,ub);
        quickSort(arr,lb,h);
        quickSort(arr,h+1,ub);
    }
}



int main()
{
    const int size = 8;
    int arr[size] = {10,15,9,8,7,6,16,17};
    int lb = 0;
    quickSort(arr,lb,size);

    for(int i = 0; i<size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

}


// In best Case and Average case the time Complexity is O(nlogn)
// In worst Case the time Complexity is O(n^2)

// Reason:
// 1: For Worst
//    when the partition is happened at the smallest or largest element in the list then it is the best case bcz
//    just sorting happens till n elements 
// 2: For Best 
//  if partition happened at middle then array is divided into two halves physically it is not divided but for the 
//  ease of mathematical proof we say n/2 then n/4 and so on 