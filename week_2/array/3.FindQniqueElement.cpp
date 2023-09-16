// in two have an array 2,10,11,13,10,2,15,13,15 
// and each element occurs twice except one find this out 

// here their are we approach with XOR , remember that ager 0 ko XOR karoge kisi bhi no. ke sath humko vohi no. milega 

//input mein array -> 5size array 
//5-> i/p by user
// find the total sum of the elements in the array

#include<iostream>
using namespace std;

int getUnique(int arr[], int n){
    int ans = 0;
    for(int i =0 ; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;

}

int main(){
    int arr[] = {2,10,11,10,2,13,15,13,15};
    int n=9;
    int findans = getUnique(arr,n);
    cout<<"final answer is i.e uniqe from this array is:"<< findans <<endl;
    return 0;


}
