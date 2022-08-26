// Srishti Mangla
// 2010991734
// Set-3
// Question-1

#include <iostream>
using namespace std;
 
// swap elements function
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
// Function to rearrange the array
void rearrangeArray(int arr[], int n){
    for (int i=1; i<n; i+=2){
        if (arr[i-1]>arr[i]) {
            swap(arr, i-1, i);
        }
        if (i+1<n && arr[i+1]>arr[i]){
            swap(arr, i+1, i);
        }
    }
}

// main function
int main(){
    
    // Array Input 
    int n;
    cin>>n;
    int v;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>v;
        arr[i]=v;
    }
    rearrangeArray(arr, n);
 
    // print output array
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}
