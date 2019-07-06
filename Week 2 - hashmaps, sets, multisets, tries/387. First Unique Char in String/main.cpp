class Solution
{
public:
    int firstUniqChar(string s)
    {

        vector<int> vec(26, 0);

        for (int i = 0; i < s.length(); i++)
            vec[s[i] - 'a']++; // Kind of like a hashmap, storing the frequencies of each value

        for (int i = 0; i < s.length(); i++)
            if (vec[s[i] - 'a'] == 1) // If the character only occurs once, then just return that character
                return i;

        return -1;
    }
};