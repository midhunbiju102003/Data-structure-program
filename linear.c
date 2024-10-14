#include <stdio.h>
int linearSearch(int array[],int size,int target){
    for(int i=0;i< size;i++){
        if (array[i]==target){
            return i;
        }
    }
}
int main(){
    int array[]={2,5,8,12,16,23,38,56,72,91};
    int size=sizeof(array);
    int target;
printf("Array elements:");
for(int i=0;i<size;i++){
    printf("%d",array[i]);
    }
    printf("\n");
    printf("enter the elements:");
    scanf("%d",&target);
    int result=linearSearch(array,size,target);
    if(result== -1){
        printf("Target isnot found.\n");
    }
    else{
        printf("Target element found at index %d.\n",result);
    }
    return 0;
}