class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> m;
        for (int num : nums) {
            m[num]++;
        }
        vector<int> ans;
        vector<int> curr;

        while (n > 0) {
            for (auto it : m) {
                if (it.second > 0) {
                    curr.push_back(it.first);
                    m[it.first]--;
                    n--;
                }
            }
            sort(curr.begin(), curr.end());
            for (int val : curr) {
                ans.push_back(val);
            }
            curr.clear();
        }
        return ans;
    }
};