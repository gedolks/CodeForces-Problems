#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    string name;

    cin >> name;

    int counter = 0;
    set<int> distinct;

    int numberOfCharacters;
    for (int i = 0; i < name.size(); i++)
    {
        auto it = distinct.find(name[i]);
        if (it == distinct.end())
        {
            distinct.insert(name[i]);
            counter++;
        }
    }

    if (counter % 2)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }

    return 0;
}
