 
#include <stdio.h>

int somme(int x, int y)
{
    return x + y;
}

int produit(int x, int y)
{
    return x * y;
}

int difference(int x, int y)
{
    return x - y;
}

int quotient(int x, int y)
{
    return x / y;
}

int main()
{
    int a = 1234;
    int b = 567;
    
    printf("==== Appels explicites === \n");
    printf("somme de %d et %d = %d\n", a, b, a+b);
    printf("produit de %d et %d = %d\n", a, b, a*b);
    printf("difference de %d et %d = %d\n", a, b, a-b);
    printf("quotient de %d et %d = %d\n", a, b, a/b);
    
    printf("==== Avec appel de fonctions === \n");
    printf("somme de %d et %d = %d\n", a, b, somme(a,b));
    printf("produit de %d et %d = %d\n", a, b, produit(a,b));
    printf("difference de %d et %d = %d\n", a, b, difference(a,b));
    printf("quotient de %d et %d = %d\n", a, b, quotient(a,b));
    
    return 0;
}
