/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    file_to_invader.c                           #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/30/03 13:48:32 by Z.Safiy                                  #
*    Updated: 2017/30/03 13:48:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"
#include "map.h"

void file_to_invader(Invader_t * invader,Ship_fs * file,char * enemytipe){

	
	invader->type = atoi(enemytipe);
	invader->x = 0;
	invader->y = 0;
	
	/*list circulaire*/

	invader-> health = file->ship_health; 
	invader->speed = DEFAULT_SPEED;
	invader-> freq = file->shot_freq;

	invader->shot = malloc(sizeof(Shot_t *));
	invader->shot->shape = file->shot;
	invader->shot->x = 0;
	invader->shot->y = 0;
	invader->shot->speed = file->shot_speed;
	invader->shot->power = file->shot_power;
	
	invader->shape = malloc((file->ship_height)*sizeof(char*));
	for (int i = 0; i < file->ship_height; ++i){
		invader->shape[i] = malloc(file->ship_width*sizeof(char));
		for(int j =0; j< file->ship_width; ++j){	
			invader->shape[i][j] = file->shape[i][j];
		}
	}
	invader->shape[file->ship_height] = NULL;

}
