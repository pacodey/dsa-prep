class Solution
{
public:
    string convertToBase7(int num)
    {
        string s;
        if (num == 0)
        {
            return "0";
        }
        else if (num < 0)
        {
            int n = -1*num;
            while (n > 0)
            {
                int d = n % 7;
                s += (char)(d + '0');
                n /= 7;
            }
            s += '-';
            reverse(s.begin(), s.end());
            return s;
        }
        else
        {
            while (num > 0)
            {
                int d = num % 7;
                s += (char)(d + '0');
                num /= 7;
            }
            reverse(s.begin(), s.end());
            return s;
        }
    }
};