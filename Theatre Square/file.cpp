#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long m, n, a;
    cin >> m >> n >> a;

    long long tiles_m = (m + a - 1) / a;
    long long tiles_n = (n + a - 1) / a;

    cout << tiles_m * tiles_n << endl;

    return 0;
}
