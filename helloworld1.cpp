#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << "i just wanna make something out of this anyway" << endl;
    cout << "so let's get started" << endl;
    cout << "i'm planning to make an app using C++" << endl;
    cout << "but well you know it's very complex" << endl;
    cout << "i have downloaded Visual Studio for app development" << endl;
    cout << "yet there are so many things i have to learn" << endl;
    cout << "You did it bestieeeeeee";
    cout << "ok what the heck is this" << "\n";
    cout << "well, hello so this is an unnecessary stuff i have ever done lol" << endl;
    // just to make sure everything is worked out here 
    for (char i='A'; i <= 'Z'; i++){
        cout << i << "\n";
    }

    int x, y;

    cout << "Enter any positive integer for x: " << endl;
    cin >> x;
    cout << "insert the y value:" << endl;
    cin >> y;
    if (x == y) {
        cout << "1"; 
    }
    else if (x > y) {
        cout << "2";
    }
    else {
        cout << "3";
    }
    return 0;
}