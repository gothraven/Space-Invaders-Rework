/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    init_time.c                                 #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/04/04 18:45:06 by Z.Safiy                                  #
#    Updated: 2017/04/04 18:45:06 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "ctime.h"


void time_init(struct timespec * time){

	clock_gettime(CLOCK_REALTIME, time);

}