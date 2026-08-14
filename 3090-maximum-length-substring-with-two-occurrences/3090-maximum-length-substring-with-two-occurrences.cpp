class Solution
{
public:
    int maximumLengthSubstring(string s)
    {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        vector <int> v(26);

        while (right < s.size())
        {
            v[s[right] - 'a']++;
            while (v[s[right] - 'a'] > 2)
            {
                v[s[left] - 'a']--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
};