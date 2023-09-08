#include<iostream>
using namespace std;
void reverse_array(int arr[], int size){
    

    for(int left=0,right=size-1; left<=right; left++,right--){
       swap(arr[left],arr[right]);
        

    }

}





int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size=7;
    reverse_array(arr, size);
    cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
//output will be 
// Reversed Array: 7 6 5 4 3 2 1 

///
// now using whole loop 

#include<iostream>
using namespace std;
void reverse_array(int arr[], int size){
    

    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices using two pointers
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }

}





int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size=7;
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    reverse_array(arr, size);
    cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

//output will be
// Original Array: 1 2 3 4 5 6 7 
// Reversed Array: 7 6 5 4 3 2 1 