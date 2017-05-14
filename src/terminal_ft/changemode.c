/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    changemode.c                                #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/12/03 18:05:32 by Z.Safiy                                  #
#    Updated: 2017/13/03 01:06:52 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#include "terminal.h"

/*! \fn void changemode(int dir)
 *  \brief change the terminal mode switching between the normal mode to the canonical mode
 *  \param dir=1 canonical mode dir=0 normal mode 
 *  
 *  La fonction change le mode du terminal le passant du mode normal au mode canonique
 *
 */

void changemode(int dir)
{

	static struct termios oldt, newt;

	if(dir == 1){
		tcgetattr(STDIN_FILENO,&oldt);
		newt = oldt;
		cfmakeraw(&newt);		
		tcsetattr(STDIN_FILENO, TCSANOW, &newt);

	}else{
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	}

}