#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Point{
	float x,y,d;
};
typedef struct Point PT;
PT O={0,0,0};
float distance(PT A,PT B){
	float d=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
    return d;
}
int main(){
	int i,j;
	float pos,d;
	PT A[5];
	for(i=0;i<5;i++){
		printf("輸入第%d個變數\n",i+1);
		printf("x=");
		scanf("%f",&A[i].x);
		printf("y=");
		scanf("%f",&A[i].y);
		d=distance(A[i],O);
		printf("d=%f\n",d);
		A[i].d=d;
		}
for(i=0;i<5;i++){
	for(j=i;j<5;j++){
		if(A[j].d>=A[i].d){
			pos=A[j].d;
			A[j].d=A[i].d;
			A[i].d=pos;
		}
	}
}
printf("distance由大排到小\n");
for(i=0;i<5;i++){
	printf("(%f,%f) d=%f\n",A[i].x,A[i].y,A[i].d);
}
}