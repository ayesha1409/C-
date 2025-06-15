#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence, word;
    getline(cin, sentence);
    stringstream ss(sentence);
    int maxLen = 0;
    while (ss >> word)
        if (word.length() > maxLen)
            maxLen = word.length();
    cout << "Length of longest word: " << maxLen;
    return 0;
} 