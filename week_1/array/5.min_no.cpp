#include<iostream>
using namespace std;
#include <climits>

int maximum(int arr[7],int size){
    int minAns = INT_MAX;
    for (int i=0; i<size; i++){
        if(arr[i]<minAns){
            minAns=arr[i];
        }

    }
    return minAns;

}


int main(){
    int arr[7]={8,3,2,5,7,1,10};
    int size =7;
    int max= maximum(arr,size);
    cout<<"max number is "<<max<<endl;
    return 0;


}