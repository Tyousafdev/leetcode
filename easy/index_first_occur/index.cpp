#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // Edge case: empty needle

        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {
            int j = 0; // Pointer for needle
            while (j < m && haystack[i + j] == needle[j]) {
                j++; // Move both pointers forward
            }
            if (j == m) { // If the entire needle is matched
                return i; // Return the starting index in haystack
            }
        }

        return -1; // Needle not found
    }
};

int main() {
    Solution solution;
    string haystack = "hello";
    string needle = "ll";
    int result = solution.strStr(haystack, needle);
    cout << "Index of first occurrence: " << result << endl;
    return 0;
}
