int removeDuplicates(int* nums, int numsSize) {
   int k=0;
   for(int i = 0;i<numsSize;i++){
       if(i<numsSize-1 && nums[i] == nums[i+1]){
          continue;
       }
       else{
           nums[k] = nums[i];
           k++;
       }

   }
   return k;
}
