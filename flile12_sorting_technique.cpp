#include<iostream>
#include<vector>
using namespace std;

int main(){
/*sorting algos*/
//selection sort algo
//in this algo we find most minimum element and place it to starting to make algo increasing order 

vector<int> arr{5,4,3,2,1};

int n = arr.size();

for(int i=0; i<n-1 ;i++){ //here we are making loop till 2nd last element 

    int minelement=i;

    for(int j=i+1 ; j<n ; j++){
        if(arr[j] < arr[minelement]){
             minelement=j;
        }
    }

    swap(arr[i],arr[minelement]);
}


for(int i=0;i<n;i++){
    cout<<arr[i];
}

 


return 0;
}





