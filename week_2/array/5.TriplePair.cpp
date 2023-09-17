//PRINTING ALL TRIPLE PAIR OF AN ARRAY
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            for(int k = 0; k < n; ++k){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
    }

}