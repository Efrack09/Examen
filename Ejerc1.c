#include <stdlib.h>
#include <stdio.h>
#include <string.h>

	int main(int argc, char** argv){
		
		float sum = atof(argv[1]);
		float max = atof(argv[2]);
		float min = atof(argv[3]);
		float prom = atof(argv[4]);
		int count = atoi(argv[5]);
		
		int i;
		for(i = 1; i<argc; i++){
			
			float num = atof(argv[i]);
			count++;
			sum = sum + sum;
			if(i == 1){
				min = num;
				max = num;
			}else{
				if(num>max){
					max=num;
				}
				if(num<min){
					min=num;
				}
			}
		}	
		prom =((sum/count));	
		printf("El promedio es: %.0f\n", prom);
		printf("El numero maximo es: %.0f\n", max);
		printf("El numero minimo es: %.0f\n", min);
		return 0;
	}
