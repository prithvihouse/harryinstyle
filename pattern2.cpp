#include <iostream>
using namespace std;

int main()
{

    // pattern :

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15

    // code :

    int n;
    cout << "Enter any number : ";
    cin >> n;

    int c=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c<<" ";
            c++;
        }
        cout << endl;
    }

    // pattern : 

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // code :

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i<<" ";
    //     }
    //     cout << endl;
    // }

    // pattern :

    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    // code:

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // pattern :

    // * * * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // // code:

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    return 0;
}