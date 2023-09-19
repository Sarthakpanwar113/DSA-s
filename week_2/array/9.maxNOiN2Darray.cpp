//yha pe max no. nikalna hai in 2d array

#include<iostream>
using namespace std;
#include<limits.h>


int findMax(int arr[][4], int row, int col){
    //yha pe int_min minimum number utha leta hai
    int maxAns = INT_MIN;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>=maxAns){
                maxAns = arr[i][j];
            }
            // cout<<maxAns<<endl;
        }
    }
    return maxAns;

}

int main(){
    int arr[3][4]={
        {1,2,13,4},
        {5,16,7,8},
        {9,10,11,12}
    };
int row=3;
int col=4;
cout<<"printing the max no:"<<findMax(arr,row,col)<<endl;
return 0;
}