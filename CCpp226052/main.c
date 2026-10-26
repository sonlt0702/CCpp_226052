#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int diem = 7.5;

	if (diem > 10)
	{
		printf("diem khong hop le \n");
	}
	else if (diem >=8)
	{
		printf("loai gioi \n");
	}
	else if (diem >= 6.5)
	{
		printf("loai kha \n");
	}
	else if (diem >= 5)
	{
		printf("loai trung binh \n");
	}
	else
	{
		printf("loai yeu \n");
	}

	// Bài 1
	// viết chương trình giải pt bậc 2: ax^2 + bx + c = 0 
	// với a,b,c là số nguyên nhập từ bàn phím
	// tính delta = b^2 - 4ac
	// nếu delta > 0 thì pt có 2 nghiem x1 = (-b+sqrt(delta))/2a, x2 = (-b-sqrt(delta))/2a
	// nếu delta = 0 thì pt có 1 nghiem kep x1 = x2 = -b / 2a
	// nếu delta < 0 thì pt vô nghiệm
	// cần #include <math.h>
	int a = 0;
	int b = 0;
	int c = 0;

	int delta = 0;

	printf("chuong trinh giai phuong trinh bac 2 ax^2+bx+c = 0 \n");
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	printf("Nhap c: "); scanf("%d", &c);

	delta = b * b - 4 * a * c;

	if (delta > 0)
	{
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		printf("pt co 2 nghiem phan biet x1 = %.2f, x2 = %.2f \n", x1, x2);
	}
	else if (delta == 0)
	{
		float x = -b / (2.0 * a) ;
		printf("pt co 1 nghiem kep x1 = x2 = %.2f \n", x);
	}
	else
	{
		printf("pt vo nghiem \n");
	}





}