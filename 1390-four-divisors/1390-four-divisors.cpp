int divs(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                count += 1;
            }
            else
            {
                count += 2;
            }
            
            if (count > 4) 
            {
                return count; 
            }
        }
    }
    return count;
}

int divsum(int n)
{
    int sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i + n / i;
        }
    }
    return sum;
}


class Solution
{
public:
    int sumFourDivisors(vector <int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (divs(nums[i]) == 4)
            {
                sum += divsum(nums[i]);
            }
        }
        return sum;
    }
};