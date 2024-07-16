#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        int n = nums.size();
        if (n < 3) return ans;

        // Sort the array
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i+1;
            int right = n-1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for left and right pointers
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;

                    ++left;
                    --right;
                } 
                else if (sum < 0) {
                    ++left;
                } 
                else {
                    --right;
                }
            }
        }
        return ans;
    }
};
