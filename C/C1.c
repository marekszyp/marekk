#include <stdio.h>
struct trojkat {
	float a;
	float b;
	float c;
};

float funkcja(struct trojkat x)
{
	float suma = x.a + x.b + x.c;
	return suma;
}
void funkcja2(struct trojkat troj1, struct trojkat *troj2)
{
	*troj2 = troj1;

}

int main()
{
	struct trojkat nazwa;
	nazwa.a = 15;
	nazwa.b = 10;
	nazwa.c = 5;
	printf("%f", funkcja(nazwa));
	return 0;
}
