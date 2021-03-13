#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int main()
{
    int arr[MAX][MAX],sixe[MAX];
    int n, q, k, outer_index, inner_index;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n >> q;
    // cout<<n<<" "<<q<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int l = 0; l < q; l++)
    {
        cin >> outer_index >> inner_index;
        cout << arr[outer_index][inner_index]<<endl;
    }

    return 0;
}