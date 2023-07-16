#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {

    if (n <= 1) {
        return false;
    }

    for(int i = 2; i <= (int) sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Hello world!" << endl;

    for(int i = 0; i <= 5; i++) {
        cout << "Is " + to_string(i + 1) + " prime?" << endl;
        if (isPrime(i + 1) == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
