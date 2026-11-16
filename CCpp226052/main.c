#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	//int arr[100] = { 0 };
	//int n = 0;
	//printf("Nhap so luong phan tu n cua mang: ");
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	printf("Nhap arr[%d]: ", i);
	//	scanf("%d", &arr[i]);
	//}
	/*
	Bai 5: Dem so nguyen to trong mang
	Nhap n (1 <= n <= 100) va n so nguyen vao mang. In cac so nguyen to trong mang va dem so luong.
	Neu khong co, in "Khong co so nguyen to".
	Vi du:
	Input:
	7
	2 4 5 8 11 15 17
	Output:
	Cac so nguyen to: 2 5 11 17
	So luong: 4
	*/

	//int so_luong = 0;

	//for (int i = 0; i < n; i++)
	//{
	//	
	//	if (arr[i] <= 1)
	//	{
	//		continue;
	//	}
	//	else {
	//		int kiem_tra = 1;
	//		for (int j = 2; j <= arr[i] / 2; j++)
	//		{
	//			if (arr[i] % j == 0)
	//			{
	//				kiem_tra = 0;
	//			}
	//		}
	//		if (kiem_tra)
	//		{
	//			printf("%d ", arr[i]);
	//			so_luong++;
	//		}
	//	}
	//}
	//if (so_luong == 0)
	//{
	//	printf("Khong co so nguyen to! \n");
	//}
	//else {
	//	printf("\nSo luong: %d \n", so_luong);
	//}

	/*
	Bai 6: Dao nguoc mang
	Nhap n (1 <= n <= 100) va n so nguyen vao mang.
	Dao nguoc thu tu cac phan tu ngay trong mang ban dau (khong dung mang phu), sau do in mang.
	Vi du:
	Input:
	5
	1 2 3 4 5
	Output:
	5 4 3 2 1
	*/

	//for (int i = 0; i < n/2; i++)
	//{
	//	int temp = arr[i];
	//	arr[i] = arr[n - i - 1];
	//	arr[n - i - 1] = temp;
	//}
	//printf("Mang sau khi dao nguoc: { ");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("} \n");

	/*
	Bai 7: Tim kiem phan tu trong mang
	Nhap n (1 <= n <= 100), n so nguyen va so nguyen x. 
	In tat ca vi tri x xuat hien trong mang (vi tri tinh tu 1). 
	Neu khong co, in "Khong tim thay".
	Vi du:
	Input:
	6
	3 5 3 7 3 9
	3
	Output:
	Vi tri: 1 3 5
	*/

	//int x = 0;
	//printf("Nhap so can tim: ");
	//scanf("%d", &x);

	//printf("Vi tri: ");
	//int kiem_tra = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	if (arr[i] == x)
	//	{
	//		printf("%d ", i + 1);
	//		kiem_tra = 1;
	//	}
	//}
	//if (kiem_tra == 0)
	//{
	//	printf("\nKhong tim thay! \n");
	//}

	/*
	Bài 8. Kiểm tra mảng tăng dần
	Kiểm tra mảng có tăng nghiêm ngặt hay không, 
	nghĩa là mọi phần tử đứng sau đều lớn hơn phần tử đứng trước.
	vd: 1 3 5 7 9 -> Mang tang dan
	*/
	//int kiem_tra = 1;
	//for (int i = 1; i < n; i++)
	//{
	//	if (arr[i - 1] > arr[i])
	//	{
	//		kiem_tra = 0;
	//		break;
	//	}
	//}
	//if (kiem_tra)
	//{
	//	printf("mang tang dan \n");
	//}
	//else
	//{
	//	printf("mang khong tang dan \n");
	//}
	/*
	* Bài 9. Sắp xếp mảng tăng dần
	* Sắp xếp các phần tử theo thứ tự từ nhỏ đến lớn, không sử dụng hàm sắp xếp có sẵn.
	* vd: 8 3 1 9 4 2 -> 1 2 3 4 8 9
	* i = 0, j = 1 -> arr[i] = 8 > arr[j] = 3 -> đảo -> 3 8 1 9 4 2
	* i = 0, j = 2 -> arr[i] = 3 > arr[j] = 1 -> đảo -> 1 8 3 9 4 2
	* i = 0, j = 3 -> arr[i] = 1 > arr[j] = 9 -> ko đảo -> 1 8 3 9 4 2
	* ...
	* i = 1, j = 2 -> arr[i] = 8 > arr[j] = 3 -> đảo -> 1 3 8 9 4 2
	* i = 1, j = 3 -> arr[i] = 3 > arr[j] = 9 -> ko đảo -> 1 3 8 9 4 2
	*/
	//for (int i = 0; i < n; i++) {
	//	for (int j = i+1; j < n; j++) {
	//		if (arr[i] > arr[j]) {
	//			int tam = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = tam;
	//		}
	//	}
	//}

	//printf("Mang sau khi sap xep: ");
	//for (int i = 0; i < n; i++) {
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");
	/*
	* Bài 10. Xóa phần tử tại vị trí k
	* Nhập mảng n phần tử và vị trí k (tính từ 1). 
	* Xóa phần tử ở vị trí k, dịch các phần tử phía sau sang trái, rồi in mảng mới.
	* vd: 10 20 30 40 50, 3 -> 10 20 40 50
	*/

	/*
	* Bài 11. Chèn phần tử vào mảng
	* Nhập mảng n phần tử (1 ≤ n < 100), số nguyên x và vị trí k từ 1 đến n+1.
	* Chèn x vào vị trí k.
	* vd: 10 20 30 40 50, 99, 3 -> 10 20 99 30 40 50
	*/
	//int x = 0;
	//int k = 0;
	//printf("Nhap so nguyen x can chen: ");
	//scanf_s("%d", &x);
	//printf("Nhap vi tri k can chen: ");
	//scanf_s("%d", &k);
	//if (k < 1 || k > n + 1) {
	//	printf("Vi tri k khong hop le!\n");
	//	return 1;
	//}

	//for (int i = n; i >= k; i--)
	//{
	//	arr[i] = arr[i - 1];
	//}
	//arr[k - 1] = x;
	//n++;
	//printf("Mang sau khi chen la: ");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	/*
	* Bài 12. Đếm số lần xuất hiện
	* In mỗi giá trị phân biệt trong mảng cùng số lần xuất hiện của nó, 
	* theo thứ tự xuất hiện đầu tiên. (Giả sử mảng chỉ chứa số nguyên dương <= 10)
	* Không dùng mảng phụ.
	* vd: 2 3 2 5 3 2 7 5 
	* -> 2: 3 lan
		 3: 2 lan
		 5: 2 lan
		 7: 1 lan
	*/

	//int arr1[] = { 2, 3, 2, 5 ,3 ,2, 7, 5 };
	//int arr2[11] = { 0 };

	//for (int i = 0;i < 8; i++)
	//{
	//	int index = arr1[i];
	//	arr2[index]++;
	//}
	//for (int j = 0; j < 11; j++)
	//{
	//	if (arr2[j] > 0)
	//	{
	//		printf("%d: %d lan xuat hien \n", j, arr2[j]);
	//	}
	//}
	/*
	* Bài 13. Menu quản lý danh sách số nguyên
	* Tạo menu cho phép: 
		1. Nhập mảng; 
		2. Xuất mảng; 
		3. Tìm max/min;
		4. Đếm số chẵn/lẻ;
		5. Sắp xếp tăng dần; 
		6. Tìm kiếm x; 
		0. Thoát. 
		Menu lặp lại cho đến khi chọn 0. Không được xử lý mảng trước khi nhập.
	*/

	int arr[100] = { 0 };

	int lua_chon = 0;
	int da_nhap = 0;
	int n = 0;
	printf("---------Menu quan ly danh sach so nguyen--------\n");
	do {
		printf("1. Nhap mang\n");
		printf("2. Xuat mang\n");
		printf("3. Tim max/min\n");
		printf("4. Dem so chan/le\n");
		printf("5. Sap xap tang dan\n");
		printf("6. Tim kiem x\n");
		printf("0. Thoat\n");
		printf("Hay nhap lua chon: ");
		scanf("%d", &lua_chon);
		while (lua_chon > 6 || lua_chon < 0)
		{
			printf("Hay nhap lua chon trong khoang 0-6: ");
			scanf("%d", &lua_chon);
		}

		switch (lua_chon)
		{
		case 1:
			printf("Nhap so luong phan tu: ");
			scanf("%d", &n);
			for (int i = 0; i < n; i++)
			{
				printf("Nhap arr[%d]: ", i);
				scanf("%d", &arr[i]);
			}
			da_nhap = 1;
			printf("Da nhap mang xong! \n");
			break;
		case 2:
			if (!da_nhap)
			{
				printf("Vui long chon 1 de nhap mang truoc!\n");
				break;
			}
			printf("Mang da nhap la: { ");
			for (int i = 0; i < n; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("}\n");
			break;
		case 3:
			if (!da_nhap)
			{
				printf("Vui long chon 1 de nhap mang truoc!\n");
				break;
			}
			int max = arr[0];
			int min = arr[0];
			for (int i = 0; i < n; i++)
			{
				if (arr[i] > max) max = arr[i];
				if (arr[i] < min) min = arr[i];
			}
			printf("Max: %d \n", max);
			printf("Min: %d \n", min);
			break;
		case 4:
			if (!da_nhap)
			{
				printf("Vui long chon 1 de nhap mang truoc!\n");
				break;
			}
			int chan = 0;
			int le = 0;
			for (int i = 0; i < n; i++)
			{
				if (arr[i] % 2 == 0) 
				{
					chan++;
				}
				else
				{
					le++;
				}
			}
			printf("So chan: %d \n", chan);
			printf("So le: %d \n", le);
			break;
		case 5:
			if (!da_nhap)
			{
				printf("Vui long chon 1 de nhap mang truoc!\n");
				break;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = i; j < n; j++)
				{
					if (arr[i] > arr[j])
					{
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
			printf("Mang da duoc sap xep tang dan!\n");
			break;
		case 6:
			if (!da_nhap)
			{
				printf("Vui long chon 1 de nhap mang truoc!\n");
				break;
			}
			int x = 0;
			printf("Nhap x: "); scanf("%d", &x);
			int tim_thay = 0;
			for (int i = 0; i < n; i++)
			{
				if (arr[i] == x) {
					printf("Da tim thay x tai vi tri %d\n", i);
					tim_thay = 1;
				}
			}
			if (!tim_thay) printf("Khong tim thay x trong mang\n");
			break;
		case 0:
			printf("Cam on ban da su dung chuong trinh!\n");
			break;
		default:
			break;
		}

	} while (lua_chon != 0);


}