class Solution
{
public:
    int distributeCandies(vector<int> &candies)
    {
        unordered_map<int, int> freq;
        int ret = 0;

        for (int i = 0; i < candies.size(); i++)
            freq[candies[i]]++;

        return min(freq.size(), candies.size() / 2);
    }
};