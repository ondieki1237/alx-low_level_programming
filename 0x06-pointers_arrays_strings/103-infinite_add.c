#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r), or 0 if the result can't be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, l, m, n;
    int carry = 0;

    /* Find the lengths of the strings n1 and n2 */
    for (i = 0; n1[i]; i++);
    for (j = 0; n2[j]; j++);
    
    /* If the result can't fit in r, return 0 */
    if (i > size_r - 1 || j > size_r - 1)
        return (0);

    r[size_r] = '\0';  /* Null-terminate the buffer */
    k = size_r - 1;

    /* Add the numbers starting from the last digit */
    for (i -= 1, j -= 1; i >= 0 || j >= 0 || carry; i--, j--, k--)
    {
        if (k < 0)
            return (0);
        m = (i >= 0) ? n1[i] - '0' : 0;
        n = (j >= 0) ? n2[j] - '0' : 0;
        r[k] = (m + n + carry) % 10 + '0';
        carry = (m + n + carry) / 10;
    }

    if (k == size_r - 1)
        return (0);

    /* Shift the result to the start of the buffer if necessary */
    for (l = 0, k++; k < size_r; l++, k++)
        r[l] = r[k];
    r[l] = '\0';

    return (r);
}

