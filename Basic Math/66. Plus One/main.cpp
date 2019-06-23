#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        if (!digits.size())
            return vector<int>(1,1);
        
        // Deals with the case that I can just add a value towards the end
        if (digits[digits.size()-1] < 9)
        {
            digits[digits.size()-1] = digits[digits.size()-1] + 1;
            return digits; 
        }
        
        reverse(digits.begin(), digits.end());
        
        int remainder = 0;
        
        // Deals with the case where I'm going to have to carry over a remainder 
        for (int i = 0; i < digits.size(); i++)
        {
            int newRemainder = (digits[i] + remainder + 1) % 10;        
            digits[i] = (digits[i] + remainder + 1) % 10;
            remainder = newRemainder; 
        }
        
        if (remainder)
            digits.push_back(remainder);
        
        reverse(digits.begin(), digits.end());
        
        return digits;
    }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

string integerVectorToString(vector<int> list, int length = -1) {
    if (length == -1) {
        length = list.size();
    }

    if (length == 0) {
        return "[]";
    }

    string result;
    for(int index = 0; index < length; index++) {
        int number = list[index];
        result += to_string(number) + ", ";
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> digits = stringToIntegerVector(line);
        
        vector<int> ret = Solution().plusOne(digits);

        string out = integerVectorToString(ret);
        cout << out << endl;
    }
    return 0;
}