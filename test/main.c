#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);

int		strlen_test(char *str)
{
	printf("str =\t\"%s\"\nft_strlen(str) =\t%d\nstrlen(str) =\t\t%d\n",
			str, ft_strlen(str), (int)strlen(str));
	if (ft_strlen(str) == (int)strlen(str))
		printf(">> +++ TEST PASSED +++ <<\n");
	else
		printf(">> --- TEST FAILED --- <<\n");
	return (0);
}

int		strcpy_test(const char *src)
{
	char *dst;

	dst = (char*)malloc((ft_strlen((char*)src) + 1) * sizeof(char));
	if (dst == NULL)
		return (1);

	printf("TEST STRING =\t\"%s\"\n", src);
	ft_strcpy(dst, src);
	printf("COPIED STR =\t\"%s\"\n", dst);
	free(dst);
	return (0);
}

int		strcmp_test(const char *s1, const char *s2)
{
	printf("s1 =\t\"%s\"\ns2 =\t\"%s\"\n"
			"ft_strcmp(s1, s2) =\t%d\nstrcmp(s1, s2) =\t%d\n",
			s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	if (ft_strcmp(s1, s2) == strcmp(s1, s2))
		printf(">> +++ TEST PASSED +++ <<\n");
	else
		printf(">> --- TEST FAILED --- <<\n");
	return (0);
}

int		main(void)
{
	printf("===---STRLEN TEST---===\n");
	strlen_test("A STRING WITH 24 SYMBOLS");
	printf("+---------------------+\n");
	strlen_test("string");
	printf("+---------------------+\n");
	strlen_test("");
	printf("=======================\n");

	printf("===---STRCPY TEST---===\n");
	strcpy_test("this is a source string");
	printf("+---------------------+\n");
	strcpy_test("ANOTHER TEST");
	printf("+---------------------+\n");
	strcpy_test("YO wHaT'S CRaCKiNg");
	printf("+---------------------+\n");
	strcpy_test("");
	printf("=======================\n");

	printf("===---STRCMP TEST---===\n");
	strcmp_test("STRING", "STRING");
	printf("+---------------------+\n");
	strcmp_test("sTRING", "STRING");
	printf("+---------------------+\n");
	strcmp_test("", "STRING");
	printf("+---------------------+\n");
	strcmp_test("", "");
	printf("+---------------------+\n");
	strcmp_test("Str", "");
	printf("=======================\n");
}
