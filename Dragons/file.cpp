#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int s, n;
    vector<vector<int>> xy;

    cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        xy.push_back({x, y});
    }

    sort(xy.begin(), xy.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[0] < b[0]; });

    for (const auto &pair : xy)
    {
        if(s > pair[0])
        {
            s+=pair[1];
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
