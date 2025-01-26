#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> t;

        for (size_t i = 0; i < s.size(); ++i) {
            // Push opening brackets onto the stack
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                t.push(s[i]);
            } 
            else {
                // If stack is empty, there's no opening bracket to match
                if (t.empty()) return false;

                char top = t.top(); // Get the top element
                
                // Check if it matches the current closing bracket
                if ((s[i] == ')' && top == '(') || 
                    (s[i] == '}' && top == '{') || 
                    (s[i] == ']' && top == '[')) {
                    t.pop(); // Pop the matching opening bracket
                } else {
                    return false; // Mismatched brackets
                }
            }
        }

        // At the end, stack must be empty for a valid string
        return t.empty();
    }
};

int main() {
    Solution sol;

    // Test cases
    string test1 = "{[()]}"; // Valid
    string test2 = "{[(])}"; // Invalid
    string test3 = "{{[[(())]]}}"; // Valid

    cout << (sol.isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << (sol.isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << (sol.isValid(test3) ? "Valid" : "Invalid") << endl;

    return 0;
}
