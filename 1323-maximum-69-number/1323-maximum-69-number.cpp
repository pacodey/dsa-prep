class Solution
{
public:
    int maximum69Number (int num)
    {
        int temp = num;
        int placeval = 1;
        int six = -1;
        
        while (temp > 0)
        {
            int d = temp % 10;
            if (d == 6)
            {
                six = placeval;
            }
            placeval *= 10;
            temp /= 10;
        }
        if (six != -1)
        {
            num += 3 * six;
        }
        return num;
    }
};