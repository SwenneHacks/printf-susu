
#include "test.h"

int		main(void)
{
	int a = 0;
	int b = 0;
	a = printf(		"[%d%d%d%d]\n", -1, -2, 3, 4);
	b = ft_printf(	"[%d%d%d%d]\n", -1, -2, 3, 4);
	printf("\npf |%d|\nft |%d|\n\n", a, b);
	return(0);
}