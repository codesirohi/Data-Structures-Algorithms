#include <bits/stdc++.h>
using namespace std;

// Subset(subsequence): is diffrent from substring
// Substring is continious part of the array/string
// Subset/Subsequence can be disCont.

long long FibDigit(int num)
{

    if (num == 0 || num == 1)
    {
        return num;
    }

    else
    {
        return (FibDigit(num - 2) + FibDigit(num - 1));
    }
}

int main()
{

    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = FibDigit(i);
        cout << temp << " ";
        sum += temp;
    }

    cout << endl
         << sum << endl;

    return 0;
}