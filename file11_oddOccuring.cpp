#include<iostream>
using namespace std;
int OddOccur (int arr[]){
int s =0;
int e =13-1;
int mid = s+(e-s)/2;
while(s<=e){

    if(arr[s]==arr[e]){
         return s;
    }
    //agar mid even hai
    if(mid%2==0){
        if(arr[mid]==arr[mid+1]){
            //hum left m khade hai right m chlo 
            s=mid+2;
        }
        else{
            //agar mid agle element k baranar nai hai ya to vo ans hai ya vo peeche vale k equal ho skta
            e=mid;
        }
    }
        //agar mid odd hai
        if(mid%2!=0){
            //hum left m hai right m jaengy kyu ki ans even index p ayga
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                //hum right m hai jaengy left
                e=mid-1;
            }
        
    }
    
    mid = s+(e-s)/2;
}
return -1;
}
int main(){
     int arr[] = {5,1,1,2,2,3,3,4,4,600,600,4,4};
     int ans = OddOccur (arr);
     cout<<arr[ans];
}  