#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size]={6,9,8,4,7,20};

    for(int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}


// In Best, Worst, Average Case the time complexity is n^2