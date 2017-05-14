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
#include "list.h"



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
	file_to_invader(invader,file,enemytipe);

	if(close(fd)==-1){
		char ERROR[100]="ERROR:CLOSE:";
		strcat(ERROR,modename);
		strcat(ERROR,":");
		strcat(ERROR,enemytipe);
		perror(ERROR);
		exit(EXIT_FAILURE);
	}

}

void show_invader(Invader_t * invader){
	printf("type = %d\n",invader->type);
	printf("id = %d\n",invader->id);
	printf("it will appear at = %d sec\n",invader->appear);
	printf("the path:[horizontally,vertically]\n");
	list_show(invader->path);
	printf("x = %d, y = %d\n",invader->x, invader->y);
	printf("health = %d\n",invader->health);
	printf("shooting freq ? %f\n",invader->freq);
	printf("shot is (%c)\n",invader->shot->shape);
	printf("shot x = %d\n",invader->shot->x);
	printf("shot y = %d\n",invader->shot->y);
	printf("shot speed = %d\n",invader->shot->speed);
	printf("shot power = %d\n",invader->shot->power);
	printf("Shape :\n\n");
	int i = 0,j = 0;
	while(invader->shape[i] != NULL){
		j=0;
		while(invader->shape[i][j] != '\0'){
			printf("%c",invader->shape[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}