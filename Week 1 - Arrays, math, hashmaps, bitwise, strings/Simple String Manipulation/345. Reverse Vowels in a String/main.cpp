class Solution {
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int lo = 0;
        int hi = s.length() - 1;
        
        if (!s.length() || s.length() == 1)
            return s;
        
        while (lo < hi)
        {
            if (isVowel(tolower(s[lo])) && isVowel(tolower(s[hi])))
                swap(s[lo++], s[hi--]);
            else
            {
                if (!(isVowel(tolower(s[lo]))))
                    lo++;
                if (!(isVowel(tolower(s[hi]))))
                    hi--;
            }
        }
        return s;
    }
};