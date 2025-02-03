#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Note * creerNote()
{
    Note * new_note = malloc(sizeof(Note));
    printf(" Entrez la frequence de la note", new_note->frequence);
    scanf("%2.f", &new_note->frequence);
    printf(" Entrez la duree de la note", new_note->duree);
    scanf("%2.f", &new_note->duree);
    return new_note;
}

void libererNote(Note * note)
{
    free(note);
}





