#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	//vd: in bảng cửu chương 
	
	for (int i = 0; i <= 10; i++)
	{
		printf("2 x %d = %d \n", i, 2*i);
		
	}
	// yc: in bảng cửu chương từ bảng cửu chương 2 đến bảng cửu chương 9

	for (int i = 2;i <= 9;i++) {
		printf("\nBang cuu chuong %d \n", i);
		if (i == 4) continue;

		for (int j = 1; j <= 10; j++) {
			printf("%d x %d = %d \n", i, j, i * j);
		}
	}

	// yc: yêu cầu người dùng nhập từ bàn phím số tự nhiên n
	// tính và in ra giai thừa của n (n!)
	int n = 0;
	printf("Nhap n: "); scanf("%d", &n);
	
	int gt = 1;
	for (int i = 1; i <= n; i++)
	{
		gt = gt * i; // 1*1*2*3*4...*n
	}
	printf("%d! = %d \n", n, gt);
}