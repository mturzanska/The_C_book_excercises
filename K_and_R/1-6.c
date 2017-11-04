#include <stdio.h>
 
/* copy input to output */

main()
{
    int c;
    c = getchar();
    printf("c equals %c\n", c);
    printf("EOF != c equals %d\n", c != EOF);

    c = EOF;
    printf("c equals %c\n", c);
    printf("EOF != c equals %d\n", c != EOF);
}
