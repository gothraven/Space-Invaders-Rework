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
#include "list.h"

/*! \fn void file_to_invader(Invader_t * invader,Ship_fs * file,char * enemytipe)
 *  \brief manage the file which countains all the informations about the invaders
 *  \param invader is the invader's ship
 *  \param file is a file which contains data 
 *  \param enemytip is the tipe of the invader ship  
 *
 *  La fonction gère le fichier qui contient tous les éléments des invaders 
 */


void file_to_invader(Invader_t * invader,Ship_fs * file,char * enemytipe)
{

	
	invader->type = atoi(enemytipe);
	invader->x = 0;
	invader->y = 0;

	invader-> health = file->ship_health;
	invader-> freq = file->shot_freq;

	invader->shot = malloc(sizeof(Shot_t *));
	invader->shot->shape = file->shot;
	invader->shot->x = 0;
	invader->shot->y = 0;
	invader->shot->speed = file->shot_speed;
	invader->shot->power = file->shot_power;
	
	invader->shape = malloc(file->ship_height+1*sizeof(char*));

	for (int i = 0; i < file->ship_height; ++i){
		invader->shape[i] = malloc(file->ship_width*sizeof(char));
		strcpy(invader->shape[i],file->shape[i]);
	}
	invader->shape[file->ship_height] = NULL;

	invader->path = NULL;

	for (int i = 0; i < file->path_size; ++i){
	invader->path = list_add(invader->path,file->path_h[i],file->path_v[i]);
	}
	invader->path = list_close(invader->path);
	
	invader->dir = *invader->path; 
	
}
