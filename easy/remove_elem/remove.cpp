#include <iostream>
#include <vector>
#include <algorithm> // For sort
#include <cassert>   // For assert
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                ++index;
            }
        }
        return index;
    }
};

int main() {
    Solution sol;

    // Test case: Input array
    vector<int> nums = {3, 2, 2, 3};
    int val = 3; // Value to remove
    vector<int> expectedNums = {2, 2}; // Expected result (no values equal to val, sorted)

    // Call the removeElement method
    int k = sol.removeElement(nums, val);

    // Check that the length is as expected
    assert(k == expectedNums.size());

    // Sort the first k elements of the nums array
    sort(nums.begin(), nums.begin() + k);

    // Validate the result
    for (int i = 0; i < k; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "All tests passed!" << endl;
    return 0;
}

