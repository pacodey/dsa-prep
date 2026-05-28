class Solution
{
public:
    vector <int> selfDividingNumbers(int left, int right)
    {
        vector <int> v;
        for (int num = left; num <= right; num++)
        {
            v.push_back(num);
            int temp = num;
            while (temp > 0)
            {
                int d = temp % 10;
                if (d == 0)
                {
                    v.erase(--v.end());
                    break;
                }
                else if (num % d != 0)
                {
                    v.erase(--v.end());
                    break;
                }
                temp /= 10;
            }
        }
        return v;
    }
};