#include<iostream>
using namespace std;
int main(){
 
 /*print rectangle*/
/*
 for(int n=0; n<3; n++){  /*row*/
 /*column */ /*  for(int n=0;n<5;n++){ 
      cout<<"*";
   }
   cout<<endl;
 }*/

 /*print square*/
/*
for(int i=0; i<4;i++){
   for(int j=0; j<4;j++){
      cout<<"*";
   }
   cout<<endl;
}*/

/*print hollow rectangle*/
/*
for(int i=0;i<3;i++){
   if(i==0 ||  i==2){
      for(int j=0;j<5;j++){
    cout<<"*";
   }
   }
   else{
      cout<<"*";
      for(int space=0;space <3;space++){
         cout<<" ";
      }
      cout<<"*";
   }
   cout<<endl;
   }*/
 

/*print half pyramid*/
/*
for( int row=0; row<6;row++){
   for(int col=0; col<row+1;col++){
      cout<<"*";
   }
   cout<<endl;
}*/

/*print inverted half pyramid*/
/*
for(int row=1; row<=6 ; row++){
   for(int col=6; col>=row;col--){
      cout<<"*";
   }
   cout<<endl;
}*/

/*print numeric half pyramid*/
/*
for(int row=1;row<=5;row++){
   for(int col=1;col<=row;col++){
      cout<<col;
   }
   cout<<endl;
}*/

/*print inverted numeric half pyramid */
/*
for(int row=1;row<=5;row++){
   for(int col=1;col<=5-row;col++){
      cout<<col;
   }
   cout<<endl;
}*/

/*print full pyramid*/
/*for(int i=0;i<6;i++){

   for(int j=0;j<6-i;j++){
      cout<<" ";
   }

   for(int j=0;j<i+1;j++){
      cout<<"*";
      cout<<" ";
   }
   cout<<endl;
}*/

/*solid square pattern */
/*for(int i=0; i<=4; i++){
   for(int j=0; j<=4;j++){
      cout<<"*";
   }
   cout<<endl;
}
*/

/*hollow square pattern */
/*for(int i= 0 ;i<4;i++){
   for(int j=0; j<4 ; j++){
      if(i==0 || i==(4-1)||j==0||j==(4-1)){
         cout<<"*";
      }
      else{
         cout<<" ";
      }
   }
   cout<<endl;
}*/


/*hollow inverted half pyramid */
/*for(int i=0;i<6;i++){
   for(int j=0; j<6;j++){
     if(i==0||j==0||j==6-i-1){
      cout<<"*";
     }else{
      cout<<" ";
     }
   }
   cout<<endl;
}*/ 

/*inverted full pyramid*/
/*for(int i=6;i>0;i--){

   for(int j=0;j<6-i;j++){
      cout<<" ";
   }

   for(int j=0;j<i;j++){
      cout<<"*";
      cout<<" ";
   }
   cout<<endl;
}*/

int n;
cin>>n;

for( int i=0; i<n;i++){
   //spaces 
   for(int j=0; j<n-i-1 ; i++){
      cout<<" ";
   }




   int start =i+1;
   for(int j=0; j< i+1; j++){
     cout<< " ";
    start++;
   }
   cout<<endl; 
}

}
