#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[1000],n,sum=0,i; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
         scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    
    return 0;
}
