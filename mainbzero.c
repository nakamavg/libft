#include "libft.h"
#include <stdio.h>

int main() {
    char s[10];
	
    ft_bzero(s, sizeof(s));

    int c = 0;
    while (c < sizeof(s)) {
        printf("%d ", (int)s[c]);
        c++;
    }

    return 0;
}
