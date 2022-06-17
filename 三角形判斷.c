#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float a,b,c,d,e,f,g,h,i;
    printf("輸入三邊長\n");
	scanf("%f%f%f",&a,&b,&c);
	d=a+b;
	e=a+c;
	f=b+c;
	if(d>c&&e>b&&f>a){
		printf("可形成三角形\n");
		if(a>b&&a>c){
		if(f<a*a){
		printf("鈍角\n");
	}
		else if(f==a*a){
		 
		printf("直角\n");
	}
		else{
		
		printf("銳角\n");
	}
}
	else if(b>a&&b>c){
			if(e<b*b){
		printf("鈍角\n");
	}
		else if(e== b*b){
		 
		printf("直角\n");
	}
		else{
		
		printf("銳角\n");
	}
}  
	else{
		if(c*c>d){
		printf("鈍角\n");
	}
		else if(d==c*c){
		 
		printf("直角\n");
	}
		else{
		
		printf("銳角\n");
	}
}
}
	else{
		printf("無法形成三角形\n");
	}	
	return 0;
	}