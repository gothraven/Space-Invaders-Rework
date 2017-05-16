/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    status_bar_handler.c                        #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/16/05 05:17:00 by Z.Safiy                                  #
#    Updated: 2017/16/05 05:17:10 by L.Frederic                               #
#                                                                             # 
#*****************************************************************************/

#include "map.h"

/*! \fn void status_bar_handler(Game_t * game)
 *  \brief this function handles everything about the status bar
 *  \param game is a structure which contains all the game
 *
 *  La fonction contrôle tout ce qui a un rapport avec les invaders
 */

void status_bar_handler(Game_t * game)
{

	char strs[SCORE_LENGHT];
	char strh[HEALTH_LENGHT];
	char strl[LEVEL_LENGHT];
	char * score[2] = {strs,NULL};
	char * health[2] = {strh,NULL};
	char * level[2] = {strl,NULL};

	snprintf(strs, SCORE_LENGHT, "%d", game->score);
	snprintf(strh, HEALTH_LENGHT, "%d", game->defender->health);
	snprintf(strl, LEVEL_LENGHT, "%d", (game->level+1));
	draw_shape(game->map,score,SCORE_X+9,SCORE_Y);
	draw_shape(game->map,health,HEALTH_X+10,HEALTH_Y);
	draw_shape(game->map,level,LEVEL_X+9,LEVEL_Y);

}