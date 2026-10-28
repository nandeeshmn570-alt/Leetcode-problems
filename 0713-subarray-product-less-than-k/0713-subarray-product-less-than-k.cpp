class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (nums.size() == 1) {
            if (nums[0] < k) {
                return 1;
            } else {
                return 0;
            }
        }
        int count = 0;
        int left = 0;
        long long int product = 1;
        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            while (product >= k) {
                product = product / nums[left];
                left++;
            }
            if(product ==0){
                product=1;
            }
            if(right - left + 1 >=0){
                count += right - left + 1;
            }
            
        }
        return count;
    }
};