#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int tom = 0, jerry = 0;

    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        if ((i + 1) % 2 == 1)
            tom += b;
        else
            jerry += b;
    }

    if (tom > jerry)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

