#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int vowels = 0;
    int consonants = 0;

    for (char ch : str) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants;

    return 0;
}
