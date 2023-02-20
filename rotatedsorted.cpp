// class Solution {
// public:



// int binarysearch ( vector <int> nums , int target , int start , int end){
    
//     int mid = start+(end - start)/2;

//     while(start<=end){

//         if(nums[mid]==target){
//             return mid;
//         }
//         else if(nums[mid]>target){
//            end = mid-1;
           
//         }
//         else {
//              start = mid +1;
//         }
//         mid = start+(end - start)/2;
//     }
// return -1;
// }

// int pivotindex ( vector <int> nums){
//     int start =0;
//     int end = nums.size()-1;
//     int mid = start+(end - start)/2;
//     while(start<end){
//         if(mid+1<nums.size() && nums[mid]>nums[mid+1] ){
//             return mid;
//         }
//         else if (mid-1>=0 && nums[mid]<nums[mid-1] ){
//             return mid-1;
//         }
//         else if(nums[start]>=nums[mid]){
//             end = mid-1;
//         }
//         else{
//          start=mid+1;
//         }
//         mid = start+(end - start)/2;
//     }
//     return start;
// }



    




//     int search(vector<int>& nums, int target) {
//         int pivotIndex = pivotindex(nums);

//         if(target>=nums[0] && target <= nums[pivotIndex] ){
//             //searching in sorted 1
//           int ans =   binarysearch (nums , target , 0 , pivotIndex);
//           return ans;
//         }

//         else if ( pivotIndex+1 < nums.size() &&
//           target>=nums[pivotIndex+1] &&
//            target<=nums[nums.size()-1] ){
//             //search in sorted 2
//             int ans= binarysearch (nums, target , pivotIndex+1, nums.size()-1);
//             return ans;
//         }
//         return -1;
//     }
// };