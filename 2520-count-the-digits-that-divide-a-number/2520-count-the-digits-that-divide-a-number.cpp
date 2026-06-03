class Solution
{
public:
    int countDigits(int num)
    {
        int a = 0;
        int n = num;
        while (n > 0)
        {
            int d = n % 10;
            if (num % d == 0)
            {
                a++;
            }
            n /= 10;
        }
        return a;
    }
};