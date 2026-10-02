class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char ch = coordinates[0];
        int num = coordinates[1] - '0';

        if (ch == 'a' || ch == 'c' || ch == 'e' || ch == 'g') {
            return (num % 2 == 0) ? true : false;

        } else {
            return (num % 2 != 0) ? true : false;
        }
    }
    };