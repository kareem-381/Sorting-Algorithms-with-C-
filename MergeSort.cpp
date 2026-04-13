#include <iostream>
#include <algorithm>

using namespace std;

void merge(int arr[],int lb,int mid, int ub)
{
    int i = lb;
    int j = mid+1;
    int k =lb;
    int *b = new int[ub+1];

    while(i <= mid && j <= ub)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    }

    if(i > mid)
    {
        while(j<=ub)
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=arr[i];
            i++;
            k++;
        }
    }

    for(int i = lb; i<=ub; i++)
    {
        arr[i]=b[i];
    }

    delete[] b;
}

void mergeSort(int arr[], int lb, int ub)
{
    if(lb < ub)
    {
        int mid = (lb + ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }    
}

int main()
{
    const int size = 5;
    int arr[size]={15,6,9,25,43};
    int lb = 0;
    mergeSort(arr,lb,size-1);

    for(int i = 0; i<size;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// In all Cases the time Complexity is O(nlogn)