#include<stdio.h>


int main() {
	int a;
	char ch;
	printf("請輸入一個整數:");
	scanf("%d", &a);
	fflush(stdin); /* 清空緩衝區內的資料 */
	printf("請輸入一個字元:");
	scanf("%c", &ch);
	printf("a=%d, c1=%c\n", a, ch);
	return 0;
}