class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = numeric_limits<double>::lowest();
        int currSum = 0;
        for (int i = 0; i < k; i++) {
            currSum += nums[i];
        }
        double currAns = (double)currSum / k;
        ans = max(ans, currAns);
        for (int i = k; i < nums.size(); i++) {
            currSum += nums[i];
            currSum -= nums[i - k];
            currAns = (double)currSum / k;
            ans = max(ans, currAns);
        }
        return ans;
    }
};