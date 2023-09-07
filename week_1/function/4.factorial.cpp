#include<iostream>
using namespace std;

// void factorials(int N){
   
//     int a=1;
    
//     for(int i=1;i<=N;i++){
        
//         a*=i;
       
       
//     }
//      cout<<"factorial will be"<<a<<endl;
     
//     cout<<"he";
// }

// int main(){
//     factorials(5);
//     return 0;
   
// }







void factorials(int N){
   
    int a=1;
    
    for(int i=N; i>=1; i--){
        
        a=a*i;
       
       
    }
     cout<<"factorial will be"<<a<<endl;
     
  
}

int main(){
    factorials(5);
    return 0;
   
}



// void  factorial( int n)
// {
// 	int res = 1, i;
// 	for (i = 2; i <= n; i++){
        
// 		res *= i;

//     }
// 	cout<<"final is"<<res<<endl;
// }

// // Driver code
// int main()
// {
	
// 	factorial(5) ;
// 	return 0;
// }
