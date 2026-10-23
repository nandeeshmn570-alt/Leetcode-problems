class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_set<int> numbers(nums.begin(), nums.end());
        for (int num : numbers) {
            pq.push(num);
            if (pq.size() > 3) {
                pq.pop();
            }
        }

        if (pq.size() == 3)
            return pq.top();
        while (pq.size() > 1) {
            pq.pop();
        }
        return pq.top();
    }
};