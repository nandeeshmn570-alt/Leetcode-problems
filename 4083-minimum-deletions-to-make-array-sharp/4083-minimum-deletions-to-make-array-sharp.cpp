class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count = 0;
        for (int i = 1; i < nums.size(); i++) {
            int n = nums[i - 1] ^ nums[i];
            if (n == 0) {
                count++;
            }
        }
        return count;
    }
};