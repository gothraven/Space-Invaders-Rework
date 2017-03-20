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
#include "game.h"


int main(){

	changemode(1);

	//for testing 
	char * map = malloc(MAP_SIZE*sizeof(char));
	char * shape[] = {"  #  \0"," ### \0","#####\0",NULL};
	char keypressed[1];

	Player_t * defender = malloc(sizeof(Player_t));
	defender->shape = shape;
	defender->x = 75;
	defender->y = 47; 

	map_init(map);
	draw_shape(map,defender->shape,defender->x,defender->y);
	map_show(map);



	while(1){

		int status = poll_ft();
		if (status > 0){
    	// We have got something to read 
			read(0,keypressed,1);
			move_player(map,defender,keypressed[0]);
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
		map_show(map);
	}	
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