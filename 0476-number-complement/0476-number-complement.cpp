class Solution
{
public:
    int findComplement(int num)
    {
        int digits = 1 + floor(log2(num));
        return num ^ (int)((pow(2, digits)) - 1);
    }
};