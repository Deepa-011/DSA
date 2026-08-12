#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    bool visited[256] = {false};

    cout << "String after removing duplicates: ";

    for (char ch : str) {
        if (!visited[(unsigned char)ch]) {
            cout << ch;
            visited[(unsigned char)ch] = true;
        }
    }

    return 0;
}
