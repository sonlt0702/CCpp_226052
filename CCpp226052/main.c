#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	// Mảng
	// Mảng là 1 vùng nhớ gồm nhiều phần tử liên tiếp nhau và cùng kiểu dữ liệu
	// vd: int a[] = {10,20,30,40,50};

	// Mảng phải có kích thước cố định 
	// truy cập vào từng phần tử thông qua index
	// index bắt đầu từ 0

	//int a[] = { 10,20,30,40,50,60}; // 24 byte = 6 phần tử x 4 byte

	//int len = sizeof(a) / sizeof(a[0]);

	//for (int i = 0; i < len; i++)
	//{
	//	printf("a[%d]: %d \n", i, a[i]);
	//}

	// cho mảng số nguyên arr[] = {2,4,6,8,10}
	// tính và in ra tổng và trung bình cộng của các phần tử

	//int arr[] = { 2,4,6,8,10 };

	//int len = sizeof(arr) / sizeof(arr[0]);
	//int tong = 0;
	//for (int i = 0; i < len; i++)
	//{
	//	tong += arr[i];
	//}

	//printf("tong: %d \n", tong);
	//printf("TBC: %.1f \n", tong*1.0/len);

	// cho mảng số nguyên arr[] = {4,9,2,-1,7}
	// tìm giá trị lớn nhất và giá trị nhỏ nhất trong và in ra

	int arr[] = { 4,9,2,-1,7 };
	
	int len = sizeof(arr) / sizeof(arr[0]);

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < len;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("Max: %d \n", max);
	printf("Min: %d \n", min);
}