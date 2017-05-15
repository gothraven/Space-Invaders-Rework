/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    game_help.c                                 #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/15/05 01:24:32 by Z.Safiy                                  #
*    Updated: 2017/15/05 01:24:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "engine.h"

/*! \fn int show_modes()
 *  \brief this functions show the diferents mode available
 *
 *  La fonction montre les différents modes de jeux disponibles
 */

int show_modes()
{
	DIR * mode = opendir(MODE_DIR);	
	struct dirent * dir = NULL;
	printf("The existing modes are :\n\n");
	while((dir=readdir(mode))!=NULL){
		if(dir->d_name[0] != '.'){
			printf("		- %s\n",dir->d_name);
		}
	}
	printf("\nplease choose one of them.\n");
	return 0;
}

/*! \fn int show_options()
 *  \brief this functions indicates that the users choice is wrong
 *
 *   La fonction indique si l'utilisateur utilise un fichier qui n'est pas le bon
 */

int show_options()
{	
	printf("Sorry, you're using the wrong game file\n\n");
	printf("	./go [game_mode]\n\n");
	printf("And To launche the game you should give the right mode\n\n");
	return show_modes();
}