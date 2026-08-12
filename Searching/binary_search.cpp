#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";

    return 0;
}
