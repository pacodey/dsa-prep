class Solution
{
public:
    vector <vector <int>> generate(int numRows)
    {
        vector <vector <int>> v;
        // for (int i = 0; i < numRows + 1; i++)
        // {
        //     v[i][0] = 1;
        // }
        // for (int j = 0; j < numRows + 1; j++)
        // {
        //     v[0][j] = 1;
        // }
        for (int i = 0; i < numRows; i++)
        {
            vector <int> ones;
            for (int j = 0; j < numRows; j++)
            {
                ones.push_back(1);
            }
            v.push_back(ones);
        }
        for (int i = 1; i < numRows; i++)
        {
            for (int j = 1; j < numRows; j++)
            {
                if (i + j < numRows)
                {
                    v[i][j] = v[i-1][j] + v[i][j-1];
                }
            }
        }
        vector <vector <int>> ans;
        for (int i = 0; i < numRows; i++)
        {
            vector <int> temp;
            for (int j = i; j >= 0; j--)
            {
                temp.push_back(v[j][i - j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};