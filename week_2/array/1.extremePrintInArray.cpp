//input mein array -> 5size array 
//5-> i/p by user

#include<iostream>
using namespace std;


void extermePoint(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        if(left == right){
            cout<<arr[left]<<endl;
        }
        else{
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
        }
        left++;
        right--;
    }
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    extermePoint(arr,size);
    return 0;
}