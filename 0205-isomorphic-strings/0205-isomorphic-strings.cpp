class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map <char, char> m;
        unordered_set <char> used;

        for (int i = 0; i < s.size(); i++)
        {
            if (m.find(s[i]) == m.end())
            {
                if (used.count(t[i]))
                {
                    return false;
                }
                m[s[i]] = t[i];
                used.insert(t[i]);
            }
            else if (m[s[i]] != t[i])
            {
                return false;
            }
        }
        return true;
    }
};