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

/**
 * Changes the terminal mode from normal to raw mode
 * @param dir is the option, 1 for RAW mode, 0 for normal mode.
 * @see #man_tcgetattr(3) #man_cfmakeraw(3) #man_tcsetattr(3)
 */
void changemode(int dir){

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