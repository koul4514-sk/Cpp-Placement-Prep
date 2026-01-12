#include <iostream>
using namespace std;

int main() {
    char store = 'A';

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << store << " ";
            store++;
        }
        cout << endl;
    }

    return 0;
}
