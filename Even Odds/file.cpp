#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if (k <= oddCount) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - oddCount) << endl;
    }

    return 0;

}
