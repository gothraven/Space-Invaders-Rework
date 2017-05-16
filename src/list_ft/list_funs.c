/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    list_fonctions.c                            #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/06/04 12:02:21 by Z.Safiy                                  #
#    Updated: 2017/06/04 21:54:56 by L.Frederic                               #
#                                                                             #
#*****************************************************************************/

#include "game.h"
#include "list.h"

/*! \fn Path_t * list_add(Path_t * path,int h,int v)
 *  \brief this function add an arguments in the list 
 *  \param path is a list structure wich contain the ship's path
 *  \param h is the horizental movement
 *  \param v is the vertical movement
 *
 *  La fonction ajoute un arguments dans la liste
 *
 *  \return head if the list only have one arguments (NULL), path is the arguments
 *  have many arguments
 */

Path_t * list_add(Path_t * path,int h,int v)
{
	Path_t * head = path;
	if(head == NULL){ 
		head = malloc(sizeof(Path_t));
		head->h = h;
		head->v = v;
		head->next = NULL;
		return head;
	}

	while(head->next != NULL){
		head = head->next;
	}

	head->next = malloc(sizeof(Path_t));
	head->next->h = h;
	head->next->v = v;
	head->next->next = NULL;

	return path;
}

/*! \fn Path_t * list_close(Path_t * path)
 *  \brief this function close the list and return the head
 *  \param path is a list structure wich contain the ship's path
 *
 *  La fonction ferme la liste et nous la retourne
 *
 *  \return head to close the list 
 */

Path_t * list_close(Path_t * path)
{
	Path_t * head = path;
	while(path->next != NULL){
		path = path->next; //look for the end of the list

	}
	path->next = head; //stick the head to the tail
	return head;
}

/*! \fn int isEmpty(Path_t * path)
 *  \brief this function tell us if the list is empty
 *  \param path is a list structure wich contain the ship's path
 *
 *  La fonction nous indisue si la liste est vide où non
 *
 *  \return 0 if the list is not empty, 1 the list is empty
 */

int isEmpty(Path_t * path)
{
	if(path != NULL) return 0;
	else return 1;
}

/*! \fn void list_show(Path_t * path)
 *  \brief this function show the list 
 *  \param path is a list structure wich contain the ship's path
 *
 *  La fonction met en relation toutes les parties du jeu
 */

void list_show(Path_t * path)
{
	Path_t * head = path;
	printf("{|");
	do{
		printf("%d,%d|",head->h,head->v);
		head = head->next;
	}while(head != path);
	printf("}\n");
}
