#ifndef Carte_d'identite2_H_INCLUDED
#define Carte_d'identite2_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define TAILLE 40
#endif // TP_FICHIER_H_INCLUDED

typedef struct carte{
    char * nom;
    char * prenom;
    char * adresse;
    char * ville;
    char * codeP;
}carte;

// ------------------------------prototype -------------------------
extern void creation(carte identite);

FILE* fopen(const char* fichier, const char* Ouverture);
