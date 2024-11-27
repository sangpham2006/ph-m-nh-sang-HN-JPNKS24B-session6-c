#include <stdio.h>
int main(){
	int n;
	int sochan=0;
	int sole=0;
	
	for(int i=1; i<=5; i++){
		printf("so thu %d\n",i);
		scanf("%d",&n);
		
		if (n % 2 ==0){
			sochan++;
		} else{
			sole++;
		}
	}
	printf("so chan la %d, so le la %d", sochan,sole);
	return 0;
}
