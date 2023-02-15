#include<iostream>
#include<vector>
using namespace std;

// int findUnique(vector<int> arr) {
//    int ans=0;
//    for(int i =0;i<arr.size();i++){
//       ans=ans^arr[i];
//    }

//    return ans;
// }
int main(){
    
//vector
// vector<int> arr;
// cout<<arr.size();

// //inserting element
// arr.push_back(5);
// //removing element
// arr.pop_back();


// vector<int> crr{10,20,30,50};
// for(int i=0;i<crr.size();i++){
//    cout<<crr[i]<<" ";
// }


//find unique element inside array where every element occur twice except one
// cout<<"enter size of array";
// int n;
// cin>>n;
// vector<int>arr(n);
// int uniqueElement=0;

// for(int i =0; i<arr.size();i++){
//  cin>>arr[i];
// }

// int ans= findUnique(arr);
// cout<<ans;


//union of two arrays
// int arr [] = {2,4,6,8};
// int arr1 [] = {1,3,7};
// vector <int> ans;

//  for(int i=0;i<4;i++){
//    ans.push_back(arr[i]);
//  }

//    for(int i=0;i<3;i++){
//      ans.push_back(arr1[i]);
//   }
 
//  for(int i=0;i<ans.size();i++ ){
//    cout<<ans[i];
//  }

//intersection of array
// int arr [] = {1,2,3,4,6,8};
// int arr1[] = {3,4,9,10};

// vector<int> ans;
// for(int i =0; i<6;i++){
//    int element =arr[i];
//   for(int j=0;j<4;j++){
//    if( element == arr1[j]){
//       //marking equal element
//       arr1[j]=-1;
//       ans.push_back(arr1[j]);
//    }
//   }
// }

// for(auto i: ans){
//    cout<<i;
// }

//pair sum
// int a [] ={1,3,5,7,2,4,6};

// int sum =9;

// for( int i=0; i<7;i++){
//     for(int j=i+1;j<7;j++){
//  if(sum ==a[i]+a[j]){
//         cout<<a[i]<<a[j]<<" ";
//    }
//     }
  
// }

//sort zero's and one's
// int arr [] = {0,1,1,0,1,0,1,0,0};
// int start=0;
// int end=8;
// int i=0;
// while(start<end){
//     if(arr[i]==0 ){
//         swap(arr[i],arr[start]);
//         i++;
//         start++;
//     }
//     else if(arr[i]==1){
//         swap(arr[i],arr[end]);
//         end--;
//     }
// }

// for(int i=0;i<9;i++){
//     cout<<arr[i];
// }



}

