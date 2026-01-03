/*
        We use a swap-with-last approach.
        If nums[i] == val:
        - Replace it with the last element
        - Reduce the effective size of the array (n--)
        - Do NOT increment i, because the new element
          at index i must be checked again

        If nums[i] != val:
        - Move to the next index

        Time Complexity: O(n)
        Space Complexity: O(1)
    */

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int nums[] = {3,2,2,3};
    int val = 3;
    int i = 0;

    while (i < n)
    {
        if (nums[i] == val)
        {
            nums[i] = nums[n - 1]; // swap with last
            n--;                  // shrink array
        }
        else
        {
            i++;                  // move forward only if not val
        }
    }

    cout << n;   // n is the count of remaining elements
    return 0;
}
