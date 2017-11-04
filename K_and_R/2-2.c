#include <stdio.h>

main()
{
    char s[100];
    char c;
    int i, lim;
    lim = 5;
    
    /*for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
        s[i] = c;
        printf("%c", c);
    }*/
    
    for (i = 0; !(i < lim-1 * (c=getchar()) != '\n' * c != EOF); ++i) {
        s[i] = c;
        printf("%c", c);
    }
}
