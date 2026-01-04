/*
    Dutch National Flag Algorithm (DNF)

    Problem:
    Sort an array containing only 0s, 1s, and 2s without using any extra space.

    Approach:
    - Use three pointers:
        low  -> tracks the position for 0s
        mid  -> current element under consideration
        high -> tracks the position for 2s

    Logic:
    - If arr[mid] == 0:
        Swap it with arr[low] and move both pointers forward
    - If arr[mid] == 1:
        Element is already in correct position, just move mid
    - If arr[mid] == 2:
        Swap it with arr[high] and move high backward
        (mid is not incremented because the swapped element is unprocessed)

    Loop Condition:
    - Continue until mid crosses high

    Time Complexity:
    - O(n) → Each element is processed at most once

    Space Complexity:
    - O(1) → In-place sorting, no extra space used
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[]={2,0,2,1,1,0};
    int n=6;
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else //arr[mid]==2
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    // print array
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}