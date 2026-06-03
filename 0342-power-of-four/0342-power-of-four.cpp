class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        else
        {    
            if ((n & (n - 1)) == 0)
            {
                int zeros = 0;
                while ((n & 1) != 1)
                {
                    zeros++;
                    n /= 2;
                }
                if (zeros % 2 == 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
};