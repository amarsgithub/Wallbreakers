class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> m;
        vector<string> ret;
        istringstream one(A);
        istringstream two(B);
        string temp;
        
        while (getline(one, temp, ' '))
            m[temp]++;
        while (getline(two, temp, ' '))
            m[temp]++;
        
        for (auto it = m.begin(); it != m.end(); it++)
            if (it->second == 1)
                ret.push_back(it->first);
        
        return ret;
        
    }
};