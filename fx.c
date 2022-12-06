#include <stdio.h>

float function(int x){
	return 3*x*x+2*x+1;
}

int main(){
	for (int i = 1; i < 10; i++){
		printf("f-%d = %f\n", i, function(i));
	}
	return 0;
}
