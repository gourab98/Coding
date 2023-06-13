class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int ans = 0;
        int n = grid.size();
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                bool equal = true;
                for (int i = 0; i < n; i++)
                {
                    if (grid[r][i] != grid[i][c])
                    {
                        equal = false;
                        break;
                    }
                }
                if (equal == true)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};