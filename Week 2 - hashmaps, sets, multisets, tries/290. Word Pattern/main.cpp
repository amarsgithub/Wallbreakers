class Solution
{
public:
    bool wordPattern(string pattern, string str)
    {
        unordered_map<char, string> map;
        unordered_map<string, char> map2;
        istringstream ss(str);
        istringstream ss2(str);
        string word;

        int count = 0;
        while (getline(ss2, word, ' '))
            count++;

        if (count != pattern.length())
            return false;

        int i = 0;
        while (getline(ss, word, ' '))
        {

            if (map.find(pattern[i]) != map.end())
            {
                if (map.at(pattern[i]) != word)
                {
                    return false;
                }
            }
            else if (map2.find(word) != map2.end())
            {
                if (map2.at(word) != pattern[i])
                {
                    return false;
                }
            }
            else
            {
                map.insert(make_pair(pattern[i], word));
                map2.insert(make_pair(word, pattern[i]));
            }
            i++;
        }
        return true;
    }
};