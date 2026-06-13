class Solution
{
public:
    string mapWordWeights(vector <string> &words, vector <int> &weights)
    {
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            int wordweight = 0;
            for (int j = 0; j < words[i].size(); j++)
            {
                wordweight += weights[words[i][j] - 'a'];
            }
            ans += -1*wordweight%26 + 'z';
        }
        return ans;
    }
};