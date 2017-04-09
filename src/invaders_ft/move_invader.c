/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    move_invader.c                              #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/08/04 17:21:58 by Z.Safiy                                  #
#    Updated: 2017/08/04 17:21:58 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#include "invaders.h"
#include <string.h>

void move_invader(char * map, Invader_t * invader, int dirH, int dirV){
	if(dirH == RIGHT){
		if(dirV == UP){
			mv_invader_UP_RIGHT(map,invader);
		}else if(dirV == DOWN){
			mv_invader_DOWN_RIGHT(map,invader);
		}else if(dirV == ZERO){
			mv_invader_RIGHT(map,invader);
		}
	}else if(dirH == LEFT){
		if(dirV == UP){
			mv_invader_UP_LEFT(map,invader);
		}else if(dirV == DOWN){
			mv_invader_DOWN_LEFT(map,invader);
		}else if(dirV == ZERO){
			mv_invader_LEFT(map,invader);
		}
	}else if(dirH == ZERO){
		if(dirV == UP){
			mv_invader_UP(map,invader);
		}else if(dirV == DOWN){
			mv_invader_DOWN(map,invader);
		}else if(dirV == ZERO){
			mv_invader_STOP(map,invader);
		}
	}
}

void mv_invader_UP(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->y -= 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_DOWN(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->y += 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_LEFT(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x -= 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_RIGHT(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x += 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_UP_LEFT(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x -= 1;
	invader->y -= 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_DOWN_LEFT(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x -= 1;
	invader->y += 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_UP_RIGHT(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x += 1;
	invader->y -= 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_DOWN_RIGHT(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x += 1;
	invader->y += 1;
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

void mv_invader_STOP(char * map, Invader_t * invader){
	erase_shape(map,invader->shape,invader->x,invader->y);

	//doesn't move

	draw_shape(map,invader->shape,invader->x,invader->y);
}