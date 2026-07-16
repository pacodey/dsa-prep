class Solution
{
public:
    bool hasGroupsSizeX(vector <int> &deck)
    {
        unordered_map <int, int> freq;
        for (int i = 0; i < deck.size(); i++)
        {
            freq[deck[i]]++;
        }
        int f = freq.begin()->second;
        for (auto p : freq)
        {
            f = gcd(f, p.second);
        }
        return (f != 1);
    }
};