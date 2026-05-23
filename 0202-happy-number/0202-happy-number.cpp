class Solution{
public:
    bool isHappy(int n)
    {
        while (n != 4 and n != 37 and n != 58 and n != 89 and n != 145 and n != 42 and n != 20 and n != 1)
        {
            int sum = 0;
            while (n > 0)
            {
                int d = n % 10;
                sum += d*d;
                n /= 10;
            }
            n = sum;
        }
        if (n == 4 or n == 37 or n == 58 or n == 89 or n == 145 or n == 42 or n == 20)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};