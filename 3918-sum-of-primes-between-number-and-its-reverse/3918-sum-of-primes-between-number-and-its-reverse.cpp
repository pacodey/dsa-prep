bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n < 4)
    {
        return true;
    }
    if (n % 2 == 0 or n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

class Solution
{
public:
    int sumOfPrimesInRange(int n)
    {
        int r = 0;
        int t = n;
        while (t > 0)
        {
            r = 10*r + (t % 10);
            t = t/10;
        }
        
        for (int i = min(n, r); i <= max(n, r); i++)
        {
            if (isprime(i))
            {
                t += i;
            }
        }
        return t;
    }
};