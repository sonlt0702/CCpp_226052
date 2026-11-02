#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	//Bài 4. Nhập vào ba số nguyên a, b, c. Tìm số lớn nhất trong ba số.
	int a = 0;
	int b = 0;
	int c = 0;

	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	printf("Nhap c: "); scanf("%d", &c);

	//int max = a > b ? a : b;
	//max = max > c ? max : c;
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("so lon nhat la: %d \n", max);

	/*
	Bài 5. Nhập vào chỉ số điện tiêu thụ trong tháng. Tính tiền điện theo quy tắc:

	0–50 kWh: 1.800đ/kWh
	51–100 kWh: 2.000đ/kWh
	101–200 kWh: 2.500đ/kWh
	Trên 200 kWh: 3.000đ/kWh
	*/

	int so_dien = 0;
	printf("nhap so dien tieu thu trong thang: ");
	scanf("%d", &so_dien);
	int tien_dien = 0;
	if (so_dien <= 50)
	{
		tien_dien = so_dien * 1800;
	}
	else if (so_dien <= 100)
	{
		tien_dien = 50 * 1800 + (so_dien - 50) * 2000;
	}
	else if (so_dien <= 200)
	{
		tien_dien = 50 * 1800 + 50 * 2000 + (so_dien - 100) * 2500;
	}
	else
	{
		tien_dien = 50 * 1800 + 50 * 2000 + 100 * 2500 + (so_dien - 200) * 3000;
	}

	printf("tien dien thang nay la: %d \n", tien_dien);

	/*
	* 
	Bài 6 — Menu bằng switch

	Tạo menu:
	===== MENU =====

	1. Cong
	2. Tru
	3. Nhan
	4. Chia
	yêu cầu người dung nhập 2 só a, b
	sau đó yêu cầu Người dùng nhập lựa chọn và in ra kết quả tương ứng
	*/
	printf("====== MENU ====== \n");
	printf("1. Cong \n2. Tru \n3. Nhan \n4. Chia\n");
	int a = 0;
	int b = 0;
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	int menu = 0;
	printf("Nhap lua chon phep tinh: "); scanf("%d", &menu);
	switch (menu)
	{
	case 1:
		printf("a + b = %d \n", a + b);
		break;
	case 2:
		printf("a - b = %d \n", a - b);
		break;
	case 3:
		printf("a * b = %d \n", a * b);
		break;
	case 4:
		b != 0 ?
			printf("a / b = %.1f \n", a * 1.0 / b)
			: printf("khong the chia cho 0 \n");
		break;
	default:
		printf("lua chon khong hop le \n");
		break;
	}

	/*
	Bài 7 — In số chẵn
	Yêu cầu người dùng nhập n và in ra tất cả số chẵn trong khoảng từ 1 đến n
	Nhập: n
	In tất cả số chẵn: 1 → n
	Ví dụ:
	n = 10
	*/

	int n = 0;
	printf("Nhap n: "); scanf("%d", &n);

	for (int i = 2; i <= n; i += 2)
	{
		//if (i % 2 == 0) {
		//}
			printf("%d ", i);
	}

	/*
	Bài 8 — Tổng từ 1 đến n
	Yêu cầu người dùng nhập n và in ra kết quả là tổng từ 1 đến n
	Ví dụ: 
	n = 5
	Output: 15
	*/

	int n = 0;
	printf("Nhap n: "); scanf("%d", &n);

	int tong = 0;
	for (int i = 1; i <= n;i++)
	{
		tong = tong + i;
	}

	printf("tong tu 1 den %d: %d \n", n, tong);
}