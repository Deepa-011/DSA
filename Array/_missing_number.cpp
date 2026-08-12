#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        actualSum += x;
    }

    cout << "Missing number: " << sum - actualSum;

    return 0;
}
