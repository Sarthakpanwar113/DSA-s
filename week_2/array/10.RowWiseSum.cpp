//row wise sum nikalna hai in 2d array

#include<iostream>
using namespace std;


void Rowwisesum(int arr[][4], int row, int col){
    
    for(int i=0; i<row; i++){
        int sum=0;
        
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
            

        }
   cout<<sum<<endl;
    }




}

int main(){
    int arr[3][4]={
        {1,2,3,4},
        {2,6,1,1},
        {1,2,3,4}
    };
    
    int row = 3;
    int col = 4;
    Rowwisesum(arr, row, col);
    return 0;

}