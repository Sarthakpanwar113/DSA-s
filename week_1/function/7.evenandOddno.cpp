#include<iostream>
using namespace std;


//bool method
bool functioneven(int n){
  if((n&1)==0){
    return true;
  }
  else{
    return false;
  }
}


int main(){
  int n;
  cin>>n;
  bool iseven = functioneven(n);
  if(iseven==true){
    cout<<"yeh toh even number hai";
  }
  else{
    cout<<"odd number";
  }
}


