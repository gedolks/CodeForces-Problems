#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;

    cin>>s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(char c : s){
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i')
        {
            continue;
        }
        else
        {
            cout<<"."<<c;
        }
        
    }
    return 0;
}
