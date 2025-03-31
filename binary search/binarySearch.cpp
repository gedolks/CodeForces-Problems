#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;
int binary_search(vector<int> &arr, int value, int start, int end)
{
//
}

int main(int argc, char const *argv[])
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

    int ran_number = rand() % arr.size();

    cout << "The random number we want to find is: " << ran_number << endl;

    int value = arr[ran_number];

    cout << "The value of that number is: " << value << endl;

    sort(arr.begin(), arr.end());

    binary_search(arr, value, 0, arr.size() - 1);

    return 0;
}
