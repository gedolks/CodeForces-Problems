#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cin >> m >> n;
    int numberOfDominos = 0;

    if ((m % 2) && (n % 2))
    {
        numberOfDominos = ((m * n) - 1) / 2;
    }
    else
    {
        numberOfDominos = (m * n) / 2;
    }
    cout<<numberOfDominos;

    return 0;
}
