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
#include "terminal.h"
#include "map.h"
#include "player.h"
#include "load.h"
#include "game.h"

int main(){
	Mod_t * mode = malloc(sizeof(Mod_t));
	Game_t * game = malloc(sizeof(Game_t));
	mode->name = "easy";
	load_mode(mode);
	load_game(game,mode,1);
	char ** enemy = game->invaders[3]->shape;
	char ** enemy0 = game->invaders[0]->shape;
 	char ** enemy1 = game->invaders[6]->shape;
	
	changemode(1);
	
	char keypressed[1]; 



	map_init(game->map);
	draw_shape(game->map,game->defender->shape,game->defender->x,game->defender->y);
	map_show(game->map);

	int i =0;
	int j = 0;

	while(1){
		//map_init(game->map);
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
		draw_shape(game->map,enemy,5+i+6,13+(2)*j);
		draw_shape(game->map,enemy,5+i+6+6,13+(2)*j);
		draw_shape(game->map,enemy,5+i+6+6+6,13+(2)*j);
		draw_shape(game->map,enemy,5+i+6+6+6+6,13+(2)*j);
		draw_shape(game->map,enemy,5+i+6+6+6+6+6,13+(2)*j);
		draw_shape(game->map,enemy,5+i+6+6+6+6+6+6,13+(2)*j);

		draw_shape(game->map,enemy1,5+i,13+(2)*j+3);
		draw_shape(game->map,enemy1,5+i+6,13+(2)*j+3);
		draw_shape(game->map,enemy1,5+i+6+6,13+(2)*j+3);
		draw_shape(game->map,enemy1,5+i+6+6+6,13+(2)*j+3);
		draw_shape(game->map,enemy1,5+i+6+6+6+6,13+(2)*j+3);
		draw_shape(game->map,enemy1,5+i+6+6+6+6+6,13+(2)*j+3);
		draw_shape(game->map,enemy1,5+i+6+6+6+6+6+6,13+(2)*j+3);
		
		draw_shape(game->map,enemy0,5+i,13+(2)*j+3+3);
		draw_shape(game->map,enemy0,5+i+6,13+(2)*j+3+3);
		draw_shape(game->map,enemy0,5+i+6+6,13+(2)*j+3+3);
		draw_shape(game->map,enemy0,5+i+6+6+6,13+(2)*j+3+3);
		draw_shape(game->map,enemy0,5+i+6+6+6+6,13+(2)*j+3+3);
		draw_shape(game->map,enemy0,5+i+6+6+6+6+6,13+(2)*j+3+3);
		draw_shape(game->map,enemy0,5+i+6+6+6+6+6+6,13+(2)*j+3+3);
		
		map_show(game->map);

		erase_shape(game->map,enemy,5+i,13+(2)*j);
		erase_shape(game->map,enemy,5+i+6,13+(2)*j);
		erase_shape(game->map,enemy,5+i+6+6,13+(2)*j);
		erase_shape(game->map,enemy,5+i+6+6+6,13+(2)*j);
		erase_shape(game->map,enemy,5+i+6+6+6+6,13+(2)*j);
		erase_shape(game->map,enemy,5+i+6+6+6+6+6,13+(2)*j);
		erase_shape(game->map,enemy,5+i+6+6+6+6+6+6,13+(2)*j);
		
		erase_shape(game->map,enemy1,5+i,13+(2)*j+3);
		erase_shape(game->map,enemy1,5+i+6,13+(2)*j+3);
		erase_shape(game->map,enemy1,5+i+6+6,13+(2)*j+3);
		erase_shape(game->map,enemy1,5+i+6+6+6,13+(2)*j+3);
		erase_shape(game->map,enemy1,5+i+6+6+6+6,13+(2)*j+3);
		erase_shape(game->map,enemy1,5+i+6+6+6+6+6,13+(2)*j+3);
		erase_shape(game->map,enemy1,5+i+6+6+6+6+6+6,13+(2)*j+3);

		erase_shape(game->map,enemy0,5+i,13+(2)*j+3+3);
		erase_shape(game->map,enemy0,5+i+6,13+(2)*j+3+3);
		erase_shape(game->map,enemy0,5+i+6+6,13+(2)*j+3+3);
		erase_shape(game->map,enemy0,5+i+6+6+6,13+(2)*j+3+3);
		erase_shape(game->map,enemy0,5+i+6+6+6+6,13+(2)*j+3+3);
		erase_shape(game->map,enemy0,5+i+6+6+6+6+6,13+(2)*j+3+3);
		erase_shape(game->map,enemy0,5+i+6+6+6+6+6+6,13+(2)*j+3+3);
		
		i++;
		
		if(i==100){ 
			i=0; j++; 
		}

	}
		
	//tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	
	return 0;
}