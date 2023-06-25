class Solution
{
public:
    int n;
    int t[101][201];
    const int MOD = 1e9 + 7;
    int solve(vector<int> &locations, int currentidx, int dest, int fuel)
    {
        if (fuel < 0)
            return 0;

        if (t[currentidx][fuel] != -1)
        {
            return t[currentidx][fuel];
        }

        int ans = 0;

        if (currentidx == dest)
            ans++;

        for (int j = 0; j < n; j++)
        {
            if (currentidx != j)
            {
                int remfuel = fuel - abs(locations[currentidx] - locations[j]);
                ans = (ans + solve(locations, j, dest, remfuel)) % MOD;
            }
        }
        return t[currentidx][fuel] = ans;
    }
    int countRoutes(vector<int> &locations, int start, int finish, int fuel)
    {
        n = locations.size();
        memset(t, -1, sizeof(t));
        return solve(locations, start, finish, fuel);
    }
};