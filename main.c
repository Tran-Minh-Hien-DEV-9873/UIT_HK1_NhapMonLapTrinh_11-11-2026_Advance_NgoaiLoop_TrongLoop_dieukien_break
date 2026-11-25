#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf("Dieu kien i = 1 \n");
	for(i = 1; i <= 5; i++)
	{
	    if(i == 3)
	    {
	    	printf("ket thuc loop ngay lap tuc voi i==3 va i la: %d \n",i );
	        break;
	        printf("ket thuc loop ngay lap tuc voi i==3 va i la: %d \n",i );
	    }
	
	    printf("Trong Loop: %d \n", i);
	}
	
	printf("Ngoai loop: %d", i);
	
	return 0;
}
