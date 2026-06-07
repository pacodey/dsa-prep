class Solution
{
public:
    int trailingZeroes(int n)
    {
        int sum = 0;
        int i = 1;
        while (n/pow(5, i) > 0)
        {
            sum += (int)(n/pow(5, i));
            i++;
        }
        return sum;
    }
};