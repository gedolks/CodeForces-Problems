#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSumSubarray(const vector<int> &arr, int k)
{
    int sum = 0;
    int n = arr.size();
    if (n < k)
    {
        return -1;
    }

    for (int i = 0; i < k; ++i)
    {
        sum += arr[i];
    }

    int winSum = sum;

    for (int i = k; i < n; ++i)
    {
        winSum += arr[i] - arr[i - k];
        sum = max(winSum, sum);
    }

    return sum;
}

int main()
{
    vector<int> arr(9);
    srand(time(0));

    for (int i = 0; i < 9; i++)
    {
        arr[i] = rand() % 101;
    }

    for (auto c : arr)
    {
        cout << c << " ";
    }
    cout << endl;
    int k = 3;

    cout << "Maximum sum of subarray of size " << k << " is: " << maxSumSubarray(arr, k) << endl;

    return 0;
}
