#include <stdio.h>

void compare(int nums[], int len){
	int i,j,tmp;
	for (i = 0; i < len - 1; i++){
		for (j = 0; j < len - i - 1; j++){
			if (nums[j] > nums[j + 1]){
				tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}
}

int main(){
	int arr[] = {20, 14, 32, 9, 11, 3};
	int len = (int)sizeof(arr) / sizeof(*arr);
	compare(arr, len);
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
