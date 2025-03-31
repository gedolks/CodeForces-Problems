#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;

    cin >> s;

    int counter = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            counter++;
        }
        else
        {
            counter = 0;
        }

        if (counter == 6)
        {
            cout << "YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
