#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 5;
    int arr[size]={10,25,35,7,3};

    for (int i = 0; i<size-1; i++)
    {
        int smallest_num = i ;
        for(int j = i+1; j<size; j++)
        {
            if (arr[j] < arr[smallest_num])
            {
                smallest_num = j;
            }
        }
        swap(arr[i],arr[smallest_num]);
    }

    for (int i =0; i<size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Selection Sorts involve Time Complexity of n^2 becuase it contain nested loop