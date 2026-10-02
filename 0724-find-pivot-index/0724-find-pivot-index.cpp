class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> Psum(n, 0);
        vector<int> Ssum(n, 0);
        Psum[0] = 0;
        Ssum[n - 1] = 0;
        for (int i = 1; i < n; i++) {
            Psum[i] = Psum[i - 1] + nums[i - 1];
            int j = n - i - 1;
            Ssum[j] = Ssum[j + 1] + nums[j + 1];
        }

        for (int i = 0; i < n; i++) {
            if (Psum[i] == Ssum[i]) {
                return i;
            }
        }
        return -1;
    }
};