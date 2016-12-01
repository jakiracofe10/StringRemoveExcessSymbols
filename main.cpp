#include <iostream>

using namespace std;

//Time: O(n)
//Space: O(1)

string removeExcess(string s) {
    int spaceCount = -1;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ') {
            spaceCount++;
        } else {
            if (spaceCount > 0) {
                s.erase(i-spaceCount, spaceCount);
            }
            spaceCount = -1;
        }
    }
    return s;
}

int main() {
    string input = "Coding  at night   is fun  ";
    string result = removeExcess(input);
    cout << "Initial: " + input << endl;
    cout << "Result: " + result << endl;
    return 0;
}