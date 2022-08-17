/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:42:54 by jungchoi          #+#    #+#             */
/*   Updated: 2022/03/23 21:24:06 by jungchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void ft_atoi_test()
{
	printf("========================================\n");
	printf("===============FT_ATOI_TEST=============\n");
	printf("========================================\n");

	printf("%d\n",  ft_atoi(" ---+--+1234ab567")); //-1234
	printf("%d\n",  atoi(" ---+--+1234ab567")); //-1234

	printf("%d\n",  ft_atoi(" ---+--+1234-ab567")); //-1234
	printf("%d\n",  atoi(" ---+--+1234-ab567")); //-1234

	printf("%d\n",  ft_atoi(" ---+--+a1234-ab567")); //0
	printf("%d\n",  atoi(" ---+--+a1234-ab567")); //0

	printf("%d\n",  ft_atoi(" ---+--+    1234-ab567")); //0
	printf("%d\n",  atoi(" ---+--+    1234-ab567")); //0

	printf("%d\n", ft_atoi("++++55"));
	printf("%d\n", atoi("++++55"));

	printf("%d\n", ft_atoi("-5"));
	printf("%d\n", atoi("-5"));

	printf("%d\n", ft_atoi("--5"));
	printf("%d\n", atoi("--5"));

	printf("%d\n", ft_atoi("---5"));
	printf("%d\n", atoi("---5"));

	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));

	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));

	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", atoi("2147483648"));

	printf("%d\n", ft_atoi("2147483648888"));
	printf("%d\n", atoi("2147483648888"));
}

void ft_strlcpy_test()
{
	printf("========================================\n");
	printf("=============FT_STRLCPY_TEST============\n");
	printf("========================================\n");
	unsigned int	res;
	char	dest[10] = "123456";
	char	src[10]  = "computer";
	
	res = ft_strlcpy(dest, src, 8);
	printf("%s\n", dest);
	printf("%u\n", res);

	unsigned int	res2;
	char	dest2[10] = "123456";
	char	src2[10]  = "computer";

	res2 = strlcpy(dest2, src2, 8);
	printf("%s\n", dest2);
	printf("%u\n", res2);
}

void ft_strlcat_test()
{
	printf("========================================\n");
	printf("=============FT_STRLCAT_TEST============\n");
	printf("========================================\n");

	char s1[30] = "hello";
	char s2[10] = "world";
	char s3[30] = "hello";
	char s4[10] = "world";

	char s5[30] = "hello";
    char s6[10] = "world";
    char s7[30] = "hello";
    char s8[10] = "world";

	unsigned int a;
	unsigned int b;

	printf("%zu\n", strlcat(s1, s2, 2));
	printf("%s\n", s1);
	printf("%zu\n", ft_strlcat(s3, s4, 2));
	printf("%s\n", s3);

    printf("%lu\n", strlcat(s5, s6, 8));
	printf("%s\n", s5);
    printf("%zu\n", ft_strlcat(s7, s8, 8));
	printf("%s\n", s7);
}

void ft_strncmp_test()
{
	printf("========================================\n");
	printf("=============FT_STRNCMP_TEST============\n");
	printf("========================================\n");

	char *s1 = "BlockDMask";
	//char *s1 = "BlockA";
	char *s2 = "Block";
	char *s3 = "BlockAAAAA";

	printf("%d\n", ft_strncmp(s1, s2, -1));
	printf("%d\n", strncmp(s1, s2, -1));

	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 0));

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
	
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s2, 6));
	
	printf("%d\n", ft_strncmp(s1, s2, 1000));
	printf("%d\n", strncmp(s1, s2, 1000));

	printf("%d\n", ft_strncmp(s1, s3, 5));
	printf("%d\n", strncmp(s1, s3, 5));

	printf("%d\n", ft_strncmp(s1, s3, 555));
	printf("%d\n", strncmp(s1, s3, 555));
}

void ft_memset_test()
{
	printf("========================================\n");
	printf("=============FT_MEMSET_TEST=============\n");
	printf("========================================\n");

	char arr[5];
	ft_memset(arr, 0, 5);

	char arr2[5];
	memset(arr2, 11, 5);

	int i = 0;
	while (i < 5)
	{
		printf("%d", arr[i]);
		printf("%d\n", arr2[i]);
		i++;
	}
}

void ft_bzero_test()
{
	printf("========================================\n");
	printf("===============FT_BZERO_TEST============\n");
	printf("========================================\n");

	char arr[5];
	ft_bzero(arr, 3);

	char arr2[5];
	bzero(arr2, 3);

	int i = 0;
	while (i < 5)
	{
		printf("%d", arr[i]);
		printf("%d\n", arr2[i]);
		i++;
	}
}

void ft_memcpy_test()
{
	printf("========================================\n");
	printf("==============FT_MEMCPY_TEST============\n");
	printf("========================================\n");

	int destInt1[] = {1, 2, 3, 4, 5};;
	int destInt2[] = {1, 2, 3, 4, 5};;
	int srcInt[] = {5, 4, 3, 2, 1, 0};;
	
	char destStr1[] = "abcde";
	char destStr2[] = "abcde";
	char srcStr[] = "ABC";

	printf("%s\n", ft_memcpy(destInt1, srcInt, 3));
	printf("%s\n", memcpy(destInt2, srcInt, 3));
	
	printf("%s\n", ft_memcpy(destStr1, srcStr, 3));
	printf("%s\n", memcpy(destStr2, srcStr, 3));
}

void ft_memmove_test()
{
	printf("========================================\n");
	printf("=============FT_MEMMOVE_TEST============\n");
	printf("========================================\n");

	int destInt1[] = {1, 2, 3, 4, 5};;
	int destInt2[] = {1, 2, 3, 4, 5};;
	int srcInt[] = {5, 4, 3, 2, 1, 0};;

	char destStr1[] = "abcde";
	char destStr2[] = "abcde";
	char srcStr1[] = "ABCgggggggg";
	char srcStr2[] = "ABCggggggggg";

	printf("%s\n", ft_memmove(destInt1, srcInt, 2));
	printf("%s\n", memmove(destInt2, srcInt, 2));
	
	printf("%s\n", ft_memmove(destStr1, srcStr1, 3));
	printf("%s\n", memmove(destStr2, srcStr2, 3));

	//printf("%s\n", ft_memmove(destStr1, srcStr1, 6));
	//printf("%s\n", memmove(destStr2, srcStr2, 6));
}

void ft_strchr_test()
{
	printf("========================================\n");
	printf("==============FT_STRCHR_TEST============\n");
	printf("========================================\n");

	char str[20] = "This is computer";
	char c = 'i';
	char c2 = '\0';

	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));

	printf("%s\n", ft_strchr(str, c2));
	printf("%s\n", strchr(str, c2));
}

void ft_strrchr_test()
{
	printf("========================================\n");
	printf("=============FT_STRRCHR_TEST============\n");
	printf("========================================\n");

	char str[20] = "This is computer";
	char c = 'i';

	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
}

void ft_memchr_test()
{
	printf("========================================\n");
	printf("==============FT_MEMCHR_TEST============\n");
	printf("========================================\n");

	int testInt[] = {1, 2, 3, 4, 5};
	char testStr[] = "This is computer";

	printf("%s\n", ft_memchr(testInt, 'i', 3));
	printf("%s\n", memchr(testInt, 'i', 3));
	
	printf("%s\n", ft_memchr(testStr, 'i', 3));
	printf("%s\n", memchr(testStr, 'i', 3));
}

void ft_memcmp_test()
{
	printf("========================================\n");
	printf("==============FT_MEMCMP_TEST============\n");
	printf("========================================\n");

	char test1[] = "hello";
	char test2[] = "hello";
	char test3[] = "heiio";

	printf("%d\n", ft_memcmp(test1, test2, 3));
	printf("%d\n", memcmp(test1, test2, 3));

	printf("%d\n", ft_memcmp(test1, test3, 3));
	printf("%d\n", memcmp(test1, test3, 3));
}

void ft_strnstr_test()
{
	printf("========================================\n");
	printf("=============FT_STRNSTR_TEST============\n");
	printf("========================================\n");

	char haystack[] = "go go yogurt";
	char needle[] = "gu";
	char needle2[] = "";

	printf("%s\n", ft_strnstr(haystack, needle, 14)); //gurt
	printf("%s\n", strnstr(haystack, needle, 14));
	
	printf("%s\n", ft_strnstr(haystack, needle, 9)); //null
	printf("%s\n", strnstr(haystack, needle, 9));

	size_t len = strlen(haystack);
	printf("%s\n", ft_strnstr(haystack, needle2, 0));	
	printf("%s\n", strnstr(haystack, needle2, 0));
}

void ft_calloc_test()
{
	printf("========================================\n");
	printf("==============FT_CALLOC_TEST============\n");
	printf("========================================\n");
	
	int *intPtr1 = (int *)ft_calloc(1, sizeof(int));
	printf("Before: %d\n", *intPtr1);
	*intPtr1 = 30;
	printf("After: %d\n", *intPtr1);
	
	int *intPtr2 = (int *)calloc(1, sizeof(int));
	printf("Before: %d\n", *intPtr2);
	*intPtr2 = 30;
	printf("After: %d\n", *intPtr2);

	char *charPtr1 = (char *)ft_calloc(1, sizeof(char) * 5);
	printf("Before: %d\n", *charPtr1);
	*charPtr1 = 'a';
	printf("After: %d\n", *charPtr1);
	
	char *charPtr2 = (char *)calloc(1, sizeof(char) * 5);
	printf("Before: %d\n", *charPtr2);
	*charPtr2 = 'a';
	printf("After: %d\n", *charPtr2);
}

void ft_strdup_test()
{
	printf("========================================\n");
	printf("==============FT_STRDUP_TEST============\n");
	printf("========================================\n");

	char str1[] = "hello";
	
	printf("%s\n", ft_strdup(str1));
	printf("%s\n", strdup(str1));
}

void ft_substr_test()
{
	printf("========================================\n");
	printf("==============FT_SUBSTR_TEST============\n");
	printf("========================================\n");
	char const *s = "hello everyone";
	char *ret;

	ret = ft_substr(s, 3, 7);
	printf("%s\n", ret);
}

void ft_strjoin_test()
{
	printf("========================================\n");
	printf("=============FT_STRJOIN_TEST============\n");
	printf("========================================\n");

	char const *s1 = "hello";
	char const *s2 = "hi";
	char *ret;

	ret = ft_strjoin(s1, s2);
	printf("%s\n", ret);
}

void ft_strtrim_test()
{
	printf("========================================\n");
	printf("=============FT_STRTRIM_TEST============\n");
	printf("========================================\n");

	char const *s1 = "!abcaaaba!";
	char const *set = "a!";
	char *ret;

	ret = ft_strtrim(s1, set);
	printf("%s\n", ret);

	char *s2 = "  \t \t \n   \n\n\n\t";
	char *set2 = " \n\t";
	char *ans = "";
	char *ret2;

	ret2 = ft_strtrim(s2, set2);
	printf("ret2: %s\n", ret2);
	
	// if (!strcmp(ret, s2))
		// exit(TEST_SUCCESS);
	// exit(TEST_FAILED);
}

void ft_split_test()
{
	printf("========================================\n");
	printf("==============FT_SPLIT_TEST=============\n");
	printf("========================================\n");

	// char const *s = "@this@is@computer@";
	// char c = '@';
	// char **ret;

	// char const *s = "\0aa\0bbb";
	// char c = '\0';
	// char **ret; //-> (void *)0

	char *s = "                  olol";
	char c = ' ';
	char **ret; //-> "olol"

	ret = ft_split(s, c);
	printf("ret[0]: %s\n", ret[0]);
	printf("ret[1]: %s\n", ret[1]);
}

void ft_itoa_test()
{
	printf("========================================\n");
	printf("===============FT_ITOA_TEST=============\n");
	printf("========================================\n");

	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
}

char fp(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

void ft_strmapi_test()
{
	printf("========================================\n");
	printf("=============FT_STRMAPI_TEST============\n");
	printf("========================================\n");

	char const *s = "abcde";
	char *ret;

	ret = ft_strmapi(s, *fp);
	printf("%s\n", ret);
}

void fp2(unsigned int i, char *str)
{
	// *str += i;
	if (i % 2 == 0)
		*str += ('A' - 'a'); //65-97
}

void ft_striteri_test()
{
	printf("========================================\n");
	printf("=============FT_STRITERI_TEST===========\n");
	printf("========================================\n");

	char *s = ft_strdup("abcde");

	ft_striteri(s, fp2);
	printf("%s\n", s);
}

void ft_putstr_fd_test()
{
	printf("========================================\n");
	printf("=============FT_PUTSTR_FD_TEST==========\n");
	printf("========================================\n");

	char *s = "hello";
	ft_putstr_fd(s, 1);
}

void ft_putendl_fd_test()
{
	printf("========================================\n");
	printf("============FT_PUTENDL_FD_TEST==========\n");
	printf("========================================\n");

	char *s = "hello";
	ft_putendl_fd(s, 1);

	char *s2 = "\xff hi\r\n";
	ft_putendl_fd(s2, 1);
}

void ft_putnbr_fd_test()
{
	printf("========================================\n");
	printf("=============FT_PUTNBR_FD_TEST==========\n");
	printf("========================================\n");

	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_atoi_test();
	//ft_strlcpy_test();
	//ft_strlcat_test();
	//ft_strncmp_test();
	//ft_memset_test();
	//ft_bzero_test();
	//ft_memcpy_test();
	//ft_memmove_test();
	//ft_strchr_test();
	//ft_strrchr_test();
	//ft_memchr_test();
	//ft_memcmp_test();
	//ft_strnstr_test();
	//ft_calloc_test();
	//ft_strdup_test();
	//ft_substr_test();
	//ft_strjoin_test();
	//ft_strtrim_test();
	//ft_itoa_test();
	//ft_strmapi_test();
	//ft_striteri_test();
	//ft_putstr_fd_test();
	//ft_putendl_fd_test();
	//ft_putnbr_fd_test();
	//ft_lstclear_test();
	
	return (1);
}