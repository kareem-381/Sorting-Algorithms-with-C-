#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 5;
    int arr[size] = {10,58,68,44,55};
    
    for (int i = 1; i<size;i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for (int i = 0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time complexity for Insertion Sort in Best Case omega(n) 
// In Worst and Average Case it is O(n^2), Theta(n^2)