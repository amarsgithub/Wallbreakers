class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        unordered_map<char, int> jewels;
        int ret = 0;
        for (int i = 0; i < J.length(); i++)
            jewels[J[i]]++;

        for (int i = 0; i < S.length(); i++)
            if (jewels[S[i]] > 0)
                ret++;

        return ret;
    }
};