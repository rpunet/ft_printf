
#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>


int		main(void)
{
	int		res;
	int		rp;
	char	*s = "hola";


res = ft_printf("\033[1;34mhola amigos\ncomo estais\033[0m\n");
rp = printf("\033[1;32mhola amigos\ncomo estais\033[0m\n");
printf("%d, %d\n\n", res, rp);

res = ft_printf("\033[1;34m%-c\n\033[0m", 'q');
rp = printf("\033[1;32m%c\n\033[0m", 'q');
printf("%d, %d\n\n", res, rp);


res = ft_printf("\033[1;34m%.15s\033[0m", "que frase!\n");
rp = printf("\033[1;32m%.15s\033[0m", "que frase!\n");
printf("%d, %d\n\n", res, rp);



res = ft_printf("\033[1;34m%0*d\n %d\n\033[0m",5,126, 127);
printf("%d\n", res);
rp = printf("\033[1;32m%0*d\n %d\n\033[0m",5,126, 127);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34mthis %i number\033[0m", 17);
printf("%d\n", res);
rp = printf("\033[1;32mthis %i number\033[0m", 17);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%.d\033[0m", 0);
printf("%d\n", res);
rp = printf("\033[1;32m%.d\033[0m", 0);
printf("%d\n", rp);


res = ft_printf("\033[1;34m%0*c\n\033[0m", 5,66);
printf("%d\n", res);
rp = printf("\033[1;32m%0*c\n\033[0m", 5, 66);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%-3.8s\033[0m", NULL);
printf("%d\n", res);
rp = printf("\033[1;32m%-3.8s\033[0m", NULL);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%09s", "hi low\0don't print me lol\0\033[0m");
printf("%d\n", res);
rp = printf("\033[1;32m%09s", "hi low\0don't print me lol\0\033[0m");
printf("%d\n\n", rp);


res = ft_printf("\033[1;34mresultado ft_printf:%.*p\n\033[0m", -1,NULL);
printf("%d\n", res);
rp = printf("\033[1;32mresultado  original:%.*p\n\033[0m",-1, NULL);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%.*p\n\033[0m", -1, NULL);
printf("%d\n", res);
rp = printf("\033[1;32m%.*p\n\033[0m", -1, NULL);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%14.*p\n\033[0m", 0, s);
printf("%d\n", res);
rp = printf("\033[1;32m%14.*p\n\033[0m", 0, s);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%-07c\n\033[0m", 'k');
printf("%d\n", res);
rp = printf("\033[1;32m%-07c\n\033[0m", 'k');
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%07c\n\033[0m", 'k');
printf("%d\n", res);
rp = printf("\033[1;32m%07c\n\033[0m", 'k');
printf("%d\n", rp);


res = ft_printf("\033[1;34m%7c\n\033[0m", 'k');
printf("%d\n", res);
rp = printf("\033[1;32m%7c\n\033[0m", 'k');
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%%-d 42 == %-d \033[0m", INT_MIN);
printf("%d\n", res);
rp = printf("\033[1;32m%%-d 42 == %-d \033[0m" , INT_MIN);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34m%07u\n\033[0m", 1234);
printf("%d\n", res);
rp = printf("\033[1;32m%07u\n\033[0m", 1234);
printf("%d\n\n", rp);


res = ft_printf("\033[1;34mthis %u number\033[0m", 17);
printf("%d\n", res);
rp = printf("\033[1;32mthis %u number\033[0m", 17);
printf("%d\n\n", rp);

res = ft_printf("\033[1;34m%07X\n\033[0m", 1234);
printf("%d\n", res);
rp = printf("\033[1;32m%07X\n\033[0m", 1234);
printf("%d\n\n", rp);

res = ft_printf("\033[1;34m%07X\n\033[0m", -543);
printf("%d\n", res);
rp = printf("\033[1;32m%07X\n\033[0m", -543);
printf("%d\n\n", rp);

res = ft_printf("\033[1;34m%3x\n\033[0m", 4567);
printf("%d\n", res);
rp = printf("\033[1;32m%3x\n\033[0m", 4567);
printf("%d\n\n", rp);

res = ft_printf("\033[1;34m%% *.5i 42 == |%*.5i|\033[0m", 4, 42);
printf("%d\n", res);
rp = printf("\033[1;32m%% *.5i 42 == |%*.5i|\033[0m", 4, 42);
printf("%d\n\n", rp);

	return (0);
}
