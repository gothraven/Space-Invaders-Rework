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

	int nread;

	char buffer[BUFFSIZE];
	nread = read(fd,buffer,BUFFSIZE);
	
	int i = 0;
	
	char * nbShips = get_line(buffer,&i);
	level->nbShips = atoi(nbShips);
	level->data = malloc(level->nbShips*sizeof(int*));
	
	int j=0;
	while(i<nread){
		char * tab[200];
		parse_line(get_line(buffer,&i),tab);
		level->data[j] = malloc(4*sizeof(int));
		level->data[j][0] = atoi(tab[0]);
		level->data[j][1] = atoi(tab[1]);
		level->data[j][2] = atoi(tab[2]);
		level->data[j][3] = atoi(tab[3]);

		j++;
	}

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,mode->name);
		strcat(ERROR,":");
		strcat(ERROR,level->number);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}
}


void show_level(Level_t * level){
	printf("level number (%s)\n", level->number);
	printf("number of ships : {%d}\n",level->nbShips);
	for (int i = 0; i < level->nbShips; ++i){
		for (int j = 0; j < 4; ++j){
			printf("%d ",level->data[i][j]);
		}
		printf("\n");
	}		
}