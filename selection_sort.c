#include <stdio.h>

void print_array(int nums[], int length);
void selection_sort(int nums[], int length);

int main() {
	int nums[] = {5, 3, 1, 2, 4, 7, 6, 0};
	int length = sizeof(nums) / sizeof(int);
	
	print_array(nums, length);
	selection_sort(nums, length);
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

void selection_sort(int nums[], int length) {
	int i, j;
	int tmp;
	
	for(i = 0; i < length - 1; i++) {
		for(j = i + 1; j < length; j++) {
			if(nums[i] > nums[j]) {
				tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}
}

