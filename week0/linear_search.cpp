#include <iostream>
using namespace std;

int main()
{
    int i;

    // size of Array
    int n;
    cout << "Enter size: ";
    cin >> n;

    // Array of size n
    int arr[n];

    // Taking input of array
    cout << "Enter " << n << " non-negetive elements of array: \n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    // Variable for searching in the Array
    int x;
    cout << "Enter the number to find in Array: ";
    cin >> x;

    // Variable for counting the comparisons
    int count = 0;
    for (i = 0; i < n; i++)
    {
        count++;
        if (x == arr[i])
        {
            cout << "Element found !\n";
            break;
        }
    }
    if (i == n)
        cout << "Element not found !\n";
    cout << "Number of comparisons: " << count;
    return 0;
}