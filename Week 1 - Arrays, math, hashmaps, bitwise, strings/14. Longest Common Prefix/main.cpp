class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int ret = 0; 
        string s;
        
        if (!strs.size() )
            return "";
        else if (strs.size() == 1)
            return strs[0];
        
        for (int i = 0; i < strs[0].length(); i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[0][i] != strs[j][i])
                {
                    return s;
                }
            }
            s += strs[0][i];
        }
        
        return s;
    }
};