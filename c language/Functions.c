#include <stdio.h>

void sum(int a, int b){
    int sum  = a+b;
    printf("%d",sum);
}

int sub(int a, int b){
    int sub = a-b;
    return(sub);
}

void printArray(int arr[]){
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<len;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){

    // sum(4,5);
    // sum(3,4);
    // sum(56,56);

    // printf("%d",sub(56,34));

    int ar[] = {1,2,3,4,5,6,7,8};
   

    printArray(ar);


    return 0;
}