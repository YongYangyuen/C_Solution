#include <stdio.h>

int get_least_pos_num(int nums[], int n);

int main() {
	int nums[] = {-3, 3, 2, 7, -1, 5, 8};
	int least_pos_num = 1;
	
	least_pos_num = get_least_pos_num(nums, 6);
	
	printf("%d", least_pos_num);
	
	return 0;
}

int get_least_pos_num(int nums[], int n) {
	int i, min_pos = 1, tmp = 1;
	
	do {
		tmp = min_pos;
		for(i = 0; i < n; i++) {
			if(nums[i] > 0) {
				if(nums[i] == min_pos) {
					min_pos++;
					break;
				}
			}
		}
	} while(tmp != min_pos);
	
	return min_pos;
}


