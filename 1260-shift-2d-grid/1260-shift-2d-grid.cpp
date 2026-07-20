class Solution
{
public:
    vector <vector <int>> shiftGrid(vector< vector <int>> &grid, int k)
    {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;

        k = k % total;

        vector <vector <int>> ans(m, vector <int> (n));

        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                int old1DIndex = r * n + c;

                int new1DIndex = (old1DIndex + k) % total;

                int newRow = new1DIndex / n;
                int newCol = new1DIndex % n;

                ans[newRow][newCol] = grid[r][c];
            }
        }
        return ans;
    }
};