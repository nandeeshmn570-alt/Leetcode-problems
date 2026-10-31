class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.rbegin(), p.rend());
        sort(t.rbegin(), t.rend());
        int i = 0, j = 0;
        int count = 0;
        while (i < p.size() && j < t.size()) {
            if (t[j] >= p[i]) {
                count++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return count;
        
    }
};