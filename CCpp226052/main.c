#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	/*
	# Bài 16: Trò chơi đoán số ⭐

	Chương trình sinh ra một số bí mật trong khoảng 0–99. Người dùng liên tục nhập số dự đoán cho đến khi đoán đúng.
	Sau mỗi lần nhập:
	Nếu số nhập nhỏ hơn số bí mật → thông báo "Lon hon"
	Nếu số nhập lớn hơn → thông báo "Nho hon"
	Nếu đúng → thông báo số lần đoán.
	*/

	//srand(time(NULL));
	//int x = rand() %100;
	//int n = 0;
	//int count = 0;
	//do
	//{
	//	printf("nhap so ban doan: ");
	//	scanf("%d", &n);
	//	count++;
	//	if (n > x) printf("Nho hon \n");
	//	if (x > n) printf("Lon hon \n");

	//} while (n != x);

	//printf("Chuc mung ban da nhap dung so bi mat sau %d lan \n", count);


	// Bài tập giả lập cây ATM

	int so_du_atm = 20000000;
	int mat_khau_sys = 123456;

	int mat_khau_usr = 0;

	int step = 1;
	int so_tien_rut = 0;
	int count = 0;

	while (step != 0) 
	{
		switch (step)
		{
		case 1:
			printf("Nhap mk: "); scanf("%d", &mat_khau_usr);
			if (mat_khau_usr == mat_khau_sys) {
				step = 2;
			}
			else
			{
				step = 6;
			}
			break;
		case 2:
			printf("Nhap so tien muon rut: "); scanf("%d", &so_tien_rut);
			step = 3;
			break;
		case 3:
			if (so_tien_rut > so_du_atm) 
			{
				printf("So du cua ATM khong du, hay nhap so tien nho hon! \n");
				step = 2;
			}
			else
			{ 
				step = 4;
			}
			break;
		case 4:
			printf("Ban da rut duoc %d VND \n", so_tien_rut);
			step = 5;
			break;

		case 5:
			printf("ket thuc! \n");
			step = 0;
			break;
		case 6:
			count++;
			printf("Ban da nhap sai mat khau! \n");
			if (count == 4)
			{
				printf("Ban da nhap sai qua 3 lan! \n");
				step = 5;
				break;
			}
			printf("Ban co muon thu lai khong(y/n): ");
			char tiep_tuc = 0;
			scanf(" %c", &tiep_tuc);
			if (tiep_tuc == 'y')
			{
				step = 1;
			}
			else
			{
				step = 5;
			}
			break;
		default:
			break;
		}
		
	}
}