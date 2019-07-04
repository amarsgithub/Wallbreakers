class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int res = target - nums[i];
            auto it = map.find(res);
            if(it != map.end()) return vector<int>{it->second, i};
            map[nums[i]] = i;
        }
        
        return vector<int>();
        
    }
};