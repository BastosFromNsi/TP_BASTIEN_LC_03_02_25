#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <Windows.h>
#include <conio.h>

Note *creerNote()
{
    Note *new_note = malloc(sizeof(Note));
    return new_note;
}

void libererNote(Note *note)
{
    free(note);
    note = NULL;
}

void SimulerNote(Note **note, int nb_notes)
{

    if (nb_notes > 12)
    {
        printf(" Erreur, limite atteinte \n");
    }
    else
    {
        while (1)
        {
            if (kbhit())
            {
                char n;
                n = getch();
                if (n == 'q')
                {
                    break;
                }
                else
                {
                    for (int i = 0; i < nb_notes; i++)
                    {
                    }
                }
            }
        }
    }
}

int main()
{
    int nb_note = 12;

    float frequencies[12] = {261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99,
                             392.00, 415.30, 440.00, 466.16, 493.88};
}
