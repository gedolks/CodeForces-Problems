#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string sum;

    cin >> sum;
    sum.erase(remove(sum.begin(), sum.end(), '+'), sum.end());

    sort(sum.begin(), sum.end());

    for (int i = 0; i < sum.size(); i++)
    {
        if(i==sum.size() - 1) cout<<sum[i];
        else cout<<sum[i]<<'+';
    }
    

    return 0;
}
