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
	
	defender->x = (SCREEN_WIDTH/2)-(file->ship_width/2);
	defender->y = SCREEN_HEIGHT-(file->ship_height);
	//printf("x(%d),y(%d)\n",defender->x,defender->y);
	defender->health = file->ship_health;
	
	defender->fireOn = 0;
	
	defender->shot = malloc(sizeof(Shot_t *));
	defender->shot->shape = file->shot;
	defender->shot->x = 0;
	defender->shot->y = 0;
	
	defender->shot->power = file->shot_power;
	
	defender->shot->speed = file->shot_speed;
	
	defender->shape = malloc(/*file->ship_height*/3+1*sizeof(char*));
	for (int i = 0; i < /*file->ship_height*/3; ++i){
		defender->shape[i] = malloc(/*file->ship_width*/5*sizeof(char));
		for(int j =0; j< /*file->ship_width*/5; ++j){	
			defender->shape[i][j] = file->shape[i][j];
		}
	}
	defender->shape[/*file->ship_height*/3] = NULL;
	//printf("(%d)(%s)[%s]\n",file->ship_height,defender->shape[0],file->shape[0]);

	//free_file(file);
	

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,modename);
		strcat(ERROR,":");
		strcat(ERROR,"1");
		perror(ERROR);
		exit(EXIT_FAILURE);
	}
}
