/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    time_diff.c                                 #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/04/04 18:45:06 by Z.Safiy                                  #
#    Updated: 2017/04/04 18:45:06 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "ctime.h"

/*! \fn int time_diff(struct timespec * time)
 *  \brief Calculate the time diffrence in milliseconds between the time given and the time of call.
 *  \param time is a time structur which will be used to calculate the time diffrence
 *
 *  La fonction calcule la difference de temps entre le temps d'appel
 *  et le temps passer en paramêtre.
 *
 *  \return the time diffrence in milliseconds
 */
int time_diff(struct timespec * time)
{

	int result;
	long sec, micro;
	struct timespec t;
	clock_gettime(CLOCK_REALTIME, &t);
	sec = t.tv_sec - time->tv_sec;
	micro = (t.tv_nsec - time->tv_nsec) / 1000000;
	result = sec * 1000 + micro;
	
	return result;
}