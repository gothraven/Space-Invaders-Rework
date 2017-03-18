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
#include "player.h"


int main(){

	changemode(1);
	char * map = malloc(MAP_SIZE*sizeof(char));
	char * shape[] = {"  #  \0"," ### \0","#####\0",NULL};
	
	map_init(map);
	draw_shape(map,shape,12,15);
	map_show(map);
	usleep(300000);
	move_player_left(map,shape,12,15);
	map_show(map);

	pause();
	changemode(0);
	
	return 0;
}





/*
		int status = poll_ft();
		if (status > 0){
    	// We have got something to read 
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
*/