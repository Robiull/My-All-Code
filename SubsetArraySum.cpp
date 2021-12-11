//check all combination;
// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

// Find way to sum to N using array elements atmost once
void find(int arr[], int length, int s)
{
    // loop for all 2^n combinations
    for (int i = 1; i < (pow(2, length)); i++) {

        // sum of a combination
        int sum = 0;

        for (int j = 0; j < length; j++)

            // if the bit is 1 then add the element
            if (((i >> j) & 1)){
                sum += arr[j];
                cout<<"i: "<<i<<" j:"<<j<<" arr[j]: "<<arr[j]<<" sum: "<<sum<<endl;
            }

        // if the sum is equal to given sum print yes
        if (sum == s) {
            cout << "YES" << endl;
        }
    }
    // else print no
    cout << "NO" << endl;
    return ;
}

// driver code
int main()
{
    int sum = 5;
    int array[] = { -1, 2, 4, 121 };
    int length = sizeof(array) / sizeof(int);

    // find whether it is possible to sum to n
    find(array, length, sum);

    return 0;
}

