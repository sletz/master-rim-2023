 
#include <stdio.h>

/*
Structure de contrôle : boucle avec le FOR pour traiter des tableaux
*/

float table2[10] = { 1.f, 23.f, 67.f, 100.f, 56.f, 29.f, 0.f, 7.f, 234.f, 10.f };

float sum_array()
{
    float sum = 0.f;
    
    int i;
    for (i = 0; i < 10; i = i+1) {
        sum = sum + table2[i];
    }
    
    return sum;
}

/*
float mean_array()
{
    float sum = 0.f;
    
    int i;
    for (i = 0; i < 10; i = i+1) {
        sum = sum + table2[i];
    }
    
    return sum/10;
}
*/

// Computing mean by reusing 'sum_array'
float mean_array()
{
    float sum = sum_array();
    return sum/10;
}

float min_array()
{
    // Find out min in table2
    float min_val = table2[0];
    for (int i = 0; i < 10; i = i+1) {
        if (table2[i] < min_val) {
            min_val = table2[i];
        }
    }
    return min_val;
}

float max_array()
{
    // Find out max in table2
    float max_val = table2[0];
    for (int i = 0; i < 10; i = i+1) {
        if (table2[i] > max_val) {
            max_val = table2[i];
        }
    }
    return max_val;
}

int main()
{
    printf("La somme est = %f\n", sum_array());
    printf("La moyenne est = %f\n", mean_array());
    printf("La value min est = %f\n", min_array());
    printf("La value max est = %f\n", max_array());
    
    return 0;
}
