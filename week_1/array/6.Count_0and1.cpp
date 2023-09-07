#include<iostream>
using namespace std;

int main(){
int arr[8];
int count_0=0;
int count_1 = 1;
int n=8;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    if(arr[i]==0){
        count_0= count_0 + 1;
    }
    else if(arr[i]==1){
        count_1= count_1 + 1;
    }
    else{
        cout<<"ERROR:";
    }

}
cout<<"no of zero"<<count_0<<endl;
cout<<"no. of one "<<count_1;
return 0;

}