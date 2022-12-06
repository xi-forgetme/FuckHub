#include <stdio.h>
int* compare(int num[], int len){
	int i, j, tmp;
	for (i = 1; i < len; i++){
		tmp = num[i];
		for (j = i; j > 0 && num[j - 1] > tmp; j--){
			num[j] = num[j - 1];
		}
		num[j] = tmp;
	}
	return num;
}

int main(){
	int students[10];
	printf("Enter 10 scores, ends with [Space]: ");
	for (int stu = 0; stu < 10; stu++){
		scanf("%d", &students[stu]);
	}
	int *stuScores;
	stuScores = compare(students, 10);
	for (int a = 0; a < 10; a++)
		printf("%d ",stuScores[a]);
	printf("\n");
	return 0;
}
