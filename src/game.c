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
#include "load.h"
#include "game.h"


int main(){
	Mod_t * mode = malloc(sizeof(Mod_t));
	Game_t * game = malloc(sizeof(Game_t));
	mode->name ="easy";
	load_mode(mode);
	load_game(game,mode,1);
	char * enemy[] = {"*-*-*\0"," [*] \0",NULL};
	char keypressed[1];

	
	changemode(1);
	map_init(game->map);
	draw_shape(game->map,game->defender->shape,game->defender->x,game->defender->y);
	map_show(game->map);

	int i =0;
	int j = 0;

	while(1){

		int status = poll_ft();

		if (status > 0){
    		// We have got something to read 

			read(0,keypressed,1);
		
		}else if (!status) {
    		// We got a timeout

		}else{
			changemode(0);
			printf("\nPoll() error.\n");
			return 0;
		}

		move_player(game->map,game->defender,keypressed[0]);

		draw_shape(game->map,enemy,5+i,13+(2)*j);
		map_show(game->map);
		erase_shape(game->map,enemy,5+i,13+(2)*j);
		
		i++;
		
		if(i==SCREEN_WIDTH-20){ 
			i=0; j++; 
		}

	}	
	changemode(0);
	
	return 0;
}



/** MOVEMENT TEST **/

/*
	changemode(1);

	//for testing 
	char * shape[] = {"  #  \0"," ### \0","#####\0",NULL};
	char * enemy[] = {"*-*-*\0"," [*] \0",NULL};
	char keypressed[1];

	Player_t * defender = malloc(sizeof(Player_t));
	defender->shape = shape;
	defender->x = 75;
	defender->y = 47; 



	map_init(map);
	draw_shape(map,defender->shape,defender->x,defender->y);
	map_show(map);

	int i =0;
	int j = 0;

	while(1){

		int status = poll_ft();

		if (status > 0){
    		// We have got something to read 

			read(0,keypressed,1);
		
		}else if (!status) {
    		// We got a timeout

		}else{
			changemode(0);
			printf("\nPoll() error.\n");
			return 0;
		}

		move_player(map,defender,keypressed[0]);

		draw_shape(map,enemy,5+i,13+(2)*j);
		map_show(map);
		erase_shape(map,enemy,5+i,13+(2)*j);
		
		i++;
		
		if(i==SCREEN_WIDTH-20){ 
			i=0; j++; 
		}

	}	
	changemode(0);
*/