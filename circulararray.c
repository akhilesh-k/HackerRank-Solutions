#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(void)
{
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);
    
    int arr[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    
    int toprint[q];
    for(int i = 0; i < q; i++){
       scanf("%d",&toprint[i]);
    }
    
    int arr2[n];
    
    for(int i = 0; i < n; i++){
       arr2[(i+k)%n] = arr[i];
    }
    
    for(int i = 0; i < q; i++){
        printf("%d\n", arr2[(toprint[i])]);
    }
}
