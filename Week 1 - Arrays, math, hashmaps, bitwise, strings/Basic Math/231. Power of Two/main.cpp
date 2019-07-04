class Solution {
public:
    bool isPowerOfTwo(int n) {
        int lo = 0;
        int hi = 32;
        
        while (lo < hi)
        {
            int mid = lo + ((hi - lo)/2);
            long midVal = pow(2,mid);
            
            if (pow(2,lo) == n || pow(2,hi) == n || midVal == n)
                return true;
            
            if (midVal < n)
                lo = mid + 1;
            else 
                hi = mid - 1;
        }
        
        return false;
    }
};