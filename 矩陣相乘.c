#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	unsigned int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6,a7,a8,a9,b7,b8,b9;
	printf("請輸入A[]\n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9);  /*可連續輸入*/
	printf("A陣列為%d,%d,%d,%d,%d,%d,%d,%d,%d\n",a1,a2,a3,a4,a5,a6,a7,a8,a9);
	printf("請輸入B[]\n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d",&b1,&b2,&b3,&b4,&b5,&b6,&b7,&b8,&b9);
	printf("B陣列為%1d,%1d,%1d,%1d,%1d,%1d,%1d,%1d,%1d\n",b1,b2,b3,b4,b5,b6,b7,b8,b9);
	int A[3][3]={{a1,a2,a3},{a4,a5,a6},{a7,a8,a9}};
	int B[3][3]={{b1,b2,a3},{b4,b5,a6},{b7,b8,a9}}; 
	int C[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int i,k,e;
	for(k=0;k<3;k++){
	for(i=0;i<3;i++){
	for(e=0;e<3;e++){
		             C[k][i]=C[k][i]+A[k][e]*B[e][i];
	}	            
	}
}
    for(k=0;k<3;k++){
	for(i=0;i<3;i++){
		printf("%3d\t",C[k][i]);
	}
	printf("\n");
}
	return 0;
}