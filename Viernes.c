#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){

	float num=atof(argv[1]);
	int count=atof(argv[2]);
	float mem=atof(argv[3]);
	float suma=0;
	float prom=atof(argv[4]);
	float min=atof(argv[5]);
	float max=atof(argv[6]);
	
	for(count=1; count<=num; count++){
	suma = suma + mem;
	prom=((suma/num));
	if(count == 1){
		min = num;
		max = num;
	}else{
		if(num>max){
			max = num;
		}
		if(num < min){
			min=num;
		}
	}
	}
	
	printf("El promedio es: %.2f", prom);
	return 0;
	}
