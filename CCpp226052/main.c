#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "lib.h"
#include <string.h>
#include <ctype.h>

void in_hoa_chuoi(char* str)
{
	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
}

int tim_ki_tu(char* str, char c)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return i;
		}
		i++;
	}


	return -1;
}

void ghep_ho_ten(char* ketqua, char* ho, char* ten)
{
	strcpy(ketqua, ho);
	strcat(ketqua, " ");
	strcat(ketqua, ten);
}

void tim_max_min(int* arr, int len, int* max, int* min)
{
	*max = arr[0];
	*min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > *max) *max = arr[i];
		if (arr[i] < *min) *min = arr[i];
	}
}

void main()
{
	char s[] = "hello world!";

	// VD1: viết hàm tính độ dài chuỗi
	int len = do_dai_chuoi(s); // hàm viết bên lib.h, lib.c
	printf("do dai chuoi s: %d \n", len);

	// VD2: viết hàm đổi trực tiếp cả chuỗi sang chữ in hoa
	in_hoa_chuoi(s);
	printf("Chuoi sau khi in hoa: %s \n", s);

	// VD3: viết hàm tìm vị trí ký tự, nếu không tìm thấy thì trả về -1
	int vi_tri = tim_ki_tu(s, 'A');
	printf("ki tu A trong chuoi s tai vi tri: %d \n", vi_tri);

	// VD4: viết hàm ghép họ tên ghi kết quả vào con trỏ truyền vào tham số

	char ho[] = "Nguyen";
	char ten[] = "An";
	char ketqua[50] = { 0 };

	ghep_ho_ten(ketqua, ho, ten); // ghi vào ketqua = "Nguyen An"
	printf("ho ten sau khi ghep: %s \n", ketqua);


	//3. Tìm giá trị lớn nhất và nhỏ nhất: 
	// Viết hàm tìm giá trị lớn nhất và nhỏ nhất trong mảng,
	// trả kết quả thông qua tham số con trỏ.

	int arr[] = { 34,23,41,27,13,20,36 };
	int max = 0;
	int min = 0;
	tim_max_min(arr, 7, &max, &min);
	printf("Max: %d, Min: %d \n", max, min);
}
