
#include "ft_printf.h"

#include <stdio.h>


int		main(void)
{
	int		res;
	int		rp;


	//printf("hola, %s el numero %d\n", "yo soy", 3);
	// if (!(res = ft_printf("soy %d, y  %d, %s, %d  %d\n", 523451, 36, "aquitepillo\n", 4, 34)))
	// 	printf("error de especificador\n");

	// printf("%d %i", res, 5*4 );
	// //printf("el numero %+*.5d mola", 8, -123);



	// res = ft_printf("hola amigos\ncomo estais\n""que\n");
	// rp = printf("hola amigos\ncomo estais\n""que""bueno\n");
	// printf("%d, %d\n", res, rp);
/*
	res = ft_printf("%-c\n", 'q');
	rp = printf("%c\n", 'q');
	printf("%d, %d\n", res, rp);


	res = ft_printf("%d\n", 1234);
	rp = printf("%*.d\n" "mas frase",-12, 1040);
	printf("%d, %d\n", res, rp);



	res = ft_printf("%s", "que frase!\n");
	rp = printf("%.15s", "que frase!\n");
	printf("%d, %d\n", res, rp);

 */

//printf("%i\n", '8' - '0');

// res = ft_printf("%0*d\n %d\n",5,126, 127);
// printf("%d\n", res);

// rp = printf("%0*d\n %d\n",5,126, 127);
// printf("%d\n", rp);

// res = ft_printf("this %i number", 17);
// printf("%d\n", res);

// rp = printf("this %i number", 17);
// printf("%d\n", rp);

// res = ft_printf("%.d", 0);
// printf("%d\n", res);

// rp = printf("%.d", 0);
// printf("%d\n", rp);


//printf("%23i", 1234);





// res = ft_printf("%0*c\n", 5,66);
// printf("%d\n", res);

// rp = printf("%0*c\n", 5, 66);
// printf("%d\n", rp);

// res = ft_printf("%-3.8s", NULL);
// printf("%d\n", res);

// rp = printf("%-3.8s", NULL);
// printf("%d\n", rp);

res = ft_printf("%3.3s%3.3s", "hello", "world");
printf("%d\n", res);

rp = printf("%3.3s%3.3s", "hello", "world");
printf("%d\n", rp);


	return (0);
}
