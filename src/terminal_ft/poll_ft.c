/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    kbhit.c                                     #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/12/03 18:05:32 by Z.Safiy                                  #
#    Updated: 2017/13/03 01:06:52 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#include "terminal.h"

/*! \fn int poll_ft(void)
 *  \brief poll is a function which blockes until there is something to be read in the STDIN
 *  
 *  La fonction poll est une fonction qui attend qu'il y ait un truc à lire dans le STDIN
 *
 */

int poll_ft(void)
{

	struct pollfd pfd = {0,0,0};       /* poll() settings   */
	int pr;
	pfd.fd = STDIN_FILENO;
	pfd.events = POLLIN;
	pr = poll(&pfd, 1, 100);
	
	return pr; 
}