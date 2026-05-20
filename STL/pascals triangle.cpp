/*
https://leetcode.com/problems/pascals-triangle/
*/

class Solution
{
public:
    vector <vector <int>> generate(int numRows)
    {
        vector <vector <int>> rows;
        for (int i = 0; i < numRows; i++)
        {
            int num = pow(11,i);
            vector <int> digits;
            while (num > 0)
            {
                int d = num % 10;
                digits.push_back(d);
                num = num/10;
            }
            rows.push_back(digits);
        }
        return rows;
    }
};
