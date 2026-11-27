#include <stdio.h>

float tinh_diem_tb(int diem_toan, int diem_ly, int diem_hoa)
{
	float diem_tb = 0;

	diem_tb = (diem_toan + diem_ly + diem_hoa * 2) / 4.0;

	return diem_tb;
}
void in_duong_ke(int do_dai)
{
	for (int i = 0; i < do_dai; i++)
	{
		printf("-");
	}
	printf("\n");
}
char xep_loai(float diem_tb)
{
	if (diem_tb >= 8.0) return 'A';
	if (diem_tb >= 7.0) return 'B';
	if (diem_tb >= 5.0) return 'C';
	return 'F';
}

int do_dai_chuoi(char* str)
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}

	return len;
}