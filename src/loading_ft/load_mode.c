/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_mode.c                                 #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"

/*! \fn void load_mode(Mod_t * mode)
 *  \brief this function load a mode in the structure passed in the paramaters
 *  \param mode is the structure which contains the game mode 
 *
 *  La fonction charge un mode avec les structure passer en parametre   
 */

void load_mode(Mod_t * mode)
{
	char PATH[100]="";
	int fd;

	strcat(PATH,MOD_PATH);
	strcat(PATH,mode->name);
	strcat(PATH,"/");
	strcat(PATH,"unfolding");

	if((fd = open(PATH,O_RDONLY))==-1){ 
		char ERROR[100]="ERROR:OPEN:";
		strcat(ERROR,mode->name);
		strcat(ERROR,":");
		strcat(ERROR,"unfolding");
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

	int nread;

	char buffer[BUFFSIZE];
	nread = read(fd,buffer,BUFFSIZE);
	int nlevel = 0;
	int line = 0;
	int i = 0;
	mode->levels= malloc(MAX_LEVELS*sizeof(Level_t**));
	
	while(i<nread){
		char * tab[200];
		tab[0] = get_line(buffer,&i);
		if(line == 0){
			if(strcmp(mode->name,tab[0]) != 0){
				printf("PROBLEM, MODE IS NOT RIGHT\n");
			}
		}else{
			mode->levels[nlevel] = malloc(sizeof(Level_t*));
			mode->levels[nlevel]->number = tab[0];
			load_level(mode->levels[nlevel],mode);
			nlevel++;
		}

		line++;
	}

	mode->levels[nlevel++] = NULL;

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,mode->name);
		strcat(ERROR,":");
		strcat(ERROR,"unfolding");
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

}

/*! \fn void show_mode(Mod_t * mode)
 *  \brief this function show the mode where we play
 *  \param mode is the structure which contains the game mode
 *
 *  La fonction affiche le niveaux ou l'on joue
 */

void show_mode(Mod_t * mode)
{
	printf("mode name : (%s)\n",mode->name);
	int i =0;
	while(mode->levels[i] != NULL){
		printf("-----------------------------\n");
		show_level(mode->levels[i]);
		printf("-----------------------------\n");
		i++;
	}
}