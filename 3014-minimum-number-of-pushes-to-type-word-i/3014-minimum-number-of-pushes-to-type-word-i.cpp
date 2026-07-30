class Solution
{
public:
    int minimumPushes(string word)
    {
        int n = word.size();
        int k = n / 8;
        int rem = n % 8;
        return 4 * k * (k + 1) + (k + 1) * rem;
    }
};