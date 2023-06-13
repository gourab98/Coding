class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int ans = 0;
        int n = grid.size();
        map<vector<int>, int> mp;
        for (int r = 0; r < n; r++)
        {
            mp[grid[r]]++;
        }
        for (int c = 0; c < n; c++)
        {
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                temp.push_back(grid[i][c]);
            }
            ans += mp[temp];
        }

        return ans;
    }
};