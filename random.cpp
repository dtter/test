#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "insert the value of x: ";
    cin >> x;
    
    if (x == 70){
        cout << "not 70 bestie. next \n";
        cin >> y;
        
        if (y >= 2) {
            cout << "ok better";
        }
        else {
            cout << "try later, ok?";
        }
    }
    else {
        cout << x << " is great i guess";
    }
    
    return 0;
}