class Solution
{
private:
    bool isPrime(long long x)
    {
        if (x < 2) return false;
        if (x == 2 || x == 3) return true;
        if (x % 2 == 0 || x % 3 == 0) return false;
        
        for (long long i = 5; i * i <= x; i += 6)
        {
            if (x % i == 0 || x % (i + 2) == 0) return false;
        }
        return true;
    }

public:
    bool completePrime(int num)
    {
        string s = to_string(num);
        int len = s.length();

        long long prefix = 0;
        for (int i = 0; i < len; i++)
        {
            prefix = prefix * 10 + (s[i] - '0');
            if (!isPrime(prefix)) return false;
        }

        long long suffix = 0;
        long long place = 1;
        for (int i = len - 1; i >= 0; i--)
        {
            suffix = (s[i] - '0') * place + suffix;
            place *= 10;
            if (!isPrime(suffix)) return false;
        }
        return true;
    }
};