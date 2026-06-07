class Solution
{
public:
    int trailingZeroes(int n)
    {
        if (n < 5)
        {
            return 0;
        }
        int sum = 0;
        int i = 1;
        while ((int)(n/pow(5, i)) > 0)
        {
            sum += (int)(n/pow(5, i));
            i++;
        }
        return sum;
    }
};