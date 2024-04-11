#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char	altera(char c, unsigned int i)
{
	return ('a');
}
int main(void)
{
//tests isalpha
	int i;
    i = 0;
    while (i <= 127)
    {
        if (ft_isalpha(i) == 0 && isalpha(i) == 0)
            i++;
        else if (ft_isalpha(i) > 0 && isalpha(i) > 0)
            i++;
        else
        {
            printf("ft isalpha is KO D: at char %d\n expected %d got %d\n", i, isalpha(i), ft_isalpha(i));
            return (0);
        }
    }
    printf("ft isalpha is OK :D\n");
//tests isdigit
    i = 0;
    while (i <= 127)
    {
        if (ft_isdigit(i) == 0 && isdigit(i) == 0)
            i++;
        else if (ft_isdigit(i) > 0 && isdigit(i) > 0)
            i++;
        else
        {
            printf("ft is digit isKO D: at char %d\n expected %d got %d\n", i, isdigit(i), ft_isdigit(i));
            return (0);
        }
    }
    printf("ft isdigit isOK :D\n");
//tests isalnum
    i = 0;
    while (i <= 127)
    {
        if (ft_isalnum(i) == 0 && isalnum(i) == 0)
            i++;
        else if (ft_isalnum(i) > 0 && isalnum(i) > 0)
            i++;
        else
        {
            printf("ft isalnum KO D: at char %d\n expected %d got %d\n", i, isalnum(i), ft_isalnum(i));
            return (0);
        }
    }
    printf("ft isalnum is OK :D\n");

//tests isascii
    i = 0;
    while (i <= 127)
    {
        if (ft_isascii(i) == 0 && isascii(i) == 0)
            i++;
        else if (ft_isascii(i) > 0 && isascii(i) > 0)
            i++;
        else
        {
            printf("ft isascii is KO D: at char %d\n expected %d got %d\n", i, isascii(i), ft_isascii(i));
            return (0);
        }
    }
    printf("ft isascii is OK :D\n");
//tests isprint
    i = 0;
    while (i <= 127)
    {
        if (ft_isprint(i) == 0 && isprint(i) == 0)
            i++;
        else if (ft_isprint(i) > 0 && isprint(i) > 0)
            i++;
        else
        {
            printf("ft is print is KO D: at char %d\n expected %d got %d\n", i, isprint(i), ft_isprint(i));
            return (0);
        }
    }
    printf("ft is print is OK :D\n\n\n");
//tests strlen
	printf("|---> testing ft strlen <---|\n");
    printf("got %zu expected 6\n", ft_strlen("macaco"));
    printf("got %zu expected 0\n", ft_strlen(""));
    printf("got %zu expected 11\n", ft_strlen("hello world"));
	printf("|--- ------------------- ---|\n\n\n");
//tests memset
    char    str1[100];
    char    str2[100];
	char	str3[100];

	printf("|---> testing ft memset <---|\n");
    ft_memset(str2, '5', 4);
    memset(str1, '5', 4);
    printf("expected %s got %s\n", str2, str1);
	printf("|--- ------------------- ---|\n\n\n");
//tests bzero somehow
    ft_bzero(str2, 4);
    bzero(str1, 4);
	printf("|---> testing ft bzero <---|\n");
    printf("expected %s got %s\n", str2, str1);
	printf("|--- ------------------- ---|\n\n\n");
//tests memcpy
	memcpy(str1, "ola", 2);
	ft_memcpy(str2, "ola", 2);
	printf("|---> testing ft memcpy <---|\n");
	printf("expected %s received %s\n", str1, str2);
	printf("|--- -------------------- ---|\n\n\n");
//tests memmove isto devia ser mais completo mas im lazy
    char *_str1 = (char *)malloc(4);
    char *_str2 = (char *)malloc(4);
    const char *_str3 = "ola";
	
	memmove(_str2, _str3, 3);
	ft_memmove(_str1, _str3, 3);

	printf("|---> testing ft memmove <---|\n");
    printf("expected %s got %s\n", _str2, _str1);
	printf("|--- -------------------- ---|\n\n\n");


    free(_str1);
    free(_str2);
//tests strlcpy
	ft_bzero(str1, 10);
	ft_bzero(str2, 10);
	ft_bzero(str3, 10);

	ft_memset(str2, 'A', 10);
	ft_memset(str3, 42, 5);

	printf("|---> testing ft strlcpy <---|\n");
	printf("got %zu\n", ft_strlcpy(str2, str3, 6));
	printf("this is the result %s\n", str2);
	printf("|--- -------------------- ---|\n\n\n");
//tests ft strlcat

	ft_memset(str1, 'A', 5);
	
	printf("|---> testing ft strlcat <---|\n");
	printf("got %zu\n", ft_strlcat(str2, str1, 7));
	printf("%s \n", str2);
	printf("|--- -------------------- ---|\n\n\n");
//tests toupper
    i = 0;
    while (i <= 127)
    {
        if (toupper(i) != ft_toupper(i))
        {
            printf("ft toupper is KO on %d\n",i);
        }
        i++;
    }
    printf("ft toupper is OK :D!\n");
//tests tolower
    i = 0;
    while (i <= 127)
    {
        if (tolower(i) != ft_tolower(i))
        {
            printf("tolower is KO at %d",i);
        }
        i++;
    }
    printf("tolower is OK :D!\n\n\n");
//strchr
    char    *s = {"jandsfioubs"};
    char    c;
    
    c = 'b';
	printf("|---> testing ft strchr <---|\n");
    printf("expected %s got %s\n",strchr(s, c), ft_strchr(s, c));
	printf("|--- ------------------- ---|\n\n\n");
//strrchr
	printf("|---> testing ft strrchr <---|\n");
    printf("expected %s got %s\n",strrchr(s, c), ft_strrchr(s, c));
	printf("|--- -------------------- ---|\n\n\n");
//strncmp

	ft_memset(str1, 42, 10);
	ft_memset(str2, 'a', 10);
	ft_memset(str2, 42, 5);

	printf("|---> testing ft strncmp <---|\n");
	printf("str1 %s and str2 %s\n",str1, str2);
    printf("expected %d got %d\n", strncmp(str1, str2, 7), ft_strncmp(str1, str2, 7));
	printf("|--- -------------------- ---|\n\n\n");
//memchr

	printf("this tests memchr and its supposed to both return a pointer to the first ocurrence of a in the string\n");
    printf("expected %p got %p\n\n\n", memchr(str2, 'a', 7), ft_memchr(str2, 'a', 7));
//memcmp

	printf("|---> testing ft memcmp <---|\n");

    printf("expected %d got %d\n", memcmp(str1, str2, 7), ft_memcmp(str1, str2, 7));
	printf("|--- ------------------- ---|\n\n\n");
//strnstr
	ft_memset(str2, 42, 10);
	ft_memset(str2, 'a', 7);
	ft_memset(str2, 42, 5);

	printf("|---> testing ft strnstr <---|\n");
	printf("expected %s got %s\n",strstr(str2, "aa"), ft_strnstr(str2, "aa", 10));
	printf("|--- -------------------- ---|\n\n\n");
//atoi

	printf("|---> testing ft atoi <---|\n");
    printf("expected %d got %d\n",atoi("123"), ft_atoi("123"));
    printf("expected %d got %d\n", atoi("-123"), ft_atoi("-123"));
    printf("expected %d got %d\n",atoi("2147483647"), ft_atoi("2147483647"));
    printf("expected %d got %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("|--- ----------------- ---|\n\n\n");
//calloc????
	printf("eu nao sei testar o calloc ahahhaha\n\n\n");
//strdup
	printf("|---> testing ft strdup <---|\n");

    char    *__str1 = {"macaco"};
    char    *__str2;
    char    *__str3;

    __str2 = ft_strdup(__str1);
    __str3 = strdup(__str1);
    printf("expected %s got %s\n", __str3, __str2);
    free (__str2);
    free (__str3);
	printf("|--- ------------------- ---|\n\n\n");
//substr
	char	*sub_str = {"olaa"};
	char	*sub_str1;
	
	sub_str1 = ft_substr(sub_str, 2, 3);
	printf("|---> testing ft strsub <---|\n");
	printf("this one needs further testing but i dont know how to do it her so do it by hand");
	printf("expected aa got %s\n", sub_str1);
	printf("|--- ------------------- ---|\n\n\n");
//strjoin
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined = ft_strjoin(s1, s2);
	printf("|---> testing ft strjoin <---|\n");
	printf("this is str 1 -%s- and this is str 2 -%s-\n",s1, s2);
    printf("Joined string: %s\n", joined);

    free(joined);
	printf("|--- ------------------- ---|\n\n\n");
//strtrim

	char	*strtrim1 = {"aasdfbasdbasdb"};
	char	*strtrim2 = {"bf"};

	printf("|---> testing ft strjoin <---|\n");
	printf("this is str %s and this is to be trimmed %s\n", strtrim1, strtrim2);
	printf("this is the result %s\n", ft_strtrim(strtrim1, strtrim2));
	printf("|--- -------------------- ---|\n\n\n");
//ft split
	printf("|---> testing ft split <---|\n");
	char	**strsplit;
	char	*frase = {" ola adeus macaco   ola "};
	char	csplit;

	i = 0;
	csplit = ' ';
	strsplit = ft_split(frase, csplit);

	printf("str to split is -%s- and breaker is a space\n", frase);
	printf("this is the split\n");
	while (strsplit[i] != NULL)
	{
		printf("%s\n", strsplit[i]);
		i++;
	}
	free (strsplit);
	printf("|--- ------------------ ---|\n\n\n");

//itoa
	char	*stritoa;
	int	test;
	printf("|---> testing ft itoa <---|\n");

	stritoa = ft_itoa(1234);
	printf("expected 1234 got %s\n", stritoa);
	stritoa = ft_itoa(-1234);
	printf("expected 1234 got %s\n", stritoa);
	stritoa = ft_itoa(2147483647);
	printf("expected 2147483647 got %s\n", stritoa);
	stritoa = ft_itoa(0);
	printf("expected 0 got %s\n", stritoa);
	stritoa = ft_itoa(-2147483648);
	printf("expected -2147483648 got %s\n", stritoa);
	printf("|--- ------------------ ---|\n\n\n");
//strmapi
/*
	char	original[100] = {"12345"};
	char	*moded;
	char	*(*fptr)(char, unsigned int) = altera;

	moded = ft_strmapi(frase, fptr);
	printf("original %s now its a bunch of a -%s- magic",original, moded);
//striteri
	char	original[100] = {"12345"};
	char	*moded;

	moded = ft_strmapi(frase, &altera);
	printf("original %s now its a bunch of a -%s- magic",original, moded);
	*/
	printf("nao sei testar o strmapi e o iteri sem passar a adress da funcao como pointer e isso da um warning \n");
//putchar fd
	printf("|---> testing ft putchar fd <---|\n");
	printf("trying to print -a-\n");
	ft_putchar_fd('a', 1);
	printf("\n");
	printf("|--- ------------------ ---|\n\n\n");
//putstrfd
	printf("|---> testing ft putstr fd <---|\n");
	printf("trying to print ola \n");
	ft_putstr_fd("ola", 1);
	printf("\n");
	printf("|--- ------------------ ---|\n\n\n");
//putendl
	printf("|---> testing ft putendl fd <---|\n");
	printf("trying to print ola followed by a newline \n");
	ft_putendl_fd("ola", 1);
	printf("|--- ------------------ ---|\n\n\n");
//ft putnbr fd
	printf("|---> testing ft putnbr fd <---|\n");
	ft_putnbr_fd(123, 1);
	printf("\n");
	ft_putnbr_fd(-123, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	printf("|--- ------------------ ---|\n\n\n");





















}
