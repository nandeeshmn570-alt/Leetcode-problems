class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        for (int num : nums) {
            if (num % 2 != 0) {
                nums1.push_back(num);
            } else {
                nums2.push_back(num);
            }
        }

        int idx = 0;
        for (int i = 0; i < nums2.size(); i++) {
            nums[idx++] = nums2[i];
        }

        for (int i = 0; i < nums1.size(); i++) {
            nums[idx++] = nums1[i];
        }
        return nums;
    }
};