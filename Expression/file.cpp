#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;

    int result = max({
        a + b + c,
        a + b * c,
        a * b + c,
        a * b * c,
        (a + b) * c,
        a * (b + c)
    });

    cout << result << endl;

    return 0;
}
