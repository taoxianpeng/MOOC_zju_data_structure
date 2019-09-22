#include <stdio.h>
#include <stdlib.h>


int main(){
    int maxsize;
    int j=0;
    scanf("%d",&maxsize);
    int *list=(int*)malloc(sizeof(int)*maxsize);
    while(scanf("%d",&list[j])!= EOF && getchar() != '\n') j++;

    int maxSum_res,maxSum_this;
    int first_k=list[0],first,last;
    int k=0;
    first=last=0;
    maxSum_res=maxSum_this=0;
    for(int i=0; i<maxsize; i++){
        if(list[i]>=0) k=1;
        maxSum_this+=list[i];
        if(maxSum_res<maxSum_this){
                maxSum_res = maxSum_this;
                last = list[i];
                first=first_k;
        }
        if(maxSum_this<0){ 
            maxSum_this=0;
            first_k = list[i+1];
        }
    
            
        
    }
    if(!k) {
        first=list[0];
        last=list[maxsize-1];
    }
    printf("%d %d %d\n",maxSum_res,first,last);
    return 0;
}