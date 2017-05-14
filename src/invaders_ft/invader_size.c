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

int invader_height(Invader_t * invader)
{
	int i = 0;
	while(invader->shape[i] != NULL){
		i++;
	}
	return i++;
}

int invader_width(Invader_t * invader)
{
	int i=0;
	int j=0;
	while(invader->shape[i][j] != '\0'){
		j++;
	}
	return j++;
}
