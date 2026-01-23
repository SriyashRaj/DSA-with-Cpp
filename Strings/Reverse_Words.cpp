/*
    Problem: Reverse Words in a String
    Approach: 
    1. Reverse the entire string.
    2. Extract each word and reverse it individually.
    3. Append words to the result while skipping extra spaces.

    Time Complexity: O(n)
    Space Complexity: O(n)

    Author: Sriyash
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans;

        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            string word;

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if (!word.empty()) {
                ans += " " + word;
            }
        }

        return ans.substr(1);
    }
};
