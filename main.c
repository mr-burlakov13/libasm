#include "libasm.h"

int main()
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "";
	str2 = "privet!!)";
	str3 = "ldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgregerldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgregerldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgregerldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgreger";

	printf("\n\nSTRLEN_REZULT:\n\n");

	printf("strlen = %zu\n", strlen(str1));
	printf("ft_strlen = %zu\n", ft_strlen(str1));
	printf("strlen = %zu\n", strlen(str2));
	printf("ft_strlen = %zu\n", ft_strlen(str2));
	printf("strlen = %zu\n", strlen(str3));
	printf("ft_strlen = %zu\n", ft_strlen(str3));

	printf("\n\nSTRCPY_REZULT:\n\n");
	char s1[300];
	char s2[300];
	char s3[300];

	printf("strcpy = %s\n", strcpy(s1, str1));
	printf("ft_strcpy = %s\n", ft_strcpy(s1, str1));
	printf("strcpy = %s\n", strcpy(s2, str2));
	printf("ft_strcpy = %s\n", ft_strcpy(s2, str2));
	printf("strcpy = %s\n", strcpy(s3, str3));
	printf("ft_strcpy = %s\n", ft_strcpy(s3, str3));

	printf("\n\nSTRCMP_REZULT:\n\n");

	char *st1 = "";
	char *st2 = "privet";
	char *st3 = "ldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgregerldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgregerldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgregerldksdjfhdkuhgdfuyghdfughodufihgdoiufhgipufyhgreger";

	printf("strcmp = %d\n", strcmp(st1, str1));
	printf("ft_strcmp = %d\n", ft_strcmp(st1, str1));
	printf("strcmp = %d\n", strcmp(st2, str2));
	printf("ft_strcmp = %d\n", ft_strcmp(st2, str2));
	printf("strcmp = %d\n", strcmp(st3, str3));
	printf("ft_strcmp = %d\n", ft_strcmp(st3, str3));
	

	printf("\n\nSTRDUP_REZULT:\n\n");

	printf("strdup = %s\n", strdup(str1));
	printf("ft_strdup = %s\n", ft_strdup(str1));
	printf("strdup = %s\n", strdup(str2));
	printf("ft_strdup = %s\n", ft_strdup(str2));
	printf("strdup = %s\n", strdup(str3));
	printf("ft_strdup = %s\n", ft_strdup(str3));

	printf("\n\nWRITE_REZULT:\n\n");

	int fd;
	int nb1;
	int nb2;
	int nb3;
	fd = open("text", O_WRONLY | O_TRUNC);

	nb1 = write(1, "lololo\n", 7);
	nb2 = ft_write(1, "lololo\n", 7);
	printf("write = %d \n", nb1);
	printf("ft_write = %d\n",nb2);

	nb1 = write(fd, "lololo", 6);
	nb2 = ft_write(fd, "lololo", 6);
	printf("write = %d \n", nb1);
	printf("ft_write = %d\n\n",nb2);

	close(fd);

	nb3 = write(42, "erro_3", 6);
	printf("errno = %s\n", strerror(errno));
	printf("erro = %d\n", nb3);

	nb3 = ft_write(42, "erro_3", 6);
	printf("errno = %s\n", strerror(errno));
	printf("erro = %d\n", nb3);


	printf("\n\nREAD_REZULT:\n\n");

	int fd3 = 0;
	int r_co;
	int r_er;
	char s11[20];
	char s22[20];
	char s33[20];
	errno = 0;
	fd = open("text", O_RDONLY);
	nb1 = read(fd, s11, 6);
	printf("origin = %d , text = %s, error = %d \n", nb1 , s11, errno);
	nb2 = ft_read(fd, s22, 6);
	printf("ft = %d , text = %s, error = %d \n\n", nb2 , s22, errno);
	close(fd);
	fd = open("text22", O_RDONLY);
	nb3 = read(fd, s33, 6);
	printf("error = %d , text = %s, error = %d \n", nb3 , s33, errno);
	printf("errno = %s\n", strerror(errno));
	nb3 = ft_read(fd, s33, 6);
	printf("error = %d , text = %s, error = %d \n", nb3 , s33, errno);
	printf("errno = %s\n", strerror(errno));
	close(fd);
 
}
