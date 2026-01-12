#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
