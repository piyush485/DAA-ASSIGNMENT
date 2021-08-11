#include<iostream>
#define long int int
using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int count = 0;
    int left = 0;
    int right = n - 1;
    while(left <= right)
    {
        count++;
        int mid = left + (right - left)/2;
        if(arr[mid] == key)
            break;
        else if(arr[mid] < key)
            left = mid + 1;
        else if(arr[mid] > key)
            right = mid - 1;
    }
    if(count != n && left <= right)
        cout << "Present " << count << endl;
    else
        cout << "Not Present " << count << endl;
}

int main()
{
    int T;
    cin >> T;

    // Taking input from file 
    while(T)
    {
        int N;
        cin >> N;
        int arr[N];
        int element;
        for(int i = 0 ; i < N ; i++ )
            cin >> arr[i];
        cin >> element;

        // Funcrion for implementing Binary Search 
        binarySearch(arr, N, element);
        T--;
    }
    return 0;
}