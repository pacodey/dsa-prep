class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map <char, int> freq;

        for (int i = 0; i < text.size(); i++)
        {
            freq[text[i]]++;
        }

        if (freq.count('b') == 0 or freq.count('a') == 0 or freq.count('l') == 0 or freq.count('o') == 0 or freq.count('n') == 0)
        {
            return 0;
        }

        int balloons = 10000;
        for (auto p : freq)
        {
            switch (p.first)
            {
                case 'b':
                    if (balloons > p.second)
                    {
                        balloons = p.second;
                    }
                    break;
                case 'a':
                    if (balloons > p.second)
                    {
                        balloons = p.second;
                    }
                    break;
                case 'l':
                    if (balloons > p.second/2)
                    {
                        balloons = p.second/2;
                    }
                    break;
                case 'o':
                    if (balloons > p.second/2)
                    {
                        balloons = p.second/2;
                    }
                    break;
                case 'n':
                    if (balloons > p.second)
                    {
                        balloons = p.second;
                    }
                    break;
            }
        }
        return balloons;
    }
};