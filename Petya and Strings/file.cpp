#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2;

    cin >> s1;
    cin >> s2;

    // Convert both strings to uppercase
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    int grade = 0;

    // Compare the strings character by character
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] > s2[i])
        {
            grade = 1;  // s1 is greater
            break;
        }
        else if (s1[i] < s2[i])
        {
            grade = -1;  // s1 is smaller
            break;
        }
    }

    // If the strings are equal, grade will remain 0
    if (grade == 0)
    {
        cout << 0;
    }
    else if (grade > 0)
    {
        cout << 1;  // s1 > s2
    }
    else
    {
        cout << -1;  // s1 < s2
    }

    return 0;
}
