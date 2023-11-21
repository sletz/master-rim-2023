
#include <stdio.h>
#include <math.h>

void square1()
{
    float table[20];
    
    printf("=======square1========\n");
    
    int i;
    // Génération de la 1° moitié
    for (i = 0; i < 20/2; i = i + 1) {
        table[i] = -1.f;
    }
    // Génération de la 2° moitié
    for (i = 20/2; i < 20; i = i + 1) {
        table[i] = 1.f;
    }
    
    for (i = 0; i < 20; i++) {
        printf("Sample %f\n", table[i]);
    }
}

void square2()
{
    float table[20];
    printf("=======square2========\n");
    
    int i;
    for (i = 0; i < 20; i = i + 1) {
        if (i < 10) {
            table[i] = -1.f;
        } else {
            table[i] = 1.f;
        }
    }
    
    for (i = 0; i < 20; i++) {
        printf("Sample %f\n", table[i]);
    }
}

void ramp()
{
    float table[20];
    printf("=======ramp========\n");
    
    int i;
    for (i = 0; i < 20; i++) {
        table[i] = (2.f * i/19.f) - 1.f;
    }
    
    for (i = 0; i < 20; i++) {
        printf("Sample %f\n", table[i]);
    }
}

void sinus()
{
    float table[20];
    printf("=======sinus========\n");
    
    int i;
    for (i = 0; i < 20; i++) {
        table[i] = sin(2.f * M_PI * i/19.f);
    }
    
    for (i = 0; i < 20; i++) {
        printf("Sample %f\n", table[i]);
    }
}
  
int main()
{
    square1();
    square2();
    ramp();
    sinus();
    
    return 0;
}
