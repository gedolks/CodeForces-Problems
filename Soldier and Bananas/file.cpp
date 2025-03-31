#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, n, w;

    cin >> k >> n >> w;

    int final = 0;

    for (int i = 1; i < w + 1; i++)
    {
        final += (i * k);
    }

    if ((final - n) < 0)
    {
        cout << "0";
        return 0;
    }
    else
    {
        cout<< (final - n);
        return 0;
    }

    
}
