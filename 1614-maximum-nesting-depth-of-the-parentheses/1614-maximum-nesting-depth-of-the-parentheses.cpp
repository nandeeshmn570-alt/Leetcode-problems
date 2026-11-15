class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int current = 0;
        for (char ch : s) {
            if (ch == '(') {
                current++;
                maxi = max(maxi, current);
            } else if (ch == ')') {
                current--;
            }
        }

        return maxi;
    }
};