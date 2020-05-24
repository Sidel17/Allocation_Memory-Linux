#include <stdio.h>
#include <stdlib.h>

int main(){
	int *x, num_element=2;
	x = malloc (num_element * sizeof(int));
	int jumlah, i;
	
	if(!x){
		perror("memory tidak dapat dialokasikan dengan malloc\n");
		return -1;
	}
	else{
		printf("memori dapat dialokasikan menggunakan malloc\n");
		for(i=0;i<num_element;i++){	
			printf("Angka %d: ",i+1);
			scanf("%d",(x+i));
		}
		jumlah = 0;
		
		for(i=0;i<num_element;i++){
			jumlah+=*(x+i);
		}
		printf("Jumlah nya adalah: %d\n",jumlah);
	}
	free(x);
	return 0;
}
