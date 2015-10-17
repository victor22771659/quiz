/* FIXME: Implement! */
#include<stdio.h>
#include<stdlib.h>

int nums[9]={-2,1,-3,4,-1,2,1,-5,4};
int maxSubArray(int nums[],int numsSize);

int main(){
    int max=0;
    max=maxSubArray(nums,9);
    printf("Sumation of maxSubArray=%d\n",max);
    return 0;
}

int maxSubArray(int nums[],int numsSize){
    int b = 0,sum =nums[0];
    for(int i=0;i<numsSize;i++){
    	if(b>0)
            b+=nums[i];
        else 
            b = nums[i];
        if(b>sum)
            sum = b;
        }
    return sum;
}
