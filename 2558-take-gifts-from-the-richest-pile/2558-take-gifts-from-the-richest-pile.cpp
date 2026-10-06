class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        for (int num : gifts) {
            q.push(num);
        }
        while (k > 0) {
            int largestPile = q.top();
            q.pop();
            q.push(floor(sqrt(largestPile)));
            k--;
        }
        long long totalGifts = 0;
        while (!q.empty()) {
            totalGifts += q.top();
            q.pop();
        }
        return totalGifts;
    }
};