/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 00:09:20 by rpunet            #+#    #+#             */
/*   Updated: 2020/07/14 20:28:21 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"


 //------------------------------------------
 /*
size_t	ft_strlcat(char *dest, char *src, size_t size);

int		main(void)
{
	char str1[18]     = "hola";
	char str1real[18] = "hola";
	char str2[] = "qui";
	size_t size = 7;

	printf("%u\n", ft_strlcat(str1, str2, size));
	printf("%s\n\n", str1);

	printf("%lu\n", strlcat(str1real, str2, size));
	printf("%s\n", str1real);

	return (0);
}
*/
//--------------------------------------------
/*
void *	ft_memset(void *str, int c, size_t len);

int		main(void)
{
	char strr[] = "aqui estamos de vuelta!";
	char strr2[] = "aqui estamos de vuelta!";
	memset (strr, 85, 7);
	puts (strr);
	ft_memset(strr2, 85, 7);
	puts(strr2);
	return (0);
}
*/
//-----------------------------------------------
/*
void	ft_bzero(void *str, size_t n);

int	main(void)
{
	char strr[] = "";
	char strr2[] = "";
	bzero(strr, 3);
	ft_bzero(strr2, 3);
	puts (strr);
	printf("%c\n", strr[2]);
	puts (strr2);
	printf("%c\n", strr2[2]);
	return (0);
}
*/
//--------------------------------------------------------

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char str[] = "hello";
	char str2[] = "world";
	char str3[] = "hello";
	//char str4[] = "world";


	//puts (strr2);
	printf("memcpy   : %s\n", memcpy(str,str2, 0));
	//puts (strr+2);

	//puts (strrx2);
	printf("ft_memcpy: %s\n", ft_memcpy(str3, 0, 0));
	//puts (strrx+2);
	return (0);
}

