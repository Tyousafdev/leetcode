#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0; // Pointer for unique elements
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[index]) {
                ++index;
                nums[index] = nums[i];
            }
        }
        return index + 1; // Length of the unique portion
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 12}; // Input array
    vector<int> expectedNums = {1, 2, 3, 4, 12}; // Expected result

    int k = sol.removeDuplicates(nums); // Call the function

    // Assertions to validate the result
    assert(k == expectedNums.size());
    for (int i = 0; i < k; ++i) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "All test cases passed!" << endl;
    return 0;
}

