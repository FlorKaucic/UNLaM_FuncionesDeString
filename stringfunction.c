#include "stringfunction.h"

char * str_str(char *s1, char *s2)
{
    while(*s1!='\0')
        if(*s1==*s2&&son_iguales(s1,s2))
            return s1;
        else
            s1++;
    return s1;
}

int son_iguales(const char *s1, const char *s2)
{
    int i;
    for(i=0; i<str_len(s2); i++)
        if(*(s1+i) != *(s2+i))
            return 0;
    return 1;
}

int str_len(char *s)
{
    int cont = 0;
    while(*s != '\0')
    {
        cont++;
        s++;
    }
    return cont;
}
