class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int lo = 0;
        int hi = A.size() - 1;
            
        while (lo < hi)
        {
            if (!(A[hi] & 1) && (A[lo] & 1))
                swap(A[lo++], A[hi--]);
            else if (A[lo] & 1) 
                hi--;
            else 
                lo++;
        }
            
        return A;
    }
};