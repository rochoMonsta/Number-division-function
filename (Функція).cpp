#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int to_Rozdil (int d){
	int a, b, c, x, y, z;
	int suma=0;
	if (d>100 && d<1000){
		a=d/100;
		b=(d%100)/10;
		c=d%10;
		x=a%2;
		y=b%2;
		z=c%2;
		if (x!=0){
			if (a==9){
				a=0;	
			}else{
				a+=1;
			}
		}
		if (y!=0){
			if (b==9){
				b=0;
			}else{
				b+=1;
			}
		}
		if (z!=0){
			if (c==9){
				c=0;
			}else{
				c+=1;
			}
		}
		suma=a*100+b*10+c;
	}
	if (d>9 && d<100){
		a=(d%100)/10;
		b=d%10;
		x=a%2;
		y=b%2;
		if (x!=0){
			if (a==9){
				a=0;
			}else{
				a+=1;
			}
		}
		if (y!=0){
			if (b==9){
				b=0;
			}else{
				b+=1;
			}
		}
		suma=a*10+b;
	}
	if (d>0 && d<10){
		x=d%2;
		if (x!=0){
			if (d==9){
				d=0;
			}else{
				d+=1;
			}
			suma+=d;
		}
	}
	return suma;
	
}
int main(void){
	printf("----FUNKCIYA ZAMINU NEPARNUH CHISEL----\n");
	int mas[10], i, chislo, d;
	srand(time(NULL));
	printf("\n---Vash Masuv Random Chisel---\n");
	for (i=0; i<10; i++){
		chislo= 1+ rand() %999;
		mas[i]=chislo;
		printf("  %d  ", mas[i]);
		chislo=0;
	}
	printf("\n");
	printf("\n");
	printf("---Vash Masuv Zminenuh Randomnuh Chisel---\n");
	for (i=0; i<10; i++){
		d=mas[i];
		mas[i] = to_Rozdil (d);
		printf("  %d  ", mas[i]);
	}
	return 0;
}
