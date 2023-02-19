 #include<iostream>
 using namespace std;

// int search (int arr[], int key, int size){
//      int start =0;
//      int end =size-1;
//      int mid = (start+end)/2;

//      while(start <= end) {

//           int element = arr[mid];
//           if(key == element ){
//                return mid;
//           }

//           else if(key <element){
//                end = mid -1;
//           }

//           else{
//                start = mid +1;
//           }

//           mid = (start+mid)/2;
//      }

//      return -1;
// }

// int firstOccurence (int arr[],int key ,int size ){
//      int start =0;
//      int end = size-1;
//      int mid = start+(end-start)/2;
//      int index=0;

//      while(start<=end){
//           if(key==arr[mid]){
//                index=mid;
//                end = mid-1; //to search first occurence
//           }

//           else if(key>arr[mid]){
//                start = mid +1;

//           }
//           else if(key < arr[mid]){
//                end = mid -1;
//           }
//           mid = start+(end-start)/2;
//      }
//      return index;
// }

// int lastOccurence (int arr[],int key ,int size ){
//      int start =0;
//      int end = size-1;
//      int mid = start+(end-start)/2;
//      int index=0;

//      while(start<=end){
//           if(key==arr[mid]){
//                index=mid;
//                start=mid+1; //to search last occurence
//           }

//           else if(key>arr[mid]){
//                start = mid +1;

//           }
//           else if(key < arr[mid]){
//                end = mid -1;
//           }
//           mid = start+(end-start)/2;
//      }
//      return index;
// }

// int missingElement(int arr[] , int size){
//       int start =0;
//       int end = size-1;
//       int mid = start+(end-start)/2;
//       int element;

//       while(start<=end){
//           if((arr[mid]-1)+1==mid){
//                element=arr[mid]+1;
//                start=mid+1;
//           }
//           else if((arr[mid]-1)+1!=mid){
//                element=arr[mid]+1;
//           }
//           mid = start+(end-start)/2;
//       }
//       return element;
// }

int peakElement(int arr[],int size){
     int start=0;
     int end=size-1;
     int mid= start+(end-start)/2;
 
     while(start<end){
          
          if( arr[mid]<arr[mid+1]){
               //search in right
               start=mid+1;
          }

        else{
          //search in left
               end=mid;
          }
         
          mid= start+(end-start)/2;
     }
     
     return start;
}


 int main(){

//linear search
//it is used to search element linearly by traversing each and every element
//  int arr [] = {1,2,3,4,5,6};
//  int element =5;

//  for(int i=0;i<6;i++){
//    if(arr[i]==element){
//         cout<<"element is present at index"<<" "<<i;
//      }
//  }
    

     //int arr[]={1,2,3,4,5};

//  cout<<"enter no to search";
//  int n ;
//  cin>>n;
//  for(int i =0; i<5;i++){
//      if(arr[i]==n){
//         cout<<"found";
//              }
//  }

//binary search
 //it divide whole array into two part which make the algo faster , as the no of element is half
 //the array must be in sorted manner

//  int arr [] = {2,4,6,8,10,12,16};
// int size = 7;
//  int key = 2;

 
//  int ans = search (arr , key , size);

 

//   if(ans == -1){
//       cout <<"element not found";
//   }
//  else{
//     cout<<"element found";
// }

//find the first occurence of an element
// int arr [] = {1,3,4,4,4,4,6,7,9};
// int key = 4;
// int size = 9;

// int value = firstOccurence (arr,key,size);
// cout<<"first occurence of element is at index"<<" "<<value;


//find the last occurence of an element
// int arr [] = {1,3,4,4,4,4,6,7,9};
// int key = 6;
// int size = 9;

// int value = lastOccurence (arr,key,size);
// cout<<"last occurence of element is at index"<<" "<<value;

// int arr[] = {1,2,3,4,6,7,8};
// int size=7;

// int element = missingElement(arr,size);
// cout<<"missing element is"<<" "<<element;
 
 
 //find peak element in mountain array
 int arr []={0,10,5,2};
int size = 4;
int element = peakElement(arr,size);
cout<<element;
 }
