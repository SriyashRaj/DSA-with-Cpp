/*
LeetCode 88: Merge Sorted Array

Problem Summary:
- Two arrays are already sorted.
- nums1 has size (m + n), where first m elements are valid and last n are empty (0).
- nums2 has n elements.
- Task is to merge nums2 into nums1 in sorted order.
- Must be done IN-PLACE (no extra array allowed).

Approach:
- Use 3 pointers starting from the END of arrays.
- i -> last valid element of nums1 (m-1)
- j -> last element of nums2 (n-1)
- k -> last index of nums1 (m+n-1)
- Compare nums1[i] and nums2[j] and place the larger one at nums1[k].
- Move pointers accordingly.
- This avoids overwriting elements in nums1.

Time Complexity: O(m + n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,0,0,0};
    int B[]={2,5,6};
    int m=3,n=3;

    //3 pointers
    int ind=m+n-1;
    int i=m-1,j=n-1;
    
    //loop run
    while(i >= 0 && j >= 0)
    {
        if(A[i]<B[j]) // j big
        {
            A[ind]=B[j];
            j--;
            ind--;
        }
        else //(arr1[i]>=arr2[j])
        {
            A[ind]=A[i];
            i--;
            ind--;
        }
    }
    while(j>=0)
    {
        A[ind]=B[j];
        ind--;
        j--;
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<A[i];
    }
    return 0;
}