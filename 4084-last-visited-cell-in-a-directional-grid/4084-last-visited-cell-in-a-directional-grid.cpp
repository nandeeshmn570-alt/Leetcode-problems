class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int r = 0, c = 0;

        while (true) {
            char direction = grid[r][c];
            grid[r][c] = '0';

            int nextR = r;
            int nextC = c;

            if (direction == 'L')
                nextC--;
            else if (direction == 'R')
                nextC++;
            else if (direction == 'U')
                nextR--;
            else if (direction == 'D')
                nextR++;

            if (nextR < 0 || nextR >= m || nextC < 0 || nextC >= n ||
                grid[nextR][nextC] == '0') {
                return {r, c};
            }

            r = nextR;
            c = nextC;
        }
    }
};