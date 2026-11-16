#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*
Pointer - con trỏ
khái niệm:
 - con trỏ là một biến dung để lưu địa chỉ của 1 đối tượng (object) trong bộ nhớ (memory)
 - kích thước của con trỏ phụ thuộc vào nền tang đang hoạt động
	+ x86 (32bit) kích thước con trỏ là 4 byte
	+ x64 (64bit) kích thước con trỏ là 8 byte
Khai báo:
 cú pháp:
	<Kiểu dữ liệu>* ten_con_tro [= giá trị khởi tạo ban đầu];
Cách sử dung con trỏ
- công dung 1: dung để lưu địa chỉ của đối tượng
vd:
int x = 10;
int* px = &x;// lưu địa chỉ của biến x vào con trỏ px
- công dụng 2: dùng để truy cập (read/write) tới vùng nhớ có địa chỉ được lưu trong con trỏ
vd:
int x = 10;
int* px = &x;
printf("gia tri cua x: %d\n", *px); // đọc giá trị px
*px = 20; // ghi giá trị mới vào px
printf("gia tri cua x: %d\n", *px);
- kiểu dữ lieu của con trỏ quyết định khả năng truy cập của con trỏ đó
- toán tử cộng x trong con trỏ sẽ tang con trỏ lên (x*kích thước kiểu dữ liệu)

2. mối liên hệ với mảng
-tên mảng là địa chỉ bắt đầu của mảng
-tên mảng tương đương với địa chỉ của phần tử đầu tiên
- *(arr+i) == arr[i]
*/
void main()
{
	short x = 0x1234;
	char* px = &x;
	printf("con tro thap: %x \n", px[0]);
	printf("con tro cao: %x \n", px[1]);

}