class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        else
        {
            vector <int> num;
            while (x > 0)
            {
                int digit = x % 10;
                num.push_back(digit);
                x = x/10;
            }
            bool pal = true;
            for (int i = 0; i < num.size()/2; i++)
            {
                if (num[i] != num[num.size() - i - 1])
                {
                    pal = false;
                }
            }
            return pal;
        }
    }
};