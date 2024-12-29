class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int rowCount = grid.size();
        int colCount = grid[0].size();
        int zeroCount = 0; // Count of non-obstacle squares
      
        // Counting the number of zero squares in the grid
        for (auto& row : grid) {
            for (auto& cell : row) {
                zeroCount += cell == 0;
            }
        }
      
        // Directions array for the DFS moves (up, right, down, left)
        int directions[5] = {-1, 0, 1, 0, -1};
        // Visited matrix to mark visited cells during DFS
        bool visited[rowCount][colCount];
        memset(visited, false, sizeof visited);
      
        // DFS function to search for unique paths
        function<int(int, int, int)> depthFirstSearch = [&](int row, int col, int pathCount) -> int {
            // Reaching the endpoint (grid value 2) with all zeros covered
            if (grid[row][col] == 2) {
                return pathCount == zeroCount + 1 ? 1 : 0;
            }
            int pathCountTotal = 0;
          
            // Explore all possible directions from the current cell
            for (int i = 0; i < 4; ++i) {
                int nextRow = row + directions[i], nextCol = col + directions[i + 1];
              
                // Check if the next move is within the grid bounds, not visited and not an obstacle
                if (nextRow >= 0 && nextRow < rowCount && nextCol >= 0 && nextCol < colCount 
                    && !visited[nextRow][nextCol] && grid[nextRow][nextCol] != -1) {
                    visited[nextRow][nextCol] = true;
                    pathCountTotal += depthFirstSearch(nextRow, nextCol, pathCount + 1);
                    visited[nextRow][nextCol] = false; // Backtrack
                }
            }
          
            return pathCountTotal;
        };
      
        // Find the starting cell (grid value 1) and initiate DFS from there
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < colCount; ++col) {
                if (grid[row][col] == 1) {
                    visited[row][col] = true;
                    return depthFirstSearch(row, col, 0);
                }
            }
        }
      
        return 0; // No starting point found, return 0 paths
    }
};