class Solution {
public:
    void move(vector<vector<char>>& grid, vector<int>& ans, const int& r,
              const int& c, int& m, int& n) {
        if (r < 0 || c < 0 || c >= n || r >= m || grid[r][c] == '0') {
            return;
        }

        if (grid[r][c] == 'L') {

            ans[0] = r;
            ans[1] = c;
            grid[r][c] = '0';
            return move(grid, ans, r, c - 1, m, n);
        }

        if (grid[r][c] == 'R') {

            ans[0] = r;
            ans[1] = c;
            grid[r][c] = '0';
            return move(grid, ans, r, c + 1, m, n);
        }
        if (grid[r][c] == 'U') {
            ans[0] = r;
            ans[1] = c;
            grid[r][c] = '0';
            return move(grid, ans, r - 1, c, m, n);
        }
        if (grid[r][c] == 'D') {
            ans[0] = r;
            ans[1] = c;
            grid[r][c] = '0';
            return move(grid, ans, r + 1, c, m, n);
        }
    }
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        vector<int> ans(2, 0);
        int m = grid.size();
        int n = grid[0].size();
        int r = 0;
        int c = 0;
        move(grid, ans, r, c, m, n);
        return ans;
    }
};