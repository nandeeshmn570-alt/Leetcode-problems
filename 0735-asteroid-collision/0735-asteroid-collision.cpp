class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asters) {
        stack<int> s;
        for (int i = 0; i < asters.size(); i++) {

            if (!s.empty() && s.top() > 0 && asters[i] < 0) {
                int compare = asters[i];
                while (true) {
                    if (s.empty() || s.top() < 0) {
                        s.push(compare);
                        break;
                    }
                    if (abs(compare) > abs(s.top())) {
                        s.pop();
                    } else if (abs(compare) < abs(s.top())) {

                        break;
                    } else if (abs(compare) == abs(s.top())) {
                        s.pop();
                        break;
                    }
                }
            } else {
                s.push(asters[i]);
            }
        }

        vector<int> ans;
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};