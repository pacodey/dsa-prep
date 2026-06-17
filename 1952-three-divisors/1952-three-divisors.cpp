class Solution
{
public:
    bool isThree(int n)
    {
        unordered_set <int> div;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                div.insert(i);
                div.insert(n/i);
            }
        }
        if (div.size() == 3)
        {
            return true;
        }
        return false;
    }
};