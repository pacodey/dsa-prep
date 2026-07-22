bool isgood(int n)
{
    bool diff = false;
    while (n > 0)
    {
        if (n % 10 == 3 or n % 10 == 4 or n % 10 == 7)
        {
            return false;
        }

        if (n % 10 == 2 or n % 10 == 5 or n % 10 == 6 or n % 10 == 9)
        {
            diff = true;
        }
        n = n/10;
    }
    return diff;
}


class Solution
{
public:
    int rotatedDigits(int n)
    {
        int good = 0;
        for (int i = 1; i <= n; i++)
        {
            if (isgood(i))
            {
                good++;
            }
        }
        return good;
    }
};