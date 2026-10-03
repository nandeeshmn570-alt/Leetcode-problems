class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
        vector<string> c;
        for (int i = 0; i < s.length(); i++) {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            c.push_back(word);
        }

        if (pattern.size() != c.size())
            return false;

        for (int i = 0; i < pattern.length(); i++) {
            if (m1.find(pattern[i]) == m1.end() && m2.find(c[i]) == m2.end()) {
                m1[pattern[i]] = c[i];
                m2[c[i]] = pattern[i];
            } else {
                if (m1[pattern[i]] != c[i] || m2[c[i]] != pattern[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};