class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        vector<int> ret;        
        
        for (int i = 0; i < nums1.size(); i++)
            map1[nums1[i]]++;
        
        for (int i = 0; i < nums2.size(); i++)
        {
            if (map1[nums2[i]] > 0)
                map2[nums2[i]]++;
        }
        
        for (auto it = map2.begin(); it != map2.end(); it++)
            ret.push_back(it->first);
        
        return ret;
        
    }
};