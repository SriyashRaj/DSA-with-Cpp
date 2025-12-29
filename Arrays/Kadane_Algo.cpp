
/*
Problem: Maximum Subarray Sum (Kadane's Algorithm)
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum;
    return 0;
}

