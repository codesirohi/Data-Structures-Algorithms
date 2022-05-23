#include <bits/stdc++.h>
using namespace std;

long long countWays(int n)
{
    long long ways;

    // base cases
    if (n == 0)
        return 1;

    if (n < 0)
        return 0;

    // recursive calls

    ways = countWays(n - 1) + countWays(n - 2) + countWays(n - 3);

    return ways;
}

int main()
{

    int n;
    cin >> n;
    cout <<countWays(n) << endl;

    return 0;
}
