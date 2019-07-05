#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{

    int m1[128] = {0};
    int m2[128] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        if (m1[s[i]] != m2[t[i]])
            return false;
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
}

int main(void)
{
    cout << isIsomorphic("egt", "add") << endl;
    return 0;
}