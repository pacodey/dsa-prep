class Solution
{
public:
    int calPoints(vector <string> &operations)
    {
        vector <int> rec;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+")
            {
                rec.push_back(rec[rec.size() - 1] + rec[rec.size() - 2]);
            }
            else if (operations[i] == "C")
            {
                rec.erase(--rec.end());
            }
            else if (operations[i] == "D")
            {
                rec.push_back(2*rec[rec.size() - 1]);
            }
            else
            {
                int num = 0;
                int sign = 1;
                int j = 0;
                if (operations[i][0] == '-')
                {
                    sign = -1;
                    j++;
                }
                while (j < operations[i].size())
                {
                    int digit = operations[i][j] - '0';
                    num = num * 10 + digit;
                    j++;
                }
                num *= sign;
                rec.push_back(num);
            }
        }
        int sum = 0;
        for (int v : rec)
        {
            sum += v;
        }
        return sum;
    }
};