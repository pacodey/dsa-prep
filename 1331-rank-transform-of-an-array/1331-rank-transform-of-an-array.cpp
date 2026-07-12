class Solution
{
public:
    vector <int> arrayRankTransform(vector <int> &arr)
    {
        vector <int> sortedarr = arr;
        sort(sortedarr.begin(), sortedarr.end());
        
        unordered_map <int, int> ranks;
        int current = 1;
        
        for (int num : sortedarr)
        {
            if (ranks.find(num) == ranks.end())
            {
                ranks[num] = current;
                current++;
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = ranks[arr[i]];
        }
        return arr;
    }
};