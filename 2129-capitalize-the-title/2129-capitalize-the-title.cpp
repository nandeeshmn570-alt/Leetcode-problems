class Solution {
public:
    string capitalizeTitle(string title) {
        string ans = "";
        int i = 0;

        for (int i = 0; i < title.length(); i++) {
            string s = "";

            while (i < title.size() && title[i] != ' ') {
                s += title[i];
                i++;
            }

            for (int j = 0; j < s.size(); j++) {
                s[j] = tolower(s[j]);
            }

            if (s.size() >= 3) {
                s[0] = toupper(s[0]);
            }

            if (ans.size() > 0) {
                ans += ' ' + s;
            } else {
                ans += s;
            }
        }

        return ans;
    }
};