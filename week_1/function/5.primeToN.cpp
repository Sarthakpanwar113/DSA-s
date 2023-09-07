#include<iostream>
using namespace std;

int primeToN(int N){
    for(int i=2; i<N; i++){
        if(N%i == 0){
        return false;
        
        }
        
    }
    
    
}

int main(){
    int a= primeToN(9);
    cout<<a;
    return 0;
}