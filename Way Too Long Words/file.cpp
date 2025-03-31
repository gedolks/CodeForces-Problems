#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    int numberOfWords = 0;

    vector<string> list;

    cin >> numberOfWords;
    for (int i = 0; i < numberOfWords; i++)
    {
        string choise;
        cin >> choise;
        list.push_back(choise);
    }

    for (string word : list)
    {
        if (word.size() <= 10)
            cout << word << endl;
        else
        {
            int sum = 0;
            cout << word.front();
            cout << word.size() - 2;
            cout << word.back() << endl;
        }
    }

    return 0;
}