//----------------------------------------------------------
/*
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

int main(void)
{
	char strr[] = "HOLA AMI";
	char strr2[] = "pegar";
	char strrx[] = "HOLA AMI";
	char strrx2[] = "pegar";




	printf("%p\n", memccpy(strr2, strr, 76, 4));
	printf("%s\n", strr2);

	printf("%p\n", ft_memccpy(strrx2, strrx, 76, 4));
	printf("%s\n", strrx2);

//	puts (strrx2);
//	printf("%c\n", strrx2[2]);
	return (0);
}
*/
//-------------------------------------------------------
/*
void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char s[] = "holadenuevoatodos";
	char p[] = "holadenuevoatodos";

	printf("%s\n", memmove(s, s+4, 2));
	printf("%s\n", ft_memmove(p, p+4, 2));
	return (0);
}
*/
//--------------------------------------------------------
/*
void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	unsigned char str[] = "hola tu";
	unsigned char str2[] = "hola tu";
	char	*p;
	char	*q;
	p = memchr(str, 108, 8);
	q = ft_memchr(str2, 108, 8);
	printf("%p\n", p);
	printf("%p\n", q);
	printf("%c\n", *p);
	printf("%c\n", *q);

// ambas dan segment si no encuentra el caracter, porque el segundo print intenta imprimir un caracter de un puntero null 0x0
	return (0);
}
*/
//-------------------------------------------------------
/*
int ft_strlen(char *str);

int main(void)
{
	char str[] = "adas3rdf";
	printf("el número de caracteres es %d", ft_strlen(str));
	return (0);
}
*/
//------------------------------------------------------
/*
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

int		main(void)
{
	char dest[10];
	char dest2[10];
	char src[]  = "p1234";
	size_t size;
	size_t dispsrcsize;
	size_t dispsrcsize2;

	size = 7;

	dispsrcsize = ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%zu\n\n", dispsrcsize);

	dispsrcsize2 = strlcpy(dest2, src, size);
	printf("%s\n", dest2);
	printf("%zu\n", dispsrcsize2);


	return (0);
}
*/
//------------------------------------------------
/*
#include <bsd/string.h>      //linux

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		main(void)
{
	char str1[18]     = "hola a";
	char str1real[18] = "hola a";
	char str2[] = "qui";
	size_t size = 14;

	printf("%zu\n", ft_strlcat(str1, str2, size));
	printf("%s\n\n", str1);

	printf("%zu\n", strlcat(str1real, str2, size));
	printf("%s\n", str1real);

	return (0);
}
*/
//------------------------------------------------
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char a[] = "a1434";
	char b[] = "a1234";

	printf("%d\n", memcmp(a, b, 5));
	printf("%d\n", ft_memcmp(a, b, 5));

	return(0);
}
*/
//------------------------------------------------
/*
char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char str[] = "hola tu";
	char str2[] = "hola tu";
	char	*p;
	char	*q;
	p = strchr(str, 97);
	q = ft_strchr(str2, 97);
	printf("%p\n", p);
	printf("%p\n", q);
	printf("%c\n", *p);
	printf("%c\n", *q);

// ambas dan segment si no encuentra el caracter, porque el segundo print intenta imprimir un caracter de un puntero null 0x0
	return (0);
}
*/
//------------------------------------------------
/*
char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char str[] = "hola tu";
	char str2[] = "hola tu";
	char	*p;
	char	*q;
	p = strrchr(str, 97);
	q = ft_strrchr(str2, 97);
	printf("%p\n", p);
	printf("%p\n", q);
	printf("%c\n", *p);
	printf("%c\n", *q);

// ambas dan segment si no encuentra el caracter, porque el segundo print intenta imprimir un caracter de un puntero null 0x0
	return (0);
}
*/
//------------------------------------------------
/*
#include <bsd/string.h>      //linux
//#include <string.h>				//mac

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	char h[] = "lorem ipsum dolor sit amet";
	char n[] = "ipsum";
	char h2[] = "lorem ipsum dolor sit amet";
	char n2[] = "ipsum";

	//printf("%p\n", ft_strnstr(h, n, 11));
	//printf("%p\n", strnstr(h2, n2, 11));

	printf("%s\n", ft_strnstr(h, n, 30));
	printf("%s\n", strnstr(h2, n2, 30));

	return (0);
}
*/
//------------------------------------------------
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int		main(void)
{
	int diff;
	int diff_real;
	int n = 4;
	char *str1 = "abcdefgh";
	char *str2 = "abcdwxyz";

	diff = ft_strncmp(str1, str2, n);
	diff_real = strncmp(str1, str2, n);

	printf("%d\n", diff);
	printf("%d\n", diff_real);

	//write (1, &diff, 1);
	return (0);
}
*/
//------------------------------------------------
/*
 #include <stdlib.h>
 #include "ft_isdigit.c"

int	ft_atoi(const char *str);

int	main(void)
{
	char	p[] = "\n\n\n  -46\b9 \n5d6";
	printf("%d\n", atoi(p));
	printf("%d\n", ft_atoi(p));
	return (0);
}
*/
//------------------------------------------------
/*
#include <ctype.h>

int	ft_isalpha(int c);

int	main(void)
{
	int p = '4';
	printf("%d\n", isalpha(p));
	printf("%d\n", ft_isalpha(p));
}
*/
//------------------------------------------------
/*
#include <ctype.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"

int	ft_isalnum(int c);

int	main(void)
{
	int p = '/';
	printf("%d\n", isalnum(p));
	printf("%d\n", ft_isalnum(p));
}
*/
//-----------------------------------------------
/*
#include "ft_memcpy.c"
#include "ft_strdup.c"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	s1[] = "queteparece";

	printf("%s\n", ft_substr(s1, 2, 2));
	return 0;
}
*/
//-----------------------------------------------
/*
#include "ft_strlcpy.c"
#include "ft_strlcat.c"

char	*ft_strjoin(char const *s1, const char *s2);

int	main(void)
{
	char	*st1 = "holaamigo";
	//st1 = NULL;
	char	st2[] = "comova";

	st1[0] = '\0';
	st2[0] = '\0';
	printf("%s\n", ft_strjoin(st1, st2));
	return 0;
}
*/
//-----------------------------------------------
/*
#include "ft_substr.c"
#include "ft_memcpy.c"
#include "ft_strdup.c"

char *ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	st1[] = "xxmuuxhola";

	char	st2[] = "mxa";

	printf("%s\n", ft_strtrim(st1, st2));
	return 0;
}
*/
//-----------------------------------------------
/*
#include "ft_substr.c"
#include "ft_memcpy.c"
#include "ft_strdup.c"

char	**ft_split(char const *s, char c);

int		main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("venga  split       this for   me  !!!!   ", ' ');


	while (tab[i] != NULL)
	{
		printf("%s\n", (tab[i]));
		i++;
	}
	return (0);
}
*/
//-----------------------------------------------
/*
char	*ft_itoa(int n);

int		main(void)
{
	printf("%s\n", ft_itoa(97060));
	printf("%s\n", ft_itoa(00));
	printf("%s\n", ft_itoa(01234));
	printf("%s\n", ft_itoa(-012340));
	printf("%s\n", ft_itoa(-12340));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
*/
//-----------------------------------------------
/*
void	ft_putchar_fd(char c, int fd);

int		main(void)
{
	ft_putchar_fd('t',1);
	return (0);
}
*/
//-----------------------------------------------
/*
void	ft_putstr_fd(char *s, int fd);

int		main(void)
{
	ft_putstr_fd("hola amigos",1);
	return (0);
}
*/
//-----------------------------------------------
/*
void	ft_putendl_fd(char *s, int fd);

int		main(void)
{
	ft_putendl_fd("hola amigos",1);
	return (0);
}
*/
//-----------------------------------------------
/*
#include "ft_putchar_fd.c"

void	ft_putnbr_fd(int n, int fd);

int		main(void)
{
	ft_putnbr_fd(-2147483648,1);
	return (0);
}
*/
//-----------------------------------------------
/*
t_list	*ft_lstnew(void *content);

int		main(void)
{
	char	str[] = "hola amigos que tal";

	t_list *new;
	new = ft_lstnew((void *)str);
	printf("%s\n", new->content);
	return (0);
}
*/
//-----------------------------------------------
/*
t_list	*ft_lstlast(t_list *lst);

int		main(void)
{
	char	str[] = "pruebatest";

	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	*last;

	if(!(elem1 = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if(!(elem2 = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if(!(elem3 = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if(!(elem4 = (t_list *)malloc(sizeof(t_list))))
		return (0);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;

	elem4->content = (void *)str;
	last = ft_lstlast(elem1);
	printf("%s\n", (char *)last->content);
	return (0);
}
*/
