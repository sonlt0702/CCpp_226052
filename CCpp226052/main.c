#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "lib.h"

void tang_mot(int* x)
{
	// 0x1001 : 0x1000
	*x = *x + 1;
	printf("Bien x: %d \n", *x);
}

void hoan_doi(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void chia_lay_du(int a, int b, int* thuong, int* du)
{
	*thuong = a / b;
	*du = a % b;
}

void main()
{
	int a = 5; // 0x1000 : 5
	//tang_mot(a); // truyền tham trị
	tang_mot(&a); // truyền tham chiếu
	printf("Bien a: %d \n", a);

	int m = 6;
	int n = 8;
	hoan_doi(&m, &n);
	printf("Bien m: %d \n", m);
	printf("Bien n: %d \n", n);

	int x = 10;
	int y = 3;
	int thuong = 0;
	int du = 0;

	chia_lay_du(x, y, &thuong, &du);
	printf("%d chia %d bang %d du %d \n", x, y, thuong, du);

	//in_duong_ke(20);
	//printf("Bang Diem \n");
	//in_duong_ke(20);
	//float diem_tb1 = tinh_diem_tb(8, 7, 7);
	//printf("Diem trung binh ban 1: %.1f, xep loai: %c \n", diem_tb1, xep_loai(diem_tb1));
	//float diem_tb2 = tinh_diem_tb(9, 6, 7);
	//printf("Diem trung binh ban 2: %.1f, xep loai: %c \n", diem_tb2, xep_loai(diem_tb2));
	//float diem_tb3 = tinh_diem_tb(9, 6, 5);
	//printf("Diem trung binh ban 3: %.1f, xep loai: %c \n", diem_tb3, xep_loai(diem_tb3));

}
