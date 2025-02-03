#ifndef PIANO
#define PIANO

typedef struct
{
    float frequence;
    float duree;
    
}Note;

Note * creerNote();
void libererNote(Note * note);
void SimulerNote(Note * note, int nb_notes);

#endif