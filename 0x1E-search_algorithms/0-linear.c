#include <stdio.h>

int linear_search(int *array, size_t size, int value){
	if (array == NULL) {
		return -1;
	}

	for (size_t i = 0; i < size; i++){
		printf("Comparing %d with %d\n", value, array[i]);
		if (array[i] == value){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {5, 2, 8, 1, 3};
	size_t size = sizeof(arr) / sizeof(arr[0]);
	int value = 8;

	int index = linear_search(arr, size, value);

	if (index != -1) {
		printf("Value %d found at index %d\n", value, index);
	} else {
		printf("Value %d not found in the array\n", value);
	}
	return 0;
}
	
