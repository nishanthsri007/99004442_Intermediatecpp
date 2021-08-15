#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;
 
void printPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum - arr[i];
 
        if (s.find(temp) != s.end())
            cout << "Pair with given sum "
                 << sum << " is (" << arr[i] << ","
                    << temp << ")" << endl;
 
        //s.insert(arr[i]);
        else
        {
            cout << "Pair{-1,-1}" << endl;
            break;
        }
        s.insert(arr[i]);
    }
}
 
/* Driver Code */
int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int n;
    cout << "Enter the target number" << endl;
    cin >> n;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    // Function calling
    printPairs(A, arr_size, n);
 
    return 0;
}