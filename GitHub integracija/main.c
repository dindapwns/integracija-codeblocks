#include<stdio.h>
#include <windows.h>

int main()

{

int h, m, s;

int D = 1000;
printf("Set time:\n");

scanf("%d %d %d", &h, &m, &s);

if (h > 12) { printf("ERROR!\n"); exit(0); }

if (m > 60) { printf("ERROR!\n"); exit(0); }

if (s > 60) { printf("ERROR!\n"); exit(0); }

while (1)
{

s += 1;

if (s > 59) { m += 1; s = 0; }
if (m > 59) { h += 1; m = 0; }

if (h > 12) { h = 1; m = 0; s = 0; }

printf("\n Clock");

printf("\n%02d:%02d:%02d", h, m, s);

Sleep(D);

system("cls");

}

getchar();
return 0;

}
