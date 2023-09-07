//input mein array -> 5size array 
//5-> i/p by user
// find the total sum of the elements in the array

#include<iostream>
using namespace std;

int main(){
    int n=5;
    //here n is 5
    int arr[5];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sums=0;
    for(int i=0; i<n; i++){
        sums=sums+arr[i];
    }
    cout<<"printing the sum of elements inside the array"<<sums<<endl;
    return 0;
    

}