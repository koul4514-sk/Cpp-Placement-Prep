#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int flag = 1; 

    if (n <= 1) {
        flag = 0;
    }
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0;   // not prime
                break;
            }
        }
    }

    if (flag == 1)
        cout << "prime";
    else
        cout << "not prime";

    return 0;
}
