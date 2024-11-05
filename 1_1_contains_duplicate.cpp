#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

int main () {
    Solution solution;

    std::vector<int> nums1 = {1, 2, 3, 3};
    std::cout << "Solution 1: " << (solution.hasDuplicate(nums1) ? "True" : "False") << "\n";

    std::vector<int> nums2 = {1, 2, 3, 4};
    std::cout << "Solution 2: " << (solution.hasDuplicate(nums2) ? "True" : "False") << "\n";

    return 0;
}


