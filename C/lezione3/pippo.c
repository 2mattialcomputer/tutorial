#include <stdio.h>
int main()
{
	int età  = 30;
	int cucina = 2;
	printf("Mi chiamo Pippo, ho %d anni\n", età );
	printf("Mi piace cucinare, lo faccio da %d anni\n", cucina);
	printf("Quindi lo faccio da quando ho %d anni\n", età  - cucina);
	return(0);
}
