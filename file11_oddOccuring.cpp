#include<iostream>
using namespace std;
int OddOccur (int arr[]){
int s =0;
int e =13-1;
int mid = s+(e-s)/2;
while(s<e){
    if(arr[s]==arr[e]){
         return s;
    }
    else if (arr[mid]==arr[mid+1]){
        s = mid +2;
    }
    else {
        e = mid ;
    }
    mid = s+(e-s)/2;
}

}
int main(){
     int arr[] = {1,1,2,2,3,3,4,4,3,600,600,4,4};
     int ans = OddOccur (arr);
}  