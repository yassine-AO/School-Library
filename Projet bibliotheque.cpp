#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int n,u;
struct tous
	   {
		char titre[50];
		long isbn;
		int edition;
		int exmp;
		long id;
		char nom[50];
		char prenom[50];
		int date;
		int anset;
		int dateed;
		int dateef;
		char titreres[50];
	   };
	   
struct tous l[2000];
void ajout();
void suppression();
void modification();
void ajouta();
void suppressiona();
void modificationa();
void recherche();
int main(){
	int x,y,z,w,i;
	 printf("                                                    +********************************************************+\n");
     printf("                                                    *        B I B L I O T H E Q U E   H E M   B E T A       *\n");
     printf("                                                    +********************************************************+\n");
     printf("CLIQUER SUR ENTRER POUR CONTINUER :))))");
     getchar();
	   home:
	   	printf("Pour gerer les livres taper 1 ||");
	   	printf(" Pour gerer les abonnes de la bibliotheque taper 2:\n");
	   	printf("Pour chercher un livre taper 4:||");
	   	printf(" Pour voir les livres reserve taper 5:\n");
	   	scanf("%d", &x);
	   	system("cls");
	   	if(x==1)
	   {
	   	printf("Pour ajouter un livre taper 1:\n");
	   	printf("Pour supprimer un livre taper 2:\n");
	   	printf("Pour modifier un livre taper 3:\n");
	   	printf("Pour quitter et retourner a l'acceuil taper 0:\n");
	   	scanf("%d", &y);
	   	system("cls");
	   	switch (y)
		   {
	   		case 1:
	   		   {
	   		   	ajout();
	   		   	
			   }
			   goto home;
	   		break;
	   		case 2:
	   			{
	   			suppression();	
				}
			goto home;
		    break;
		    case 3:
		    	{
		    	modification();	
				}
			goto home;
			break;
			case 0:
		    	{
		    		goto home;
				}
			break;
	   	    }
	   	}
	   if(x==2)
	   {
	   	printf("Pour ajouter un abonne taper 1:\n");
	   	printf("Pour supprimer un abonne taper 2:\n");
	   	printf("Pour modifier un abonne taper 3:\n");
	   	printf("Pour quitter et retourner a l'acceuil taper 0:\n");
	   	scanf("%d", &z);
	   	system("cls");
	   	switch (z)
	   	   {
	   		case 1:
	   		   {
	   		   	ajouta();
			   }
			goto home;
	   		break;
	   		case 2:
	   			{
				  suppressiona(); 	
				}
			goto home;
		    break;
		    case 3:
		    	{
		    		modificationa();
				}
			goto home;
			break;
			 case 0:
		    	{
		    	goto home;
				}
			break;
		   }
	   }
	   	if(x==4)
		{
		   	recherche();
		   	goto home;
		}	
		if(x==5)
	   {
	   	printf("voila la liste des livres reserve :)\n");
     //struct tous l[u];
     for(i=1 ; i<=u ; i++)
	 {
	 	printf("Livre n %d : %s\n",i,l[i].titreres);
	 	printf("\n^^^^^^^^^^^^^^^^^\n");
	 	goto home;
	 }
	   }
	return 0;
	}
	void ajout()
	{
		int i,j;
		printf("Entrer le nombre de livre que vous voulez ajouter :)\n");
		scanf("%d", &n);
		system("cls");
		//struct tous l[n];
		 for(i=1 ; i<=n ; i++)
		{
			printf("Entrer le titre du livre numero %d:\t", i);
			scanf("%s",&l[i].titre);
			printf("Entrer l'ISBN du livre numero %d:\t", i);
			scanf("%ld",&l[i].isbn);
			printf("Entrer l'edition du livre numero %d:\t", i);
			scanf("%d",&l[i].edition);
			printf("Entrer le nombre d'exemplaire du livre numero %d:\t", i);
			scanf("%d",&l[i].exmp);
			printf("\n***************\n");
			}
			system("cls");
			printf("Le(s) livres ont etaient ajoute avec succes :) \n");
			printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	return;
	}
    void suppression()
	{
     int i,s,j;
     printf("voila la liste des livres disponibles :)\n");
     //struct tous l[n];
     for(i=1 ; i<=n ; i++)
	 {
	 	printf("Livre n %d : %s\n",i,l[i].titre);
	 	printf("\n^^^^^^^^^^^^^^^^^\n");
	 }
	 printf("Taper l'indice du livre que vous voulez supprimer :) : \t");
	 scanf("%d",&s);
	 strcpy(l[s].titre, "Ce livre est supprimee");
	 l[s].isbn=-1;
	 l[s].edition=-1;
	 l[s].exmp=-1;
	 system("cls");
	 printf("Le livre a etait supprime avec succes :) \n");
	 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 return;
	}
	void modification()
	{
		int i,s,j,o,r,t,k;
		modifautlv:
	 printf("voila la liste des livres existants :))\n");
	 //struct tous l[n];
     for(i=1 ; i<=n ; i++)
	 {
	 	printf("Livre n %d : %s\n",i,l[i].titre);
	 	printf("\n^^^^^^^^^^^^^^^^^\n");
	 }
	 printf("Taper l'indice du livre que vous voulez modifier :) : \t");
	 scanf("%d",&s);
	 system("cls");
	 modifdumm:
	 printf("Si vous voulez modifier le titre taper 1\n");
	 printf("Si vous voulez modifier le code ISBN taper 2 \n");
	 printf("Si vous voulez modifier l'edition taper 3 \n");
	 printf("Si vous voulez modifier le nombre d'exemplaire taper 4 \n");
	 scanf("%d",&j);
	 system("cls");
	 if(j==1)
	 {
	 	printf("Veuillez saisir le nouveau titre :\t");
	 	scanf("%s",&l[s].titre);
	 	system("cls");
	 	printf("Le titre du livre a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme livre taper 1 \n");
	 	printf("Afin de modifier un autre livre taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&o);
	 	system("cls");
	 	switch (o)
		 {
		 	case 1:
			 {
		 		goto modifdumm;
				break;
			 }
			case 2:
			{
				goto modifautlv;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	 if(j==2)
	 {
	 	printf("Veuillez saisir le nouveau code ISBN :\t");
	 	scanf("%ld",&l[s].isbn);
	 	system("cls");
	 	printf("L'ISBN du livre a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme livre taper 1 \n");
	 	printf("Afin de modifier un autre livre taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&r);
	 	system("cls");
	 	switch (r)
		 {
		 	case 1:
			 {
		 		goto modifdumm;
				break;
			 }
			case 2:
			{
				goto modifautlv;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	 if(j==3)
	 {
	 	printf("Veuillez saisir la nouvelle edition du livre :\t");
	 	scanf("%d",&l[s].edition);
	 	system("cls");
	 	printf("L'edition du livre a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme livre taper 1 \n");
	 	printf("Afin de modifier un autre livre taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&t);
	 	system("cls");
	 	switch (t)
		 {
		 	case 1:
			 {
		 		goto modifdumm;
				break;
			 }
			case 2:
			{
				goto modifautlv;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	 if(j==4)
	 {
	 	printf("Veuillez saisir le nouveau nombre d'exemplaire :\t");
	 	scanf("%d",&l[s].exmp);
	 	system("cls");
	 	printf("Le nombre d'exemplaire du livre a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme livre taper 1 \n");
	 	printf("Afin de modifier un autre livre taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&k);
	 	system("cls");
	 	switch (k)
		 {
		 	case 1:
			 {
		 		goto modifdumm;
				break;
			 }
			case 2:
			{
				goto modifautlv;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	return;
	}
	void ajouta()
	{
		int i,j;
		printf("Entrer le nombre des abonnes que vous voulez ajouter :)\n");
		scanf("%d", &n);
		system("cls");
		//struct tous l[n];
		 for(i=1 ; i<=n ; i++)
		    {
			printf("Entrer l'ID de l'abonne numero %d:\t", i);
			scanf("%ld",&l[i].id);
			printf("Entrer le nom de l'abonne numero %d:\t", i);
			scanf("%s",&l[i].nom);
			printf("Entrer le prenom de l'abonne numero %d:\t", i);
			scanf("%s",&l[i].prenom);
			printf("Entrer la date de naissance de l'abonne numero %d:\t", i);
			scanf("%d",&l[i].date);
			printf("Entrer l'annee d'etude de l'abonne numero %d:\t", i);
			scanf("%d",&l[i].anset);
			printf("\n***************\n");
			}
			system("cls");
			printf("Le(s) abonne(s) ont etaient ajoute avec succes :) \n");
			printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	return;
	}
	void suppressiona()
	{
	int i,s,j;
     printf("voila la liste des abonnes existants :)\n");
     //struct tous l[n];
     for(i=1 ; i<=n ; i++)
	 {
	 	printf("Abonne n %d : %s,%s\n",i,l[i].nom,l[i].prenom);
	 	printf("\n^^^^^^^^^^^^^^^^^\n");
	 }
	 printf("Taper l'indice de l'abonne que vous voulez supprimer :) : \t");
	 scanf("%d",&s);
	 strcpy(l[s].nom, "Cet abonne est supprimee de la liste :(");
	 strcpy(l[s].prenom, "Cet abonne est supprimee de la liste :(");
	 l[s].date=-1;
	 l[s].id=-1;
	 l[s].anset=-1;
	 system("cls");
	 printf("L'abonne a etait supprime avec succes :) \n");
	 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");	
	return;
	}
	void modificationa()
	{
		int i,s,j,o,r,t,k,g;
		modifautlv1:
	 printf("voila la liste des abonnes existants :))\n");
	 //struct tous l[n];
     for(i=1 ; i<=n ; i++)
	 {
	 	printf("Abonne n %d : %s,%s\n",i,l[i].nom,l[i].prenom);
	 	printf("\n^^^^^^^^^^^^^^^^^\n");
	 }
	 printf("Taper l'indice de l'abonne que vous voulez modifier :) : \t");
	 scanf("%d",&s);
	 system("cls");
	 modifdumm1:
	 printf("Si vous voulez modifier l'ID taper 1\n");
	 printf("Si vous voulez modifier le nom taper 2 \n");
	 printf("Si vous voulez modifier le prenom taper 3 \n");
	 printf("Si vous voulez modifier la date de naissance taper 4 \n");
	 printf("Si vous voulez modifier l'annee d'etude taper 5 \n");
	 scanf("%d",&j);
	 system("cls");
	 if(j==1)
	 {
	 	printf("Veuillez saisir le nouveau ID :\t");
	 	scanf("%ld",&l[s].id);
	 	system("cls");
	 	printf("L'ID de l'abonne a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme abonne taper 1 \n");
	 	printf("Afin de modifier un autre abonne taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&o);
	 	system("cls");
	 	switch (o)
		 {
		 	case 1:
			 {
		 		goto modifdumm1;
				break;
			 }
			case 2:
			{
				goto modifautlv1;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	 if(j==2)
	 {
	 	printf("Veuillez saisir le nouveau nom de l'abonne :\t");
	 	scanf("%s",&l[s].nom);
	 	system("cls");
	 	printf("Le nom de l'abonne a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme abonne taper 1 \n");
	 	printf("Afin de modifier un autre abonne taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&r);
	 	system("cls");
	 	switch (r)
		 {
		 	case 1:
			 {
		 		goto modifdumm1;
				break;
			 }
			case 2:
			{
				goto modifautlv1;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	 if(j==3)
	 {
	 	printf("Veuillez saisir le nouveau prenom de l'abonne :\t");
	 	scanf("%s",&l[s].prenom);
	 	system("cls");
	 	printf("Le prenom de l'abonne a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme abonne taper 1 \n");
	 	printf("Afin de modifier un autre abonne taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&t);
	 	system("cls");
	 	switch (t)
		 {
		 	case 1:
			 {
		 		goto modifdumm1;
				break;
			 }
			case 2:
			{
				goto modifautlv1;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	 if(j==4)
	 {
	 	printf("Veuillez saisir la nouvelle date de naisaance :\t");
	 	scanf("%d",&l[s].date);
	 	system("cls");
	 	printf("La date de naissance a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme abonne taper 1 \n");
	 	printf("Afin de modifier un autre abonne taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&k);
	 	system("cls");
	 	switch (k)
		 {
		 	case 1:
			 {
		 		goto modifdumm1;
				break;
			 }
			case 2:
			{
				goto modifautlv1;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	 if(j==5)
	 {
	 	printf("Veuillez saisir la nouvelle annee d'etude de l'abonne :\t");
	 	scanf("%d",&l[s].anset);
	 	system("cls");
	 	printf("L'anne d'etude a ete modifie avec succes :)) \n");
	 	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
	 	printf("Pour modifier une autre propriete du meme abonne taper 1 \n");
	 	printf("Afin de modifier un autre abonne taper 2 \n");
	 	printf("Pour retourner a l'acceuil taper 0 \n");
	 	scanf("%d",&k);
	 	system("cls");
	 	switch (g)
		 {
		 	case 1:
			 {
		 		goto modifdumm1;
				break;
			 }
			case 2:
			{
				goto modifautlv1;
				break;
			}
			case 0:
			{
				break;
			}
		 }
	 }
	return;
	}
	void recherche()
	{
		int i,s,j;
     printf("voila la liste des livres disponibles :)\n");
     //struct tous l[n];
     for(i=1 ; i<=n ; i++)
	 {
	 	printf("Livre n %d : %s\n",i,l[i].titre);
	 	printf("\n^^^^^^^^^^^^^^^^^\n");
	 }
	  printf("Apres le choix du livre veuillez taper 1 pour commencer la procedure de l'emprunt ==> \n");
	  printf("Au cas ou vous n'auriez pas trouve le livre que vous vouliez,");
	  printf("Veuillez taper 2 pour commencer la procedure de reservation ==>\n");
	  scanf("%d",&j);
	  system("cls");
	  switch (j)
	  {
	  	case 1:
		  {
		  	//struct tous l[n];
		  	printf("Entrer l'indice du livre que vous voullez emprunter :)\t");
		  	scanf("%d",&s);
		  	system("cls");
		  	strcpy(l[s].titre, "Ce livre est supprimee");
	       l[s].isbn=-1;
	       l[s].edition=-1;
	       l[s].exmp=-1;
	        time_t current_time = time(NULL);
	       printf("Bravo! \t");
	       printf("L'emprunt a ete effectue avec succes:)\n");
	        printf("Le temps actuel est : %s", asctime(localtime(&current_time))); 
	        printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
			break;
		  }
		case 2:
		{
			printf("Combien de livres vous devez reserver? \n");
			scanf("%d",&u);
			system("cls");
			struct tous l[u];
			for(i=1 ; i<=u ; i++)
			{
				printf("Entrer le titre du livre n%d que vous voulez reserver: \n",i);
				scanf("%s",&l[i].titreres);
			}
			system("cls");
			printf("La reservation a ete effectue avec succe :) \n");
			printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
			break;
		}  
	  }
	return;
	}
