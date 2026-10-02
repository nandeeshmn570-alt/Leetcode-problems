class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while (i < j) {
            if (!isVowel(tolower(s[i]))) {
                i++;
                continue;
            }
            if (!isVowel(tolower(s[j]))) {
                j--;
                continue;
            }
            swap(s[i++], s[j--]);
        }
        return s;
    }
};