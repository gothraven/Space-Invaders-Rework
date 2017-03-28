/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_invader.c                              #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/27/03 00:52:32 by Z.Safiy                                  #
*    Updated: 2017/27/03 00:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"

void load_invader(Invader_t * invader,char * enemytipe,char * modename){
	char PATH[100]="";
	int fd;
	
	Ship_fs * file = malloc(sizeof(Ship_fs));

	if(file == NULL){
		perror("ERROR:MALLOC");
	}	

	strcat(PATH,MOD_PATH);
	strcat(PATH,modename);
	strcat(PATH,"/");
	strcat(PATH,ENE_PATH);
	strcat(PATH,enemytipe);

	if((fd = open(PATH,O_RDONLY))==-1){ 
		char ERROR[100]="ERROR:OPEN:";
		strcat(ERROR,modename);
		strcat(ERROR,":");
		strcat(ERROR,enemytipe);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

	load_shipfile(file,fd);
	invader->x = 1;
	show_file(file);
	free_file(file);

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,modename);
		strcat(ERROR,":");
		strcat(ERROR,enemytipe);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

}
