bool isprime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

class Solution
{
public:
    int maximumPrimeDifference(vector <int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            if (isprime(nums[left]) and isprime(nums[right]))
            {
                return right - left;
            }
            else if (isprime(nums[left]) == 0 and isprime(nums[right]) == 1)
            {
                left++;
            }
            else if (isprime(nums[left]) == 1 and isprime(nums[right]) == 0)
            {
                right--;
            }
            else
            {
                right--;
                left++;
            }
        }
        return 0;
    }
};