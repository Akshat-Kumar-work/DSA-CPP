#include<iostream>
#include<vector>
using namespace std;

int moveAllNegToLeft(int arr[] , int size){
   int neg=0;
   int positive = size-1;
   //dutch national flag algo
   while(neg<positive){
      if(arr[neg]<0){
         neg++;
      }
      else if(arr[positive]>0){
         positive--;
      }
      else{
         swap(arr[neg],arr[positive]);
      }
   }
}
int main(){


/*
   int arr[10];

cout<<"enter the values of array";
   for(int i=0;i<10;i++){
    cin>>arr[i];
   }

  for(int i=0;i<10;i++){
    cout<<arr[i];
   }*/



   //take five elementd and print their doubles

 /* int arr1 []= {1,3,5,7,9};

   for(int i=0;i<5;i++){
    cout<<arr1[i]*2<<" ";
   }*/

   //change all element values to one

//  int arr[]={1,2,35,6,57};

//   for(int i =0; i<5;i++){
//     cout<<(arr[i]=1);
//   }


//linear search in array

// int arr[]={1,2,3,4,5};

// cout<<"enter no to search";
// int n ;
// cin>>n;
// for(int i =0; i<5;i++){
//     if(arr[i]==n){
//         cout<<"found";
//     }
// }

//cont zero and one in array

// int zero=0;
// int one =0;
//  int arr[]={1,0,1,0,5};
// for(int i=0;i<5;i++){

//     if(arr[i]==0){
//         zero++;
//     }
//     else if (arr[i]==1)
//     {
//         /* code */
//         one++;
//     }
    
// }
// cout<<zero<<" "<<one;

/*max no in an array*/
// int n=0; /*but in best practice if we want to get a max no first initalize it with INT.MIN*/
// int arr[]={1,2,3,4,5,56,874,654};
// for(int i=0;i<8;i++){
//     if(arr[i]>n){
//         n=arr[i];
//     }
// }
// cout<<n;

/*extereme print in an array*/

// int arr[]={1,2,3,4,5,6,7,8,9};

// int start=0;
// int end = 8;

// while(start<=end){
//     if(start==end){
//         cout<<arr[start];
//         break;
//     }
//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";
//     start++;
//     end--;
// }

/*reverse an array*/
// int arr[]={1,2,3,4,5,6,7,8,9};

// int start=0;
// int end=8; 

// while(start<=end){
//    swap(arr[start],arr[end]);
//    start++;
//    end--;
// }

// for(int i=0;i<9;i++){
//     cout<<arr[i];
// }

//move all neg no to left side of array
int a[] = {1,2,-3,4,-5,6};
int n=6;
 moveAllNegToLeft (a,n);
for(int i=0;i<n;i++){
  cout<< a[i];
}



cout<<"Engineer by Degree and Passion";

return 0;
}



