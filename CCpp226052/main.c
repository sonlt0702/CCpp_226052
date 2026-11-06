#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	/*
	Tính tiền gửi ngân hàng sau n năm
	Đề bài: Nhập vào số tiền gửi ban đầu, lãi suất và số năm gửi tiền, 
	hãy tính số tiền nhận được sau n năm (biết lãi tính theo hình thức lãi kép).
	Biết lãi hiện tại của Viettinbank là 8.2%/năm
	*/

	//10 000 000 (10%)
	//10 000 000 + 1 000 000 = 11 000 000
	//11 000 000 + 1 100 000 = 12 100 000

	// a*(1+ls)^n

	//float so_tien_gui = 0;
	//float lai_suat = 0;
	//int so_nam = 0;

	//float so_tien_nhan_duoc = 0;

	//printf("Nhap so tien gui: "); scanf("%f", &so_tien_gui);
	//printf("Nhap lai suat (%%/nam): "); scanf("%f", &lai_suat);
	//printf("Nhap so nam gui: "); scanf("%d", &so_nam);
	//so_tien_nhan_duoc = so_tien_gui;
	//for (int i = 1; i <= so_nam; i++)
	//{
	//	so_tien_nhan_duoc = so_tien_nhan_duoc + so_tien_nhan_duoc * lai_suat / 100;
	//	printf("So tien nhan duoc sau %d nam: %.1f \n", i, so_tien_nhan_duoc);
	//}

	/*
	Đề bài: Nhập vào một số tự nhiên n bất kì,
	kiểm tra số đó có phải là số nguyên tố hay không?
	(số nguyên tố là số chỉ chia hết cho 1 và chính nó)
	*/
	//int n = 0;
	//printf("Nhap n: "); scanf("%d", &n);

	//int kiem_tra_so_nguyen_to = 1;
	//if (n < 2) {
	//	printf("n khong hop le! \n");
	//}
	//else if (n == 2)
	//{
	//	printf("2 la so nguyen to \n");
	//}
	//else
	//{
	//	for (int i = 2; i < n / 2; i++)
	//	{
	//		if (n % i == 0)
	//		{
	//			kiem_tra_so_nguyen_to = 0;
	//			printf("Uoc khac 1: %d \n", i);
	//			break;
	//		}
	//	}
	//	

	//	if (kiem_tra_so_nguyen_to)
	//	{
	//		printf("%d la so nguyen to \n", n);
	//	}
	//	else
	//	{
	//		printf("%d khong la so nguyen to \n", n);
	//	}
	//}

	/*
	5. In ra các số nguyên tố nhỏ hơn n
	Đề bài: Nhập vào một số tự nhiên n bất kì, 
	in ra màn hình các số nguyên tố nhỏ hơn n theo thứ tự tăng dần (sử dụng vòng lặp)
	vd: nhập 10 thì in ra "cac so nguyen to la 2 3 5 7"
	*/

	int n = 0;
	printf("Nhap n: "); scanf("%d", &n);

	if (n < 2) {
		printf("khong co so nguyen to nao nho hon n \n");
	}
	else
	{
		printf("cac so nguyen to la: ");
		for (int i = 2; i <= n; i++)
		{
			int kiem_tra_so_nguyen_to = 1;
			for (int j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					kiem_tra_so_nguyen_to = 0;
					break;
				}
			}
			if (kiem_tra_so_nguyen_to)
			{
				printf("%d ", i);
			}
		}
	}


}