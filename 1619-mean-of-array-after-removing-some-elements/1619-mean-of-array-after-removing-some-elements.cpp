class Solution
{
public:
    double trimMean(vector <int> &arr)
    {
        sort(arr.begin(), arr.end());
        double sum = 0;
        for (int i = arr.size()/20; i < 19*arr.size()/20; i++)
        {
            sum += arr[i];
        }
        return sum/(9*arr.size()/10);
    }
};