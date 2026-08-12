#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int frequency[256] = {0};

    for (char ch : str)
        frequency[(unsigned char)ch]++;

    for (char ch : str) {
        if (frequency[(unsigned char)ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character";

    return 0;
}
