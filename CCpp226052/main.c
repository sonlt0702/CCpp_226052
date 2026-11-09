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

	float so_tien_gui = 0;
	float lai_suat = 0;
	int so_nam = 0;

	float so_tien_nhan_duoc = 0;

	printf("Nhap so tien gui: "); scanf("%f", &so_tien_gui);
	printf("Nhap lai suat (%%/nam): "); scanf("%f", &lai_suat);
	printf("Nhap so nam gui: "); scanf("%d", &so_nam);
	so_tien_nhan_duoc = so_tien_gui;
	for (int i = 1; i <= so_nam; i++)
	{
		so_tien_nhan_duoc = so_tien_nhan_duoc + so_tien_nhan_duoc * lai_suat / 100;
		printf("So tien nhan duoc sau %d nam: %.1f \n", i, so_tien_nhan_duoc);
	}

	/*
	Đề bài: Nhập vào một số tự nhiên n bất kì,
	kiểm tra số đó có phải là số nguyên tố hay không?
	(số nguyên tố là số chỉ chia hết cho 1 và chính nó)
	*/
	int n = 0;
	printf("Nhap n: "); scanf("%d", &n);

	int kiem_tra_so_nguyen_to = 1;
	if (n < 2) {
		printf("n khong hop le! \n");
	}
	else if (n == 2)
	{
		printf("2 la so nguyen to \n");
	}
	else
	{
		for (int i = 2; i < n / 2; i++)
		{
			if (n % i == 0)
			{
				kiem_tra_so_nguyen_to = 0;
				printf("Uoc khac 1: %d \n", i);
				break;
			}
		}
		

		if (kiem_tra_so_nguyen_to)
		{
			printf("%d la so nguyen to \n", n);
		}
		else
		{
			printf("%d khong la so nguyen to \n", n);
		}
	}

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

	/*
	6. Viết chương trình tìm ước số chung lớn nhất của 2 số nguyên
	Đề bài: Nhập vào 2 số nguyên A, B. in ra màn hình ước số chung lớn nhất của A và B
	*/

	int a = 0;
	int b = 0;

	printf("Nhap A: "); scanf("%d", &a);
	printf("Nhap B: "); scanf("%d", &b);
	if (a <= 0 || b <= 0) 
	{
		printf("Gia tri A, B phai la so duong \n");
	}

	int min = a > b ? b : a;

	for (int i = min; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("UCLN: %d \n", i);
			break;
		}
	}


	/*
	8 Viết chương trình tìm bội chung nhỏ nhất của 2 số nguyên
	Đề bài: Nhập vào 2 số nguyên A, B. in ra màn hình bội chung nhỏ nhất của A và B
	*/

	int a = 0;
	int b = 0;

	printf("Nhap A: "); scanf("%d", &a);
	printf("Nhap B: "); scanf("%d", &b);
	if (a <= 0 || b <= 0)
	{
		printf("Gia tri A, B phai la so duong \n");
	}

	int max = a > b ? a : b;

	for (int i = max; i <= a * b;i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("BCNN: %d \n", i);
			break;
		}
	}

	/*
	7. Viết chương trình tính tích phân của f(x) = x^2.
	từ a đến b theo phương pháp hình than với tần số lấy mẫu 1000 lần
	Đề bài: Nhập vào 2 số nguyên a, b. 
	in ra màn hình kết quả của tích phân hàm f(x) trong khoảng từ a đến b.
	*/

	printf("Chuong trinh tinh tich phan cua ham f(x) = x^2 tren doan a, b \n");

	int a = 0;
	int b = 0;
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);

	int n = 1000;
	float h = (b - a) * 1.0 / n;
	float tong = 0;

	for (int i = 0; i < n; i++)
	{
		float daybe = pow((a + h*i), 2);
		float daylon = pow((a + h*(i+1)), 2);
		tong += (daybe + daylon) * h / 2;
	}
	printf("Ket qua la: %.2f \n", tong);

	/*
	9. Viết chương trình mô phỏng việc trả tiền của máy ATM.
	số tiền nhập vào phải là bội số của 50000. 
	số tiền phải trả về đầy đủ các mệnh giá từ 50000 đến 500000
	In ra số lượng tờ tiền được rút.
	VD: người dùng nhập vào 1000000.
	In ra:
	2 x 50000
	2 x 100000
	1 x 200000
	1 x 500000

	*/

	printf("chuong trinh mo phong viec tra tien cua may ATM \n");
	int n = 0;
	printf("Nhap so tien (phai la boi so cua 50000 va lon hon 850000): ");
	scanf("%d", &n);

	if (n < 850000 || n % 50000 != 0)
	{
		printf("So tien chua hop le! \n");
	}
	else
	{
		int to50 = 1;
		int to100 = 1;
		int to200 = 1;
		int to500 = 1;
		n -= 850000;

		while (n > 0)
		{
			if (n >= 500000)
			{
				to500++;
				n -= 500000;
			}
			if (n >= 200000)
			{
				to200++;
				n -= 200000;
			}
			if (n >= 100000)
			{
				to100++;
				n -= 100000;
			}
			if (n >= 50000)
			{
				to50++;
				n -= 50000;
			}
		}
		printf("So to 500,000: %d \n", to500);
		printf("So to 200,000: %d \n", to200);
		printf("So to 100,000: %d \n", to100);
		printf("So to 50,000: %d \n", to50);

	}

}