// Srishti Mangla
// 2010991734
// Set-3
// Question-2

#include <iostream>
using namespace std;
 
// function to find a pair in an array with a given sum
void pairSum(int nums[], int n, int target){
    // consider each element except the last
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            // print pair if sum is found
            if (nums[i] + nums[j] == target){
                cout<<"Pair found ("<<nums[i]<<", "<<nums[j]<<")"<<endl;
            }
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
    int sum;
    cin>>sum;
    pairSum(arr, n, sum);
    return 0;
}


