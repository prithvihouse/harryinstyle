#include <iostream>
using namespace std;

int main()
{

    int i, j, row, col;
    cout << "enter the number of row : ";
    cin >> row;

    cout << "enter the number of column : ";
    cin >> col;

    // pattern-2

    // *******
    // *     *
    // *     *
    // *     *
    // *******

    // code:

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 or i == row)
            {
                cout << "*";
            }
            else if (j == 1 or j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // pattern-1

    // ******
    // ******
    // ******
    // ******

    // code:

    // for ( i = 1; i <= row; i++)
    // {
    //     for ( j = 1; j<=col; j++)
    //     {
    //        cout<<"*";
    //     }
    //     cout<<endl;
    // }

    return 0;
}