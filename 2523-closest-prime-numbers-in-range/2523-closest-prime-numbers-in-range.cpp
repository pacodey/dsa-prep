bool isprime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

class Solution
{
public:
    vector <int> closestPrimes(int left, int right)
    {
        int prev = -1;
        int mindiff = INT_MAX;
        vector <int> ans = {-1, -1};

        for (int i = left; i <= right; i++)
        {
            if (isprime(i))
            {
                if (prev != -1)
                {
                    int diff = i - prev;
                    if (diff < mindiff)
                    {
                        mindiff = diff;
                        ans = {prev, i};
                    }
                    if (mindiff <= 2)
                    {
                        return ans;
                    }
                }
                prev = i;
            }
        }
        return ans;
    }
};