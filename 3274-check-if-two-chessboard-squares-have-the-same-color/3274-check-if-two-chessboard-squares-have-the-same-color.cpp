class Solution {
public:
    string checkColor(string coordinates) {
        char ch = coordinates[0];
        int num = coordinates[1] - '0';

        if (ch == 'a' || ch == 'c' || ch == 'e' || ch == 'g') {
            if (num % 2 == 0) {
                return "white";
            } else {
                return "black";
            }
        } else {
            if (num % 2 != 0) {
                return "white";
            } else {
                return "black";
            }
        }
    }

        bool checkTwoChessboards(string coordinate1, string coordinate2) {
            string ans1 = checkColor(coordinate1);
            string ans2 = checkColor(coordinate2);
            return ans1 == ans2;
        }
    };