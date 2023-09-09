#include<iostream>
using namespace std;

void swapnumber(int a, int b){
    int c = a +b;
    a = c - a;
    b = c - b;
    cout<<"value of a"<<a<<endl;
    cout<<"value of b"<<b<<endl;

}

int main(){
    int a=3;
    int b=4;
    swapnumber(a,b);
    // cout<<swapnumber<<endl;
    return 0;
    

}