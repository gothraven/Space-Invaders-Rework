/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    game.c                                      #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "terminal.h"
#include "map.h"


int main(){

	changemode(1);
	char * map = malloc(MAP_SIZE*sizeof(char));
	map_init(map);
	write(1,map,MAP_SIZE);
	/* GAME TEST */
	char *shape[] = {"#####\0"," ### \0","  #  \0",NULL};
	int j = 6;
	for (unsigned int i = 4; i < (SCREEN_WIDTH-4-(strlen(shape[0]))); i++)
	{
		draw_shape(map,shape,i,j);
		write(1,map,MAP_SIZE);
		usleep(100000);
		erase_shape(map,shape,i,j);
		if(i == (SCREEN_WIDTH-4-(strlen(shape[0])))-1){
			i=4;
			j+=5;
		}
	}
	/*
	while(1){
		int status = kbhit();
		if (status > 0){
    	// We have got something to read 
			char key = getchar();
			printf("%c",key);
		}else if (!status) {
    	// We got a timeout 
			changemode(0);
			printf("\nSorry, time is up.\n");
			return 0;
		}else{
			changemode(0);
			printf("\nPoll() error.\n");
			return 0;
		}
	}
	changemode(0);
	*/
	return 0;
}