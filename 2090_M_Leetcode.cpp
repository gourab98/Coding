class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {

        int n = nums.size() - 1;
        vector<int> vec;
        vector<long long int> num(n + 1, 0);
        long long int all = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            all += nums[i];
            num[i] = all;
        }

        for (int i = 0; i <= n; i++)
        {
            if (i < k || (n - i < k))
            {
                vec.push_back(-1);
            }
            else
            {
                int p = i - k;
                int l = 2 * k + 1;
                if (i - k - 1 < 0)
                    vec.push_back(num[p + l - 1] / (2 * k + 1));
                else
                    vec.push_back((num[p + l - 1] - num[i - k - 1]) / (2 * k + 1));
            }
        }
        return vec;
    }
};