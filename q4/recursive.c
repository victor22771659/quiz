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
    static int sum=0;
    static int firNumsSize=0;
    static int flag=0;
    if(flag==0){
        sum=nums[numsSize-1];
        firNumsSize=numsSize;
        flag=1;
    }
    int tmp=0;
    if(numsSize>1)
        tmp=maxSubArray(nums+1,numsSize-1);
    if(tmp>0)
        tmp+=nums[0];
    else
        tmp=nums[0];
    if(tmp>sum)
        sum=tmp;
    if(numsSize<firNumsSize)
        return tmp;
    return sum;
}
