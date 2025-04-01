#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(3));

    for (int i = 0; i < n; i++)
        cin >> v[i][0] >> v[i][1] >> v[i][2];

    int sum_x = 0, sum_y = 0, sum_z = 0;

    for (int i = 0; i < n; i++)
    {
        sum_x += v[i][0];
        sum_y += v[i][1];
        sum_z += v[i][2];
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
