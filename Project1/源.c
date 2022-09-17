#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("ÇëÊäÈë£º");
		int a, b, c, d;
	scanf_s(" %d,%d,%d",&a,&b,&c);
	d = max(a, b, c);
	printf("max =%d ", d);
}
int max(int x, int y, int z)
{
	if (x > y && x > z)return x;
	else if (y > x && y > z)return y;
	else return z;
}