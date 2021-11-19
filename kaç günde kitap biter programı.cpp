#include <stdio.h>

main()
{
	int sayfa=20, okunansayfa=0, gun=0;
	while(okunansayfa < 5000){
		okunansayfa += sayfa;
		sayfa += 6;
		gun ++;
	}
	printf("%d. gun icinde kitap bitmis olur",gun);
}
