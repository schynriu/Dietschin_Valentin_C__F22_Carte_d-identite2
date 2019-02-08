#include "Carte_d'identite2.h"
void creation(carte identite){
FILE* fichier;

    *(identite.nom)=NULL;
    *(identite.prenom)=NULL;
    *(identite.adresse)=NULL;
    *(identite.ville)=NULL;
    *(identite.codeP)=NULL;


  if((identite.nom=malloc(TAILLE*sizeof(char)))==NULL){
     return 0;
    }

    else {
        free(identite.nom);
    }

  if((identite.prenom=malloc(TAILLE*sizeof(char)))==NULL){
     return 0;
    }

    else {
        free(identite.prenom);
    }


  if((identite.adresse=malloc(TAILLE*sizeof(char)))==NULL){
     return 0;
    }

    else {
        free(identite.adresse);
    }

  if((identite.ville=malloc(TAILLE*sizeof(char)))==NULL){
     return 0;
    }

    else {
        free(identite.ville);
    }

  if((identite.codeP=malloc(TAILLE*sizeof(char)))==NULL){
     return 0;
    }

    else {
        free(identite.codeP);
    }

    printf("Veuillez entrez votre nom\n");
    gets(identite.nom);


    printf("Veuillez entrez votre prenom\n");
    scanf ("%s",identite.prenom);

    printf("Veuillez entrez votre adresse\n");
    scanf ("%s",identite.adresse);

    printf("Veuillez entrez votre ville\n");
    scanf ("%s",identite.ville);

    printf("Veuillez entrez votre code postal\n");
    scanf ("%s",identite.codeP);

                fichier = fopen("Carte d'identiteé.txt", "a");
                fprintf(fichier, "le nom est %s \n",identite.nom);
                fprintf(fichier, " Le prénom est %s \n",identite.prenom);
                fprintf(fichier, " L'adresse est %s \n",identite.adresse);
                fprintf(fichier, " La ville est %s \n",identite.ville);
                fprintf(fichier, " Le code postal est %s \n",identite.codeP);
                fclose(fichier);

}


