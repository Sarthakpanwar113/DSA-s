#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

bool linearsearch(int arr[],int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            //found
            return true;
        }
    }
    //not found
    return false;

}


int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    //function call
    printarray(arr,size);

    int target=4;
    bool ans = linearsearch(arr,size,target);
    if(ans==1){
        cout<<"target found";

    }
    else{
        cout<<"target not found:"<<endl;
    }
}