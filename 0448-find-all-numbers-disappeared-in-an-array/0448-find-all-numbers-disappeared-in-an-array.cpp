class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_set<int> m;
        for(int num : nums){
            m.insert(num);
        }
        for (int i = 1; i <= n; i++) {
            if (m.find(i) == m.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};