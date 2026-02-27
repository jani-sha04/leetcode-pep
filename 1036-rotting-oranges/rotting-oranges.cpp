class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, int r, int c, int time) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        if (r < 0 || c < 0 || r >= n || c >= m)
            return 0;
        
        if (grid[r][c] == 0 || (grid[r][c] > 1 && grid[r][c] < time))
            return 0;
        
        grid[r][c] = time;
        
        dfs(grid, r + 1, c, time + 1);
        dfs(grid, r - 1, c, time + 1);
        dfs(grid, r, c + 1, time + 1);
        dfs(grid, r, c - 1, time + 1);
        
        return 0;
    }
    
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    dfs(grid, i, j, 2);
                }
            }
        }
        
        int ans = 2;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1)
                    return -1;
                ans = max(ans, grid[i][j]);
            }
        }
        
        return ans - 2;
    }
};