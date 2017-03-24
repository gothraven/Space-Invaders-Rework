/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_defender.c                             #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "game.h"
#include "load.h"


void load_defender(/*player_t * defender,*/char * modename){
	char * PATH = strcat(MOD_PATH,modename);
	//int fd = open(DEF_PATH)
	printf("%s\n",PATH);
}


int main(int argc, char const *argv[])
{
	load_defender("easy");
	return 0;
}