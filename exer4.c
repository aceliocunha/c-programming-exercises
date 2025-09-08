#include <stdio.h>

int main(void)
{
	double enesimo=1,soma=0,epsilon=1e-10;
	int controle=3;
	soma=enesimo;
	while (controle)
	{
		enesimo*=1.0/2.0;
		soma+=enesimo;
	    if (enesimo<epsilon) controle--;
		printf("controle=%d, enesimo=%e, soma=%f\n",controle,enesimo,soma);
	}
	return 0;
}