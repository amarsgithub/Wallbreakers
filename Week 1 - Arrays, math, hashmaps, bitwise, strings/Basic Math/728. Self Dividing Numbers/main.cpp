class Solution {
public:
    bool isSelfDividing(int i)
    {
        int input = i;
        while (input) {
            int div = input % 10;
            
            if (!div) return false;
            
            if (i % div != 0)
                return false;
            
            input /= 10;
        }
        return true;    
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
            
        for (int i = left; i <= right; i++)
            if (isSelfDividing(i))
                ret.push_back(i);
        
        return ret;
        
    }
};