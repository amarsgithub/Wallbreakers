class Solution {
public:
    int hammingDistance(int x, int y) {
        int ret = 0;
        for (int i = 0; i < 31; i++)
        {
            if ((x & 1) != (y & 1))
                ret++;
            x >>= 1;
            y >>= 1;
        }
        
        return ret;
    }
};