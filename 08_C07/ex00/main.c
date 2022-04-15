#include <stdio.h>
#include <string.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char text[] = "Banana %&?? Teste1 test99";

	// char *dup;
	// *text = ;
	printf("   String: %s\n", text);
	printf("   strdup: %s\n", strdup(text));
	printf("ft_strdup: %s\n", ft_strdup(text));

	return (0);
}

// int main()
// {
//     char original[] = {-1, 'z', 'a', 'c', 'a', 'r', 'i', 'a', 's'};
//     char *duplicate;
//     int o_len,d_len;

//     duplicate = ft_strdup(original);
//     o_len = strlen(original);
//     d_len = strlen(duplicate);

//     printf("Original String: '%s' (%d)\n",
//             original,o_len);
//     printf("Duplicate string: '%s' (%d)\n",
//             duplicate,d_len);

//     return(0);
// }

// int main(void)
// {
//     int res;
//     char str1[] = "Teste";
//     char str2[] = "Lorem ipsum dolor sit amet consecutor";
//     char str3[] = "\t....\r...\n....\f....fim.\n";
//     char str4[] = " ";
//     char str5[] = " :teste   :";
//     char str6[] = "";
//     char str7[] = {-1, 'z', 'a', 'c', 'a', 'r', 'i', 'a', 's'};
//     char str8[] = "Suco de cevadiss, é um leite divinis.";
//     char str9[] = {-1, -3, 26, 42};
//     char *tests[] = {str1,
//                      str2,
//                      str3,
//                      str4,
//                      str5,
//                      str6,
//                      str7,
//                      str8,
//                      str9};

//     for (int i = 0; i < 9; i++)
//     {
//         res = strcmp(strdup(tests[i]), ft_strdup(tests[i]));
//         if (res)
//             printf("\e[1;31m0%d: KO!\e[0m ", i + 1);
//         printf(" \e[1;32m0%d: OK!\e[0m ", i + 1);
//     }
//     printf("\n");
// }
