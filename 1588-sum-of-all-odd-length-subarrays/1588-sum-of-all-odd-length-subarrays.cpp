class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for (int st = 0; st < n; st++) {
            int c = 0;
            for (int end = st; end < n; end++) {
                c += arr[end];
                int length = end - st + 1;
                if (length % 2 != 0) {
                    sum += c;
                }
            }
        }

        return sum;
    }
};