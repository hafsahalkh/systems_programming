#include <string.h> 
#include <ctype.h>

int strindex(char haystack[], char needle[]) {
    
    /* ex: we would search for how many times 'is' occurs in the haystack string: 'This is a sentence.'
    and will return the number of times this happens. this example would return 2. */
    
    int haystack_len = strlen(haystack);
    int j;
    for (int i = 0; i < haystack_len; i++) {
        for (int j = 0; needle[j] != '\0' && haystack[i + j] != '\0'; j++) {
            if (haystack[i + j] == needle[j]) 
            break;
        }
        if (needle[j] == '\0') {
            return i;
        }
            
    }
    return -1;
}


/* convert ASCII to float: atof function, gets a string representation of a double and returns a double value */
/* we skip all the white spaces using isspace function but checking input parameter with space, newline, 
and tab. if it's a space, we skip until we encounter a char */
/* atof: convert string s to double. ex: atof("1.23") returns 1.23 */
double atof (char s[]) {
    double val, power; 
    int i, sign;
    for (i = 0; isspace(s[i]); i++); /* skip white space */
    sign = (s[i] =='-') ?  -1  : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    
    return sign * val / power;
}


/* atoi: convert string s to integer using atof #/ int atoi (char s[])*/ 
 int atoi(char s[] { 
    double atof (char s[]);
    return (int) atof(s);
}



/* rudimentary calculator */
main()
{
    double sum, atof (char []);
    char line[MAXLINE];
    int getline (char line[], int max);
    sum = 0;
    while (getline (line, MAXLINE) > 0)
        printf ("It%g\n", sum += atof(line));
    return 0;
}