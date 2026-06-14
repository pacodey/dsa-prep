class Solution
{
public:
    bool uniqueOccurrences(vector <int> &arr)
    {
        unordered_map <int, int> freq;
        for (auto it : arr)
        {
            freq[it]++;
        }
        unordered_set <int> unifreq;
        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            if (unifreq.count((*it).second) > 0)
            {
                return false;
            }
            unifreq.insert((*it).second);
        }
        return true;
    }
};