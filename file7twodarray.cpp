//two dimesnsional array
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int rowsum (int arr [3] [3], int row , int col){

}
int main(){
    //2d array
   // int arr [5] [6]; //5 row and 6 column

//    int arr[3] [3]={
//     {1,2,3},
//     {4,5,6},
//     {2,4,8} 
//    };

//     //printing row 
//     for(int i=0;i<3;i++){
//     //printing column for each row
//     for(int j=0;j<3;j++){
//         cout<<arr [i] [j];
//     }
//     cout<<endl;
//     }
    

//print row sum

// int arr [2] [2] ={  
//     {1,2},
//     {3,4}};
//     int rowSum=0;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             rowSum+=arr[i] [j];
//         }
//         cout<<rowSum<<endl;
//         rowSum=0;
//     }


//search element inside array
    // int  arr [3] [3] {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // cout<<"enter the key to search"<<" ";
    // int key;
    // cin>>key;

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(key== arr[i] [j]){
    //             cout<<"key is present ";
    //         }
    //     }
    // }  

    // cout<<"key is not present";  


//transpose the matrix

//  int  arr [3] [3] {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//  };

//  for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         arr[j][i] = arr[i] [j];

//     }
//  }
 
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i] [j];
//     }

//     cout<<endl;
//  }

//vector of vector /2d vector
 
vector<vector<int> > arr;

vector<int>a{1,2,3};
vector<int>b{4,5,6};
vector<int>c{7,8,9};

arr.push_back(a);
arr.push_back(b);
arr.push_back(c);

for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j];
    }
}
}