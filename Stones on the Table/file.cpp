#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string colors;

    cin >> n;
    cin >> colors;

    int count = 0;

    for (int i = 0; i < colors.size(); i++)
    {
        while (colors[i] == colors[i + 1])
        {
            count++;
            break;
        }
    }

    cout << count;

    return 0;
}
