#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr=20;
	int *y;
	
	y = calloc(arr, sizeof(int));
	
	if(!y){
		perror("memory tidak dapat dialokasikan dengan calloc\n");
		return -1;
	}
	else{
		printf("memori dapat dialokasikan menggunakan calloc\n");
		for (int i=0; i<arr; ++i) {
			printf("Masukkan angka %d: ", i + 1);
			scanf("%d", y + i);
		}
		for (int i=1; i<arr; ++i) {
			if (*y < *(y + i))
				*y = *(y + i);
		}
		printf("Element paling besar adalah %d\n", *y);
	}
	
	free(y);
	return 0;
}

		
