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
#include "load.h"
#include "map.h"





void load_defender(Player_t * defender,char * modename){

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
		strcat(ERROR,":");
		strcat(ERROR,"1");
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

	load_shipfile(file,fd);
	file_to_defender(defender,file);

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,modename);
		strcat(ERROR,":");
		strcat(ERROR,"1");
		perror(ERROR);
		exit(EXIT_FAILURE);
	}
}


void show_defender(Player_t * defender){
	printf("x = %d, y = %d\n",defender->x, defender->y);
	printf("health = %d\n",defender->health);
	printf("fireOn ? %d\n",defender->fireOn);
	printf("shot is (%c)\n",defender->shot->shape);
	printf("shot x = %d\n",defender->shot->x);
	printf("shot y = %d\n",defender->shot->y);
	printf("shot speed = %d\n",defender->shot->speed);
	printf("shot power = %d\n",defender->shot->power);
	printf("Shape :\n");
	int i = 0;
	while(defender->shape[i] != NULL){
		printf("%s\n",defender->shape[i]);
		i++;
	}
}