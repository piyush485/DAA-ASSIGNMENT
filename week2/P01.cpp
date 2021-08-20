#include <iostream>
#define long int int
using namespace std;

int binarySearch(int arr[], int n, int key, int z)
{
    int count = -1;
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            count = mid;
            if(z)
                right = mid - 1;
            else
                left = mid + 1;
        }
        else if (arr[mid] < key)
            left = mid + 1;
        else if (arr[mid] > key)
            right = mid - 1;
    }
    return count;
}

int main()
{
    int T;
    cin >> T;

    // Taking input from file
    while (T)
    {
        int N;
        cin >> N;
        int arr[N];
        int element;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> element;

        // Funcrion for implementing Binary Search
        int start = binarySearch(arr, N, element, 1);
        int last = binarySearch(arr, N, element, 0);
        if(start != -1)
            cout << element << "-" << last - start + 1 << "\n";
        else
            cout << "Not found\n";
        T--;
    }
    return 0;
}