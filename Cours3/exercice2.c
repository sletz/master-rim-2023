 
#include <stdio.h>

/*
Structure de contrôle : boucle avec le FOR pour traiter des tableaux
*/

int main()
{
   float table2[10] = { 1.f, 23.f, 67.f, 100.f, 56.f, 29.f, 0.f, 7.f, 234.f, 10.f };
    
    // Compute the sum of all items in the table2
    float sum = 0.f;
    
    int i;
    for (i = 0; i < 10; i = i+1) {
        sum = sum + table2[i];
    }
    printf("La somme est = %f\n", sum);
    
    printf("La moyenne est = %f\n", sum/10);
    
    // Find out min and max in table2
    float min_val = table2[0];
    for (int i = 0; i < 10; i = i+1) {
        if (table2[i] < min_val) {
            min_val = table2[i];
        }
    }
    
    float max_val = table2[0];
    for (int i = 0; i < 10; i = i+1) {
        if (table2[i] > max_val) {
            max_val = table2[i];
        }
    }
    
    printf("La value min est = %f\n", min_val);
    printf("La value max est = %f\n", max_val);
    
    return 0;
}
