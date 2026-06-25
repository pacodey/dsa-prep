class Solution
{
public:
    string longestCommonPrefix(vector <string> &strs)
    {
        string same = "";
        for (int i = 0; i < strs[0].size(); i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (i >= strs[j].size() or strs[j][i] != strs[0][i])
                {
                    return same;
                }
            }
            same += strs[0][i];
        }
        return same;
    }
};