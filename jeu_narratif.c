#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char tabE1[] = "sprite";
char tabR1[30];
char tabE2[] = "string";
char tabR2[30];
char tabE3[] = "mesh";
char tabR3[30];
int choix =0;

char *invMain[1]= {"vide"};





int main (){
	printf("____________________________________________________________________________________________\n");
	printf("////////// Un rat courant sur ta tete te reveille. Subitement tu ouvres les yeux. Tu te trouves dans un cachot sombre, devant toi se dresse un druide. Tu peux decider de lui parler (1) ou de fouiller la piece (2)////////// \n");
	scanf("%d",&choix);
	printf("-------------------------\n");
	if(choix==1){
		// parler avec le druide
		printf("////////// Vous engagez la conversation avec le druide. Il vous ouvrira la porte si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
		printf("~~~~De pixel il est compose, dans un jeu il est anime. Verte est sa bouteille, ses bulles eclatent a nos oreilles. Qui est-il ?~~~~ \n");
		//scanf pour que joueur entre mot
		while(strcmp(tabE1,tabR1)!=0){
			scanf("%s",tabR1);
			printf("-------------------------\n");
			// faire test tableau pour mot=sprite
			if(strcmp(tabE1,tabR1)==0){
				printf("////////// Felicitation vous avez trouve la bonne reponse. Le sprite sheet est un regroupement d'images que l'on affiche independemment grace a des parametres de position. Mais c'est egalement une boisson gazeuse dont la bouteille est verte ! Je vous ouvre la porte,bonne continuation.////////// \n");
			}
			else{
				printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
				scanf("%[^\n]",tabR1);
				printf("-------------------------\n");
			};
		}
		choix=0;
	}
	if(choix==2){
		choix=0;
			// fouiller le cachot
			printf("////////// Vous fouillez le cachot et vous trouvez 2 objets. Vous avez le droit d'en choisir un. Quel objet voulez-vous emporter? Cailloux (1), epee rouillee (2), rien(3).////////// \n");
			scanf("%d",&choix);
			printf("-------------------------\n");
			if(choix==1){
				//cailloux
				printf("/////Vous avez choisi de prendre le cailloux\n");
				// donner cailloux a un emplacement de l'inventaire
				invMain[0]="Cailloux";
				// afficher l'inventaire
				printf("/////Je possede: %s\n",invMain[0]);
				printf("////////// Vous tentez d'utiliser le cailloux mais il ne sert a rien. Vous le jetez.//////////\n");
				invMain[0]="vide";
				
				// enigme pour sortir
				printf("////////// Vous engagez la conversation avec le druide. Il vous ouvrira la porte si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
				printf("~~~~De pixel il est compose, dans un jeu il est anime. Verte est sa bouteille, ses bulles eclatent a nos oreilles. Qui est-il ?~~~~ \n");
				//scanf pour que joueur entre mot
				while(strcmp(tabE1,tabR1)!=0){
					scanf("%s",tabR1);
					printf("-------------------------\n");
					// faire test tableau pour mot=sprite
					if(strcmp(tabE1,tabR1)==0){
						printf("////////// Felicitation vous avez trouve la bonne reponse. Le sprite sheet est un regroupement d'images que l'on affiche independemment grace a des parametres de position. Mais c'est egalement une boisson gazeuse dont la bouteille est verte ! Je vous ouvre la porte,bonne continuation.////////// \n");
					}
					else{
						printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
						scanf("%[^\n]",tabR1);
						printf("-------------------------\n");
					};
				}
			}
			if(choix==2){
				//epee rouillee
				printf("/////Vous avez choisi de prendre l'epee rouillee\n");
				// donner epee a un emplacement de l'inventaire
				invMain[0]="Epee";
				// afficher l'inventaire
				printf("/////Je possede: %s\n",invMain[0]);
				printf("////////// Avec votre epee vous intimidez le druide. Il prend peur et vous ouvre la porte. Vous pouvez continuer votre aventure.//////////\n");
			}
			if(choix==3){
				// rien
				printf("/////Vous avez choisi de ne rien prendre.\n");
				
				// enigme pour sortir
				printf("////////// Vous engagez la conversation avec le druide. Il vous ouvrira la porte si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
				printf("~~~~De pixel il est compose, dans un jeu il est anime. Verte est sa bouteille, ses bulles eclatent a nos oreilles. Qui est-il ?~~~~ \n");
				//scanf pour que joueur entre mot
				while(strcmp(tabE1,tabR1)!=0){
					scanf("%s",tabR1);
					printf("-------------------------\n");
					// faire test tableau pour mot=sprite
					if(strcmp(tabE1,tabR1)==0){
						printf("////////// Felicitation vous avez trouve la bonne reponse. Le sprite sheet est un regroupement d'images que l'on affiche independemment grace a des parametres de position. Mais c'est egalement une boisson gazeuse dont la bouteille est verte ! Je vous ouvre la porte,bonne continuation.////////// \n");
					}
					else{
						printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
						scanf("%[^\n]",tabR1);
						printf("-------------------------\n");
					};
				}
			}
		choix=0;
	}
	printf("____________________________________________________________________________________________\n");
	printf("////////// Que souhaitez vous faire maintenant ? Fouiller la galerie (1) ou parlez au druide (2) ?////////// \n");
	scanf("%d",&choix);
	printf("-------------------------\n");
	
	if(choix==1){
		// fouiller
		printf("////////// Vous fouillez la galerie et vous trouvez 2 objets. Quel objet voulez-vous emporter? Trombone (1), baguette magique (2), rien(3).////////// \n");
		scanf("%d",&choix);
		printf("-------------------------\n");
			if(choix==1){
				//trombone
				printf("/////Vous avez choisi de prendre un trombone.\n");
				// donner trombone a un emplacement de l'inventaire
				invMain[0]="Trombone";
				// afficher l'inventaire
				printf("/////Je possede: %s\n",invMain[0]);
				printf("////////// Vous tentez d'utiliser le trombone mais vous ne faites qu'enerver le druide. Vous le jetez.//////////\n");
				invMain[0]="vide";
				
				// enigme
				printf("////////// Vous parlez avec le druide. Il vous guidera dans les galeries sinueuses si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
				printf("~~~~Petit bout de ficelle plein de caractères, Je peux faire du bruit si on me pince. Qui suis-je ?~~~~ \n");
				//scanf pour que joueur entre mot
				while(strcmp(tabE2,tabR2)!=0){
					scanf("%s",tabR2);
					printf("-------------------------\n");
					// comparaison mot entre et reponse
					if(strcmp(tabE2,tabR2)==0){
						printf("////////// Felicitation vous avez trouve la bonne reponse. String veut dire ficelle en anglais, il correspond aux cordes d'une guitare mais egalement a une chaine de caracteres en langage C ! Je vais vous guider jusqu'a la derniere porte.////////// \n");
					}
					else{
						printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
						scanf("%[^\n]",tabR2);
						printf("-------------------------\n");
					};
				}
			}
			if(choix==2){
				//baguette magique
				printf("/////Le druide laisse tomber sa baguette magique par megarde. Vous vous en emparez.\n");
				// donner baguette a un emplacement de l'inventaire
				invMain[0]="Baguette";
				// afficher l'inventaire
				printf("/////Je possede: %s\n",invMain[0]);
				printf("////////// Avec la baguette magique vous ensorcelez le druide. Il vous guide tout droit vers la sortie.//////////\n");
			}
			if(choix==3){
				// rien
				printf("/////Vous avez choisi de ne rien prendre.\n");
				
				// enigme
				printf("////////// Vous parlez avec le druide. Il vous guidera dans les galeries sinueuses si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
				printf("~~~~Petit bout de ficelle plein de caractères, Je peux faire du bruit si on me pince. Qui suis-je ?~~~~ \n");
				//scanf pour que joueur entre mot
				while(strcmp(tabE2,tabR2)!=0){
					scanf("%s",tabR2);
					printf("-------------------------\n");
					// comparaison mot entre et reponse
					if(strcmp(tabE2,tabR2)==0){
						printf("////////// Felicitation vous avez trouve la bonne reponse. String veut dire ficelle en anglais, il correspond aux cordes d'une guitare mais egalement a une chaine de caracteres en langage C ! Je vais vous guider jusqu'a la derniere porte.////////// \n");
					}
					else{
						printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
						scanf("%[^\n]",tabR2);
						printf("-------------------------\n");
					};
				}
			}
		choix=0;
	};
	if(choix==2){
		// parler
		printf("////////// Vous parlez avec le druide. Il vous guidera dans les galeries sinueuses si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
		printf("~~~~Petit bout de ficelle plein de caractères, Je peux faire du bruit si on me pince. Qui suis-je ?~~~~ \n");
		//scanf pour que joueur entre mot
		while(strcmp(tabE2,tabR2)!=0){
			scanf("%s",tabR2);
			printf("-------------------------\n");
			// comparaison mot entre et reponse
			if(strcmp(tabE2,tabR2)==0){
				printf("////////// Felicitation vous avez trouve la bonne reponse. String veut dire ficelle en anglais, il correspond aux cordes d'une guitare mais egalement a une chaine de caracteres en langage C ! Je vais vous guider jusqu'a la derniere porte.////////// \n");
			}
			else{
				printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
				scanf("%[^\n]",tabR2);
				printf("-------------------------\n");
			};
		}
		choix=0;
	};
	printf("____________________________________________________________________________________________\n");
	printf("////////// Que souhaitez vous faire maintenant ? Fouiller autour de la porte (1) ou reparlez au druide (2) ?////////// \n");
	scanf("%d",&choix);
	printf("-------------------------\n");
	
	if(choix==1){
		// fouiller
		printf("////////// Vous fouillez autour de la porte et vous trouvez 2 objets. Quel objet voulez-vous emporter? Cle en argile (1), des chaines (2), rien(3).////////// \n");
		scanf("%d",&choix);
		printf("-------------------------\n");
			if(choix==1){
				//cle
				printf("//////////Vous avez choisi de prendre la cle en argile.\n");
				// donner cle a un emplacement de l'inventaire
				invMain[0]="Cle";
				// afficher l'inventaire
				printf("/////Je possede: %s\n",invMain[0]);
				printf("////////// Vous introduisez la cle dans la serrure mais l'argile s'effrite dans le trou. Vous soupirez. C'etait trop facile.//////////\n");
				invMain[0]="vide";
				
				// parler
				printf("////////// Vous implorez le druide. Il vous ouvrira la derniere porte vers la liberte si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
				printf("~~~~Etant seulement le resultat d'un ensemble de face ou de cheveux, Les pelés ignorent tout de mon soyeux. Qui suis-je ?~~~~ \n");
				//scanf pour que joueur entre mot
				while(strcmp(tabE3,tabR3)!=0){
					scanf("%s",tabR3);
					printf("-------------------------\n");
					// comparaison mot entre et reponse
					if(strcmp(tabE3,tabR3)==0){
						printf("////////// Felicitation vous avez trouve la bonne reponse. Une meche de cheveux n'est pas presente sur la tete des chauves,et un mesh 3D c'est egalement un objet modelise en 3D ! Voici la cle de votre liberte,vous l'avez bien merite!////////// \n");
					}
					else{
						printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
						scanf("%[^\n]",tabR3);
						printf("-------------------------\n");
					};
				}
				// fin du jeu
				printf("//////////Vous avez reussi a atteindre la sortie, bravo vous avez reussi le defi!//////////\n");
			}
			if(choix==2){
				//chaines
				printf("/////Vous trouvez des chaines abandonees.\n");
				// donner chaines a un emplacement de l'inventaire
				invMain[0]="Chaines";
				// afficher l'inventaire
				printf("/////Je possede: %s\n",invMain[0]);
				printf("////////// Vous ligotez le druide en le menacant de le laisser moisir ici le restant de sa vie. Il vous lance un regard meprisant.//////////\n");
				printf("////////// Pour qui vous prenez-vous petit effronte ?! Vous ne voyez pas que vous affaire a un mage ? Vous etes un pauvre mortel, et moi rien ne m'atteint... Pauvre fou ! Par la barbe de Moccus, que ce vil inconscient se transforme en rat !\n");
				printf("____________________________________________________________________________________________\n");
				printf("////////// Vous etes trop vicieux. GAME OVER \n");
			}
			if(choix==3){
				// rien
				printf("/////Vous avez choisi de ne rien prendre.\n");
				
				// parler
				printf("////////// Vous implorez le druide. Il vous ouvrira la derniere porte vers la liberte si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
				printf("~~~~Etant seulement le resultat d'un ensemble de face ou de cheveux, Les pelés ignorent tout de mon soyeux. Qui suis-je ?~~~~ \n");
				//scanf pour que joueur entre mot
				while(strcmp(tabE3,tabR3)!=0){
					scanf("%s",tabR3);
					printf("-------------------------\n");
					// comparaison mot entre et reponse
					if(strcmp(tabE3,tabR3)==0){
						printf("////////// Felicitation vous avez trouve la bonne reponse. Une meche de cheveux n'est pas presente sur la tete des chauves,et un mesh 3D c'est egalement un objet modelise en 3D ! Voici la cle de votre liberte,vous l'avez bien merite!////////// \n");
					}
					else{
						printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
						scanf("%[^\n]",tabR3);
						printf("-------------------------\n");
					};
				}
				// fin du jeu
				printf("//////////Vous avez reussi a atteindre la sortie, bravo vous avez reussi le defi!//////////\n");
			}
		choix=0;
	};
	if(choix==2){
		// parler
		printf("////////// Vous implorez le druide. Il vous ouvrira la derniere porte vers la liberte si et SEULEMENT SI vous repondez correctement a une enigme.////////// \n");
		printf("~~~~Etant seulement le resultat d'un ensemble de face ou de cheveux, Les pelés ignorent tout de mon soyeux. Qui suis-je ?~~~~ \n");
		//scanf pour que joueur entre mot
		while(strcmp(tabE3,tabR3)!=0){
			scanf("%s",tabR3);
			printf("-------------------------\n");
			// comparaison mot entre et reponse
			if(strcmp(tabE3,tabR3)==0){
				printf("////////// Felicitation vous avez trouve la bonne reponse. Une meche de cheveux n'est pas presente sur la tete des chauves,et un mesh 3D c'est egalement un objet modelise en 3D ! Voici la cle de votre liberte,vous l'avez bien merite!////////// \n");
			}
			else{
				printf("//////////Mauvaise reponse, retentez votre chance...////////// \n");
				scanf("%[^\n]",tabR3);
				printf("-------------------------\n");
			};
		}
		choix=0;
		// fin du jeu
		printf("Vous avez reussi a atteindre la sortie, bravo vous avez reussi le defi!\n");
	};
	
	
	
	/*De pixel il est composé, dans un jeu il est animé;
Verte est sa bouteille, les gens l'apprécient aussi dans leur gosier
ses bulles éclatent à nos oreilles*/

	/*Petit bout de ficelle plein de caractères 
Je peux faire du bruit si on me pince
Qui suis-je ?*/

	/*Etant seulement le resultat d'un ensemble de face ou de cheveux
Les pelés ignorent tout de mon soyeux 
Qui suis-je ?*/

return 0;
}