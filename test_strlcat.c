#include <stdio.h>
#include <string.h>
int main()

{
	char dest[10] = "deneme";
	char src[] = "osman";
	printf("%ld\n", strlen(dest));
	strlcat(dest, src, 8);
	printf("%ld\n", strlen(dest));
	printf("%s", dest);
}