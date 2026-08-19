class Solution
{
public:
    bool validDigit(int n, int x)
    {
        long long num = abs((long long)n);
        
        bool containsX = false;
        int firstDigit = 0;

        while (num > 0)
        {
            int digit = num % 10;
            if (digit == x)
            {
                containsX = true;
            }
            firstDigit = digit;
            num /= 10;
        }

        if (firstDigit == x)
        {
            return false;
        }
        return containsX;
    }
};