class Solution
{
public:
    int trailingZeroes(int n)
    {
        int sum = 0;
        int div = 5;
        while (n/div > 0)
        {
            sum += n/div;
            div *= 5;
        }
        return sum;
    }
};