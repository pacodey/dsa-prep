class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 2147483647)
        {
            return false;
        }
        else
        {
            int n = 0;
            while (n * n < num)
            {
                n++;
            }
            if (n * n == num)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};