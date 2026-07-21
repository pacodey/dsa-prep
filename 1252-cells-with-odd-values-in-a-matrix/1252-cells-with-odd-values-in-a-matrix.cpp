class Solution
{
public:
    int oddCells(int m, int n, vector <vector <int>> &indices)
    {
        vector <int> rowCounts(m, 0);
        vector <int> colCounts(n, 0);

        for (const auto &idx : indices)
        {
            rowCounts[idx[0]]++;
            colCounts[idx[1]]++;
        }

        int oddRows = 0;
        for (int r : rowCounts)
        {
            if (r % 2 != 0)
            {
                oddRows++;
            }
        }

        int oddCols = 0;
        for (int c : colCounts)
        {
            if (c % 2 != 0)
            {
                oddCols++;
            }
        }

        int evenRows = m - oddRows;
        int evenCols = n - oddCols;

        return (oddRows * evenCols) + (evenRows * oddCols);
    }
};