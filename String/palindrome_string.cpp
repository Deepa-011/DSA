#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            cout << "Not a Palindrome";
            return 0;
        }
        left++;
        right--;
    }

    cout << "Palindrome";

    return 0;
}
