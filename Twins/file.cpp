#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    sort(coins.rbegin(), coins.rend());
    int totalSum = 0, mySum = 0, count = 0;

    for (int coin : coins)
        totalSum += coin;

    for (int coin : coins)
    {
        mySum += coin;
        count++;
        if (mySum > totalSum - mySum)
        {
            cout << count;
            return 0;
        }
    }

    cout << count;
    return 0;

}
