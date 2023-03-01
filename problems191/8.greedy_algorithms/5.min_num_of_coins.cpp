#include <bits/stdc++.h>
using namespace std;

int main()
{

    int amount = 50;
    vector<int> denoms = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    int currSum = 0;
    int i = denoms.size() - 1;
    int coins = 0;
    while (currSum < amount)
    {
        if (denoms[i] <= amount - currSum)
        {
            currSum += denoms[i];
            coins++;
            cout << denoms[i] << endl;
        }
        else
            i--;
    }

    cout << coins << endl;

    return 0;
}