#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string operation;
        cin >> operation;

        if (operation == "X++" || operation == "++X")
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x;

    return 0;

}
