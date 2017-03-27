/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_level.c                                #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/27/03 02:22:02 by Z.Safiy                                  #
*    Updated: 2017/27/03 02:22:02 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"


void load_level(Level_t * level,Mod_t * mode){
	char PATH[100]="";
	int fd;

	strcat(PATH,MOD_PATH);
	strcat(PATH,mode->name);
	strcat(PATH,"/");
	strcat(PATH,LVL_PATH);
	strcat(PATH,level->number);
	
	if((fd = open(PATH,O_RDONLY))==-1){ 
		char ERROR[100]="ERROR:OPEN:";
		strcat(ERROR,mode->name);
		strcat(ERROR,":");
		strcat(ERROR,level->number);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

	printf("YOHO level %s  loaded \n",level->number);

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,mode->name);
		strcat(ERROR,":");
		strcat(ERROR,level->number);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}
}