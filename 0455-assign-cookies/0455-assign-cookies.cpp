class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());
        int i = 0, j = 0;
        int count = 0;
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;
                i++;
                j++;
            }
            else if ( i < g.size() && j < s.size() && g[i] > s[j]) {
                i++;
            }else if ( i < g.size() && j < s.size() && g[i] < s[j] ) {
                j++;
            }
        }
        return count;
    }
};