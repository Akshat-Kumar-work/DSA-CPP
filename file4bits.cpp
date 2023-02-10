#include<iostream>
using namespace std;

int main(){
    //count no of set bit of n
    int n=3;
    int ans=0;
    while(n!=0)
    {
       if(n&1){ //if set bit is found 
        ans++;  //so increment set bit count
       }

       n=n>>1; //right shifting n by 1

    }

    cout<<"no of set bit found are"<<ans;

}