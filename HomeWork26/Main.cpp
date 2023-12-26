#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main() {
    vector<std::string> words = { "leet", "code", "abc", "bcd", "aaaa", "cbc" };
    char x = 'a';

    vector<int> indices;

    for (int i = 0; i < words.size(); i++) {
        string::iterator it = find(words[i].begin(), words[i].end(), x);
        if (it != words[i].end()) {
            indices.push_back(i);
        }
    }
    cout << "Exite: [";
    for (size_t i = 0; i < indices.size(); i++)
    {
        if (i + 1 == indices.size()) {
            cout << indices[i] << "]";
        }
        else {
            cout << indices[i] << ", ";
        }
    }
}