class Solution
{
public:
    void setZeroes(vector <vector <int>> &matrix)
    {
        set <int> rowz;
        set <int> colz;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    rowz.insert(i);
                    colz.insert(j);
                }
            }
        }
        for (auto r : rowz)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[r][j] = 0;
            }
        }
        for (auto c : colz)
        {
            for (int j = 0; j < matrix.size(); j++)
            {
                matrix[j][c] = 0;
            }
        }
    }
};