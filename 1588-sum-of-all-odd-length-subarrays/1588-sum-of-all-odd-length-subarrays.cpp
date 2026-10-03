class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        vector<int> c;
        for (int st = 0; st < n; st++) {
            for (int end = st; end < n; end++) {
                c.push_back(arr[end]);
                if (c.size() % 2 != 0) {
                    for (int num : c) {
                        sum += num;
                    }
                }
            }
            c.clear();
        }
        return sum;
    }
};