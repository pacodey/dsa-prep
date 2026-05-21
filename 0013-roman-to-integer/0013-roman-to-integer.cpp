class Solution
{
public:
    int romanToInt(string s)
    {
        int n = 0;
        string :: iterator c = s.begin();
        while (c != s.end())
        {
            switch((int)(*c))
            {
                case (int)'V':
                    n += 5;
                    c++;
                    break;
                case (int)'L':
                    n += 50;
                    c++;
                    break;
                case (int)'D':
                    n += 500;
                    c++;
                    break;
                case (int)'M':
                    n += 1000;
                    c++;
                    break;
                case (int)'I':
                    if (*(c+1) == 'V')
                    {
                        n += 4;
                        c += 2;
                        break;
                    }
                    else if (*(c+1) == 'X')
                    {
                        n += 9;
                        c += 2;
                        break;
                    }
                    else
                    {
                        n += 1;
                        c++;
                        break;
                    }
                case (int)'X':
                    if (*(c+1) == 'L')
                    {
                        n += 40;
                        c += 2;
                        break;
                    }
                    else if (*(c+1) == 'C')
                    {
                        n += 90;
                        c += 2;
                        break;
                    }
                    else
                    {
                        n += 10;
                        c++;
                        break;
                    }
                case (int)'C':
                    if (*(c+1) == 'D')
                    {
                        n += 400;
                        c += 2;
                        break;
                    }
                    else if (*(c+1) == 'M')
                    {
                        n += 900;
                        c += 2;
                        break;
                    }
                    else
                    {
                        n += 100;
                        c++;
                        break;
                    }
            }
        }
        return n;
    }
};