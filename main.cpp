#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string> &strs) {

    auto length = strs.size();
    if (length < 1)
        return "";
    int eachSize = strs[0].size(), curStr = 0;
    string target = "";
    char lastC;
    for (int i = 0; i < eachSize; i++) {
        curStr = 0;
        lastC = strs[0][i];
        while (curStr < length) {
            if (strs[curStr][i] == lastC) {
                lastC = strs[curStr][i];
                eachSize = min(eachSize, (int) strs[curStr].size());
                curStr++;
            } else return target;
        }
        target += lastC;
    }
    return target;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<string> ss = {"flower", "flow", "light"};
    cout << longestCommonPrefix(ss) << endl;
    return 0;
}