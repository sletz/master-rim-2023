
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* Generateur de rampe */

float* table_rampe;
int table_size_rampe;
int phase_rampe;

/* Création et remplissage de la table avec un période du signal */
void init_rampe(int sample_rate, int freq)
{
    table_size_rampe = (int)((float)sample_rate / (float)freq);
    printf("table_size_rampe: %d\n", table_size_rampe);
    
    /* Alloue dynamiquement une table. */
    table_rampe = (float*)malloc(table_size_rampe * sizeof(float));
    
    /* Remplit la table */
    for (int i = 0; i < table_size_rampe; i = i + 1) {
        table_rampe[i] = (2.f * i/(float)table_size_rampe) - 1.f;
    }

    /* Initialise la phase */
    phase_rampe = 0;
}

void destroy_rampe()
{
    /* Desalloue le tableau. */
    free(table_rampe);
}

/* Copie 'nframes' echantillons de la table dans le buffer output et gestion de la phase */
void process_rampe(float* output, int nframes)
{
    int i;
    for (i = 0; i < nframes; i++) {
        output[i] = table_rampe[phase_rampe];
        phase_rampe = phase_rampe + 1;
        if (phase_rampe == table_size_rampe) {
            phase_rampe = 0;
        }
    }
}
/* Retourne 1 echantillon et gestion de la phase */
float process_one_sample_rampe()
{
    float res = table_rampe[phase_rampe];
    phase_rampe = phase_rampe + 1;
    if (phase_rampe == table_size_rampe) {
        phase_rampe = 0;
    }
    return res;
}

void display_rampe()
{
    int i;
    for (i = 0; i < table_size_rampe; i++) {
        printf("Sample %f\n", table_rampe[i]);
    }
}

int main()
{
    init_rampe(44100, 200);
    display_rampe();
    
    // Simuler l'audio: génère une séquence de 500 samples
    printf("==================\n");
    printf("Simuler l'audio\n");
    
    for (int i = 0; i < 500; i++) {
        printf("Sample %f\n", process_one_sample_rampe());
    }
}
