class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        int curr = nums[0];
        int Max = -1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                curr += nums[i];
            } else {
                Max = max(curr, Max);
                curr = nums[i];
            }
        }
        return max(curr, Max);
    }
};