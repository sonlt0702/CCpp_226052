#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int mssv = 0;
	float diem = 0;
	printf("Nhap vao mssv: ");
	scanf("%d", &mssv);
	printf("Nhap diem: ");
	scanf("%f", &diem);

	printf("MSSV: %d, diem: %.2f \n", mssv, diem);

	// Bài 1: yêu cầu user nhập vào 1 kí tự bất kì
	// in ra màn hình console kí tự đó hệ 10
	// in ra màn hình console kí tự đó hệ 16
	char c;
	printf("Nhap ki tu bat ky: ");
	scanf("%c", &c);

	printf("he 10: %d \n", c);
	printf("he 16: %x \n", c);
	printf("ascii : %c \n", c);
	
	// bài 2: yêu cầu nhập vào 2 số nguyên a, b
	// in ra tổng, hiệu, tích, thương cho mỗi dòng
	// + - * /

	int a = 0;
	int b = 0;
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);

	printf("Tong: %d \n", a + b);
	printf("Hieu: %d \n", a - b);
	printf("Tich: %d \n", a * b);
	printf("Thuong: %f \n", (float) a / b);


}