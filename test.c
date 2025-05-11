#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

void test_part1(void)
{
    // isalpha, isdigit, isalnum, isascii, isprint
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));   // expect 1
    printf("ft_isdigit('3'): %d\n", ft_isdigit('3'));   // expect 1
    printf("ft_isalnum('!'): %d\n", ft_isalnum('!'));   // expect 0
    printf("ft_isascii(127): %d\n", ft_isascii(127));   // expect 1
    printf("ft_isprint(31): %d\n", ft_isprint(31));     // expect 0

    // strlen
    printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello")); // 5

    // memset
    char buf1[10];
    ft_memset(buf1, 'A', 5);
    buf1[5] = '\0';
    printf("ft_memset: %s\n", buf1);  // AAAAA

    // bzero
    char buf2[5] = "abcd";
    ft_bzero(buf2, 4);
    printf("ft_bzero: %d %d %d %d\n", buf2[0], buf2[1], buf2[2], buf2[3]);

    // memcpy
    char src[] = "12345";
    char dest[10];
    ft_memcpy(dest, src, 5);
    dest[5] = '\0';
    printf("ft_memcpy: %s\n", dest);  // 12345

    // memmove
    char overlap[] = "abcdef";
    ft_memmove(overlap + 2, overlap, 4);  // move "abcd" to start at index 2
    printf("ft_memmove overlap: %s\n", overlap); // ababcd

    // strlcpy
    char cpy[10];
    size_t len = ft_strlcpy(cpy, "hello", sizeof(cpy));
    printf("ft_strlcpy: %s (len: %zu)\n", cpy, len); // hello

    // strlcat
    char cat[20] = "hi ";
    size_t catlen = ft_strlcat(cat, "there", sizeof(cat));
    printf("ft_strlcat: %s (len: %zu)\n", cat, catlen); // hi there

    // toupper, tolower
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));  // A
    printf("ft_tolower('Z'): %c\n", ft_tolower('Z'));  // z

    // strchr, strrchr
    printf("ft_strchr: %s\n", ft_strchr("abcabc", 'b'));  // bcabc
    printf("ft_strrchr: %s\n", ft_strrchr("abcabc", 'b')); // bc

    // strncmp
    printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 2)); // 0

    // memchr
    printf("ft_memchr: %s\n", (char *)ft_memchr("123456", '4', 6)); // 456

    // memcmp
    printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3)); // <0

    // strnstr
    printf("ft_strnstr: %s\n", ft_strnstr("123abc456", "abc", 9)); // abc456

    // atoi
    printf("ft_atoi: %d\n", ft_atoi("  -42")); // -42

    // calloc
    int *a = ft_calloc(4, sizeof(int));
    for (int i = 0; i < 4; i++) printf("%d ", a[i]); printf("\n");
    free(a);

    // strdup
    char *dup = ft_strdup("hello");
    printf("ft_strdup: %s\n", dup);
    free(dup);
}

void test_part2(void)
{
    // ft_substr
    char *sub = ft_substr("abcdef", 2, 3);
    printf("ft_substr: %s\n", sub);  // cde
    free(sub);

    // ft_strjoin
    char *joined = ft_strjoin("42", "Tokyo");
    printf("ft_strjoin: %s\n", joined);  // 42Tokyo
    free(joined);

    // ft_strtrim
    char *trim = ft_strtrim("..hello..", ".");
    printf("ft_strtrim: %s\n", trim);  // hello
    free(trim);

    // ft_split
    char **split = ft_split("a b c", ' ');
    for (int i = 0; split[i]; i++) printf("split[%d]: %s\n", i, split[i]);
    for (int i = 0; split[i]; i++) free(split[i]);
    free(split);

    // ft_itoa
    char *itoa = ft_itoa(-123);
    printf("ft_itoa: %s\n", itoa);
    free(itoa);

    // ft_strmapi
    char *mapi = ft_strmapi("abc", [](unsigned int i, char c) {
        return c + 1;
    });
    printf("ft_strmapi: %s\n", mapi);  // bcd
    free(mapi);

    // ft_striteri
    char test[] = "abc";
    ft_striteri(test, [](unsigned int i, char *c) {
        *c = *c + 1;
    });
    printf("ft_striteri: %s\n", test);  // bcd

    // ft_putchar_fd
    ft_putchar_fd('X', 1); write(1, "\n", 1);

    // ft_putstr_fd
    ft_putstr_fd("Libft!", 1); write(1, "\n", 1);

    // ft_putendl_fd
    ft_putendl_fd("Line with newline", 1);

    // ft_putnbr_fd
    ft_putnbr_fd(12345, 1); write(1, "\n", 1);
    ft_putnbr_fd(-2147483648, 1); write(1, "\n", 1);
}

int main(void)
{
    printf("=== Part 1 Tests ===\n");
    test_part1();
    printf("\n=== Part 2 Tests ===\n");
    test_part2();
    return 0;
}
