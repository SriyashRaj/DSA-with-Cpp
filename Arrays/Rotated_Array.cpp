/*
Search in a Rotated Sorted Array using Modified Binary Search

Approach:
At each step, one half of the array is always sorted.
Identify the sorted half and decide whether the target lies in it,
then continue binary search in the appropriate half.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,6,7,0,1,2};//Sample Array
    int n=7;
    int tgt=0;
    int st=0,end=n-1;
    
    while(st<=end)
    {
        int mid = st + (end - st) / 2;

        if(arr[mid]==tgt) //Mid is ans
        {
            cout << mid;
            return 0;
        }

        if(arr[mid]>arr[st]) //Left is Sorted
        {
            if(tgt<=arr[mid]&&tgt>=arr[st])
            end=mid-1;
            else st=mid+1;

        }
        else //Right is Sorted
        {
            if(tgt>=arr[mid]&&tgt<=arr[end])
            st=mid+1;
            else end=mid-1;

        }
    }
    return -1;

}