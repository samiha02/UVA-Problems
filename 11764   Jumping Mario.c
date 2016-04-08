#include<stdio.h>

int main()

{
    int T,N,i,j,k,wall,hight[50],high,low,ccase = 1;

    scanf("%d",&T);

       while(T--){

            scanf("%d",&wall);

            for(i = 0 ; i < wall ; i++){

                scanf("%d",&hight[i]);
            }

       high = 0;
        low = 0;

        for(i = 0 ; i < wall-1 ; i++){

            if(hight[i] < hight[i+1])
                high++;

            else if(hight[i] > hight[i+1])
                low++;
        }

          printf("Case %d: %d %d\n",ccase,high,low);

          ccase++;
        }

    return 0;
}
