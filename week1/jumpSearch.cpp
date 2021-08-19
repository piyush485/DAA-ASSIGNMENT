#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int n, int key)
{
    int step = sqrt(n);
    int prev = 0, count = 0;
    while (arr[min(step, n) - 1] < key)
    {
        count = count + 1;
        prev = step;
        step = step + sqrt(n);
        if (prev >= n)
        {
            cout << "Not present " << endl;
            return count;
        }
    }
    while (arr[prev] < key)
    {

        prev = prev + 1;

        if (prev == min(step, n))
        {
            cout << "Not present " << count << endl;
            return count;
        }
        count = count + 1;
    }
    if (arr[prev] == key)
    {
        count = count + 1;
        cout << "Present " << count << endl;
        return count;
    }
    cout << "Not present " << count << endl;
    return count;
}

int main()
{
    int T;

    // Taking input 
    cin >> T;
    while(T)
    {
        int N;
        cin >> N;
        int arr[N];
        int element;
        for(int i = 0 ; i < N ; i++ )
            cin >> arr[i];
        cin >> element;

        // Function for implementing Jump Sort 
        jumpSearch(arr, N, element);
        T--;
    }
    return 0;
}