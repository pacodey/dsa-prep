class Solution
{
public:
    void reverseString(vector <char> &s)
    {
        auto left = s.begin();
        auto right = --s.end();
        while (left <= right)
        {
            char c = *left;
            *left = *right;
            *right = c;
            left++;
            right--;
        }
    }
};