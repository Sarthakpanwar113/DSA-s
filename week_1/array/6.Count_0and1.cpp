#include<iostream>
using namespace std;

// int main(){
// int arr[8];
// int count_0=0;
// int count_1 = 1;
// int n=8;
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// for(int i=0; i<n; i++){
//     if(arr[i]==0){
//         count_0= count_0 + 1;
//     }
//     else if(arr[i]==1){
//         count_1= count_1 + 1;
//     }
//     else{
//         cout<<"ERROR:";
//     }

// }
// cout<<"no of zero"<<count_0<<endl;
// cout<<"no. of one "<<count_1;
// return 0;

// }

//now using function
void countzeroone(int arr[],int size){
    int zerocount = 0;
    int onecount = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
}
cout<<"zero"<<zerocount<<endl;
cout<<"one"<< onecount<<endl;
}
int main(){
    int arr[6]={0,1,0,1,1,0};
    int size=6;
    countzeroone(arr,size);
    return 0;
}
