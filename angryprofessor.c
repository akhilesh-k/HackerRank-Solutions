
#include <stdio.h>
int main(){
	int i,j,t,n,k,a,x=0;
	scanf("%d",&t);
	while(t--){
		x=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a<=0){
				x++;
			}
		}
		if(x<k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
