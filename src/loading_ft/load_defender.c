/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_defender.c                             #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/24/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/25/03 02:26:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "game.h"
#include "load.h"

void load_defender(char * modename){
	char PATH[100]="";
	int fd;
	Ship_fs * file = malloc(sizeof(Ship_fs));

	strcat(PATH,MOD_PATH);
	strcat(PATH,modename);
	strcat(PATH,"/");
	strcat(PATH,DEF_PATH);
	strcat(PATH,"1");

	if((fd = open(PATH,O_RDONLY))==-1){ 
		char ERROR[100]="ERROR:OPEN:";
		strcat(ERROR,modename);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

	load_shipfile(file,fd);
	
	show_file(file);

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,modename);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}
}