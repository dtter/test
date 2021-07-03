#include <iostream>
using namespace std;

int main() {
    int n, f, d;
    cout << "enter value of celcius:";
    cin >> n;

    d = (float) 9/5 * n;
    f = d + 32;
    cout << n << " in Farenheit is " << f;
}