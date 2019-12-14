#include <stdio.h>
#include <stdlib.h>
#define lil long long
int main()
{

    //This is good but better speed is under of this code
    lil int i,n;
    scanf("%lld",&n);
    lil int *a=malloc(200000000*sizeof(lil int));
    for(i=0; i<200000000; i++)
    {
        *a=0;
        a++;
    }
    a-=200000000;
    for(i=0; i<n; i++)
    {
        lil x;
        scanf("%lld",&x);
        a[x]=1;
    }
    for(i=0; i<200000000; i++)
        if(a[i])
            printf("%lld ",i);

    return 0;




    //This is the best one :
    /*

    lil n,mx,i;
    scanf("%lld",&n);
    lil int *a=malloc(200000000*sizeof(lil int));
    mx=0;
    for(i=0;i<200000000;i++){
        *a=0;
        a++;
    }
    a-=200000000;
    for(i=0;i<n;i++){
        lil x;
        scanf("%lld",&x);
        if(x>mx)
            mx=x;
        a[x]=1;
    }
    for(i=0;i<=mx;i++){
        if(*a)
            printf("%lld ",i);
        a++;
    }
    return 0;
    */


}
