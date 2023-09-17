// we have sort all zero's and one's from the array  zero's to the left and one's to the right
// 1|0|0|0|1|1|0|1|0|0|1

#include <iostream>
using namespace std;

void sortallzeroandone(int arr[], int n)
{
    int zerocount = 0;
    int onecount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerocount = zerocount + 1;
        }
        else
        {
            onecount = onecount + 1;
        }
    }
    cout << zerocount << endl;
    cout << onecount << endl;

    int i;
    for (i = 0; i < zerocount; i++)
    {
        arr[i] = 0;
    }

    for (int j = i; j < n; j++)
    {
        arr[j] = 1;
    }
}

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1};
    int n = 12;
    sortallzeroandone(arr, n);
    // cout<<"sort array will be";
    // printing
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
}