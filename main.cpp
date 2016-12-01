#include <iostream>

using namespace std;

//Time: O(n)
//Space: O(1)

string removeExcess(string s) {
    //start at -1 to clarify erase call
    int spaceCount = -1;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ') {
            spaceCount++;
        } else {
            if (spaceCount > 0) {
                /*remove all indexes (spaces) after first space, erase length
                equal to number of spaces before next non space index*/
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