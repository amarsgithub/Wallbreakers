class Solution
{
public:
    int firstUniqChar(string s)
    {

        if (s.length() == 0)
            return -1;
        if (s.length() == 1)
            return 0;

        for (int i = 0; i < s.length(); i++)
        {
            bool isRepeated = false;
            for (int j = 0; j < s.length(); j++)
            {
                if (i != j && s[i] == s[j])
                {
                    isRepeated = true;
                    break;
                }
            }
            if (!isRepeated)
                return i;
        }
        return -1;
    }
};