#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> input;
    vector<int> indices;
    int key;

    int n;

    cout << "Enter integers (type -1 to end):" << endl;
    cin >> n;
    while (n != -1) {
        input.push_back(n); //dynamically resizes array
        cin >> n;
    }

    cout << "Enter key to search for:" << endl;
    cin >> key;

    if (input.empty()) {
        cout << "Empty array" << endl;
        return 0;
    }

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == key) {
            indices.push_back(i);
        }
    }

    if (indices.empty()) {
        cout << "Key not found" << endl;
        return 0;
    }

    cout << "Indices of key: " << endl;
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << "\t";
    }


}