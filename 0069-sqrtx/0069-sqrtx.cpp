class Solution {
public:
    int mySqrt(int x)
    {
        unsigned int a = 0;
        while (a*a < x)
        {
            a++;
        }
        if (a*a > x)
        {
            return a - 1;
        }
        else
        {
            return a;
        }
    }
};