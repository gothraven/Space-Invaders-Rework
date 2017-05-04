/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    ctime.h                                      #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/04/04 18:45:06 by Z.Safiy                                  #
#    Updated: 2017/04/04 18:45:06 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#ifndef CTIME_H
#define CTIME_H 

#include <time.h>

void time_init(struct timespec * time);
int time_diff(struct timespec * time);


#endif