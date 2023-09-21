#include <bits/stdc++.h>


using namespace std;

void fun(uint64_t n) {
    while (n != 1) {

        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n *= 3;
            n++;
        }

        cout << " " << n;
    }
}

int main() {

    uint64_t n;
    cin >> n;

    cout << " " << n;
    fun(n);

    return 0;
}