#include <stdio.h>
int main(void)
{
	char *t, harf;
	t = &harf;
	for(harf='L'; harf>='A';harf--) printf("%c", *t);
}
