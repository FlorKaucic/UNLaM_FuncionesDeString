#include "test.h"

void test_str_len()
{
    char s1[] = {"una cadena sin sentido"};
    char s2[] = {"sin"};
    char s3[] = {"na"};
    char s4[] = {"na sin"};
    char s5[] = {"sensor"};
    printf("\n\nLa cadena '%s' tiene %d caracteres", s1, str_len(s1));
    printf("\nLa cadena '%s' tiene %d caracteres", s2, str_len(s2));
    printf("\nLa cadena '%s' tiene %d caracteres", s3, str_len(s3));
    printf("\nLa cadena '%s' tiene %d caracteres", s4, str_len(s4));
    printf("\nLa cadena '%s' tiene %d caracteres", s5, str_len(s5));
}

void test_str_str()
{
    char s1[] = {"una cadena sin sentido"};
    char s2[] = {"sin"};
    char s3[] = {"na"};
    char s4[] = {"na sin"};
    char s5[] = {"sensor"};
    char s6[] = {"nanananananananabatman"};
    char * posicion;

    posicion = str_str(s1,s2);
    print_resultado_str_str(posicion, s1, s2);

    posicion = str_str(s1,s3);
    print_resultado_str_str(posicion, s1, s3);

    posicion = str_str(s1,s4);
    print_resultado_str_str(posicion, s1, s4);

    posicion = str_str(s1,s5);
    print_resultado_str_str(posicion, s1, s5);

    posicion = str_str(s6,s3);
    print_resultado_str_str(posicion, s6, s3);
}

void print_resultado_str_str(char * posicion, char * s1, char * s2)
{
    if(*posicion == '\0')
        printf("\n\nLa subcadena '%s' NO se encuentra en la cadena\n'%s'.", s2, s1);
    else
        printf("\n\nLa subcadena '%s' se encuentra en la cadena\n'%s' en la posicion: %d[%c]",s2, s1, (int)(posicion-s1), *posicion);
}
