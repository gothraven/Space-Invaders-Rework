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

/*! \fn void time_init(struct timespec * time)
 *  \brief initialise the structure with the system time of the call
 *  \param time is a time structur which will be initialized
 *
 *  La fonction initialise la structure passée en paramétre
 *  avec le temps system au moment de l'appel.
 *
 */
void time_init(struct timespec * time)
{

	clock_gettime(CLOCK_REALTIME, time);

}