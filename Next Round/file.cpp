#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;

    cin >> n >> k;
    k--;

    vector<int> grades(n);

    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];
    }
    int sum = 0;

    for (int grade : grades)
    {
        if (grade > 0 && grade >= grades[k])
            sum++;
    }

    cout << sum;

    return 0;
}
