#include<iostream>
#include<vector>
using namespace std;

int main() {
    string input;
    string pattern;
    string indices;

    cout << "Enter string:" << endl;
    cin >> input;
    cout << "Enter pattern:" << endl;
    cin >> pattern;

    if (pattern.empty()) {
        cout << "Empty pattern" << endl;
        return 0;
    }

    if (indices.empty()) {
        cout << "Pattern not found" << endl;
        return 0;
    }

    cout << "Pattern found at indices: " << endl;
    for (int i = 0; i < input.size(); i++) {
        if (input.substr(i, pattern.size()) == pattern) {
            for (int j = 0; j < pattern.size(); j++) {
                indices += to_string(i+j) + "\t";
            }
            indices += "\n";
        }
    }

    cout << indices << endl;





}