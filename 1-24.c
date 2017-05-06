#include <stdio.h>

main()
{
    int in_comment, in_quote;
    int left_brackets, left_parentheses, left_braces;
    int right_brackets, right_parentheses, right_braces;
    char previous;
    char c;

    
    in_quote = 0;
    in_comment = 0;

    previous = 'a';

    left_brackets = 0;
    left_parentheses = 0;
    left_braces = 0;
    right_brackets = 0;
    right_parentheses = 0;
    right_braces = 0;
    

    while ((c = getchar()) != EOF) {
        if (in_comment == 0 && in_quote == 0 && previous != '\\') {
            if (c == '"')
                in_quote = 1;
            else if (c == '*' && previous == '/')
                in_comment = 1;
            else {
                if (c == '{')
                    ++left_braces;
                if (c == '}')
                    ++right_braces;
                if (c == '[')
                    ++left_brackets;
                if (c == ']')
                    ++right_brackets;
                if (c == '(')
                    ++left_parentheses;
                if (c == ')')
                    ++right_parentheses;
            }
        }
        if (in_quote == 1 && c == '"')
            in_quote = 0;
        if (in_comment == 1 && previous == '*' && c == '/')
            in_comment = 0;
        previous = c;
    }
    if (left_braces != right_braces || left_brackets != right_brackets ||  left_parentheses != right_parentheses)
        printf("%s", "Nicht gut");
}
