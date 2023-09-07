#include<iostream>
using namespace std;

int main(){
int arr[7]={0,1,2,3,4,5,6};
int target=9;
int n=7;

bool flag = false;
for(int i=0; i<n; i++){
    if(arr[i]==target){
        flag= true;
        break;
    }
}

if(flag==true){
    cout<<"milgya";
}
else{
    cout<<"nhi mila";
}
}
