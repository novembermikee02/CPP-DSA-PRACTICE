#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x, y;
        cin >> x >> y;
        int payAmount = 0;
        for (int i = 0; i < x; i++){
            payAmount += y;
        }
        cout << payAmount << endl;
        // if (x == 1)
        // {
        //     cout << y << endl;
        // }
        // else if (x == 2)
        // {
        //     cout << y + y << endl;
        // }
    }
    return 0;
}