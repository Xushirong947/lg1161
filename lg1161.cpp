#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int digits[2000003] = {0};
long long int n, t, mul;
double a;
int main(void)
{
	
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lf%lld", &a,&t);
		for (int j = 1; j <= t; j++) {
			mul = a * j;
			if (digits[mul]==0) digits[mul]++;
			else digits[mul]=0;
		}
	}
	for (int i = 1; i < 2000005; i++) {
		if (digits[i] == 1) {
					printf("%d", i);
					break;
				}
	}
	return 0;
}