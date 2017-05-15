/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    invader_size.c                              #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/05 00:35:09 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "invaders.h"

/*! \fn int invader_height(Invader_t * invader)
 *  \brief give the height of the invader
 *  \param invader is the ship of the ennemies
 *
 *  La fonction indique la largeur du vaisseau ennemi
 *
 *  \return the height of the invader
 */

int invader_height(Invader_t * invader)
{
	int i = 0;
	while(invader->shape[i] != NULL){
		i++;
	}
	return i++;
}

/*! \fn int invader_width(Invader_t * invader)
 *  \brief give the width of the invader
 *  \param invader is the ship of the ennemies
 *
 *  La fonction indique la longueur du vaisseau ennemi
 *
 *  \return the width of the invader
 */

int invader_width(Invader_t * invader)
{
	int i=0;
	int j=0;
	while(invader->shape[i][j] != '\0'){
		j++;
	}
	return j++;
}
