#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
int x1, v1, x2, v2;
fscanf(stdin,"%d %d %d %d", &x1, &v1, &x2, &v2);
if (v2 - v1 == 0) {
printf ("NO");
return 0;
}
double n = (x1 - x2) / (v2 - v1);
char * result = (n > 0 && (x1 - x2) % (v2 - v1) == 0) ? "YES" : "NO";
printf("%s\n", result);
return 0;
}
