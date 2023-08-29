class Solution
{
    // speed=O(N^2)
    // space=O(1)   only ans is stored
public:
    vector<int> row(int n)
    {
        vector<int> ans;
        int a = 1;
        ans.push_back(1);
        for (int i = 1; i < n; i++)
        {
            a *= n - i;
            a /= i;
            ans.push_back(a);
        }
        return ans;
    }

    vector<vector<int>> generate(int N)
    {
        vector<vector<int>> ans;
        for (int i = 1; i <= N; i++)
            ans.push_back(row(i));

        return ans;
    }//changes 2
};