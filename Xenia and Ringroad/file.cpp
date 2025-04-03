#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> tasks(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> tasks[i];
    }

    long long totalTime = 0;
    int currentHouse = 1;

    for (int i = 0; i < m; ++i)
    {
        int targetHouse = tasks[i];
        if (targetHouse >= currentHouse)
        {
            totalTime += (targetHouse - currentHouse);
        }
        else
        {
            totalTime += (n - currentHouse + targetHouse);
        }
        currentHouse = targetHouse;
    }

    cout << totalTime << endl;

    return 0;
}
