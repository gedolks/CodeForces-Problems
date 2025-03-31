#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;

    cin >> x;

    int steps = x / 5 + (x % 5 != 0);

    cout<<steps;

    return 0;
}
