class Solution {
public:
    bool detectCapitalUse(string word) {
        if (!word.length() || word.length() == 1)
            return true; 
        
        int i = 0; 
        
        // Case 1: All letters capital: 
        if (word[0] >= 'A' && word[0] <= 'Z' && word[1] >= 'A' && word[1] <= 'Z')
        {
            while (i < word.length())
            {
                if (!(word[i] >= 'A' && word[i] <= 'Z'))
                    return false;
                i++;
            }
        }
        
        // Case 2: All letters lowercase: 
        else if (word[0] >= 'a' && word[0] <= 'z')
        {
            while (i < word.length())
            {
                if (!(word[i] >= 'a' && word[i] <= 'z'))
                    return false;
                i++;
            }
        }
        
        // Case 3: Only first letter capital 
        else if (word[0] >= 'A' && word[0] <= 'Z' && word[1] >= 'a' && word[1] <= 'z')
        {
            i++;
            while (i < word.length())
            {
                if (!(word[i] >= 'a' && word[i] <= 'z'))
                    return false;
                i++;
            }
        }
        
        return true;
    }
};