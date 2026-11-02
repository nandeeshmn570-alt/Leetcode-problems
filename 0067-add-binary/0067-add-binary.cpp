class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int digit1 = 0, digit2 = 0;
            if (i >= 0) {
                digit1 = a[i] - '0';
            }

            if (j >= 0) {
                digit2 = b[j] - '0';
            }

            int num = digit1 + digit2 + carry;
            ans += to_string(num % 2);
            carry = num / 2;
            i--;
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};