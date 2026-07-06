class Solution
{
public:
    int minSteps(int n)
    {
        // minSteps(1) = 0
        // for n != 1, prime factorise n, then take sum of base*exponent
        // eg for n = 24, 24 = 2^3 * 3^1. minSteps(24) = 2*3 + 3*1 = 9

        if (n == 1)
        {
            return 0;
        }
        
        int operations = 0;

        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                operations += i;
                n = n/i;
            }
        }

        if (n > 1)
        {
            operations += n;
        }

        return operations;
    }
};