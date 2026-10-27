class Solution {
public:
    int findMin(vector<int>& nums) {
        int Min = INT_MAX;
        for(int i=0;i<nums.size();i++){
               Min = min(Min,nums[i]);
        }
        return Min;
    }
};