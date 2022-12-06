#include <stdio.h>

int main(){
	int n;
	printf("Enter a number as value n: ");
	scanf("%d", &n);
	int count = 0;
	for (int x = 1; x <= 100; x++){
		if (x % n == 0){
			count++;
			printf("%d ",x);
			if (x % 5 == 0)
				printf("\n");
		}
	}
	printf("\nThere are %d number(s) divisible by %d.\n", count, n);
	return 0;
}
