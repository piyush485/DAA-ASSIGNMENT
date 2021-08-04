#include <iostream>
using namespace std;

void lineraSearch(int arr[], int n, int key)
{
    int count = 0;
    int i;
    for( i = 0 ; i < n ; i++ )
    {
        count++;
        if(key == arr[i])
        {
            cout << "Present ";
            break;
        }
    }
    if(i == n)
        cout << "Not Present ";
    cout << count << endl;
    return;
}

int main()
{
    int t, n, element;
    cin >> t;
    
    // Taking input from the input file 
    while(t)
    {
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++ )
            cin >> arr[i];
        cin >> element;

        // Function for implementing Linear Search 
        lineraSearch( arr, n, element);
        t--;
    }
    return 0;
}