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


void changemode(int dir){

	static struct termios oldt, newt;

	if(dir == 1){
		tcgetattr(STDIN_FILENO,&oldt);
		newt = oldt;
		newt.c_lflag &= ~(ICANON | ECHO);
		tcsetattr(STDIN_FILENO, TCSANOW, &newt);

	}else{
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	}

}