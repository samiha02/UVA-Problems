#include<stdio.h>

int main()

{
    int N,i,j,arr[1000],M;

    while(scanf("%d",&N)!=EOF){

    for(i = 0 ; i < N ; i++){

        scanf("%d",&arr[i]);
    }

    M = 0;
    for(i = 0 ; i < N-1 ; i++){

    for(j = i+1 ; j < N ; j++){

        if(arr[i] > arr[j]){

        M++;
        }
    }
}
    printf("Minimum exchange operations : %d\n",M);

    }

    return 0;
}
