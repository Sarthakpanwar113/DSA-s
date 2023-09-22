// we have an array first we have to find the minimum sum and maximum sum of the array

#include <bits/stdc++.h>
using namespace std;

void minimax(int arr[], int n)
{
    sort(arr, arr + n);
    int mini=0;
    for(int i=0; i<n-1; i++){
        mini+=arr[i];
        

    }
    int max=0;
    for(int i=1; i<n; i++){
        max+=arr[i];

    }
    cout<<mini<<" "<<max<<endl;
}

int main()
{
    int arr[] = {13, 11, 45, 32, 89, 21} ;
    int n = 6;
    minimax(arr, n);
    cout << "answer will: " << endl;
    for (int i = 0; i <n; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}