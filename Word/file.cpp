#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    int lower = 0;
    int upper = 0;

    for(char c : s)
    {
        if(isupper(c)) upper++;
        else lower++;
    }

    if(lower >= upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }
    

    return 0;
}
