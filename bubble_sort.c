#include <stdio.h>

void print_array(int nums[], int length);
void bubble_sort(int nums[], int length);

int main() {
	int nums[] = {5, 3, 1, 2, 4, 7, 6, 0};
	int length = sizeof(nums) / sizeof(int);
	
	print_array(nums, length);
	bubble_sort(nums, length);
	print_array(nums, length);
	
	return 0;
}

void print_array(int nums[], int length) {
	int i;
	
	for(i = 0; i < length; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}

void bubble_sort(int nums[], int length) {
	int i, j;
	int tmp;
	
	for(i = 0; i < length; i++) {
		for(j = 0; j < length - 1; j++) {
			if(nums[j] > nums[j+1]) {
				tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;
			}
		}
	}
}

