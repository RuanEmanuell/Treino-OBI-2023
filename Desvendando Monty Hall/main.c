#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
	// your code here
	int n, c, res;
	scanf("%d", &n);
 
	while(n>0){
 
		scanf("%d", &c);
 
		if(c==2 || c==3){
			res++;
		}
		n--;
	}
 
	printf("%d\n", res);
 
 
 
	return 0;
}
 