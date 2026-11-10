class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);
        stack<int> s;
        for (int i = n - 1; i >= 0; i--) {
            while (s.size() > 0 && temperatures[s.top()] <= temperatures[i]) {
                s.pop();
            }
            if (!s.empty()) {
                answer[i] = s.top() - i;
            }
            s.push(i);
        }
        return answer;
    }
};