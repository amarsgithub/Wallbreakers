#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{

    if (s.size() == 0) 
        return true;

    unordered_map<char, char> sMap;
    unordered_map<char, char> tMap;

    sMap.insert(make_pair(s[0], t[0]));
    sMap.insert(make_pair(t[0], s[0]));

    for (int i = 1; i < s.length(); i++) 
    {
        if (sMap.find(s[i]) != sMap.end())
            if (sMap.at(s[i]) != t[i])
                return false;

        if (tMap.find(t[i]) != tMap.end())
            if (tMap.at(t[i]) != s[i])
                return false;

        sMap.insert(make_pair(s[i], t[i]));
        sMap.insert(make_pair(t[i], s[i]));
    }
    return true;

}

int main(void)
{
    cout << isIsomorphic("egt", "add") << endl;
    return 0;
}