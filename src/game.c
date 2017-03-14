/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    kbhit.c                                     #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "terminal.h"
#include "map.h"


int main(){

	changemode(1);
	char * map = malloc(MAP_SIZE*sizeof(char));
	for(int i=0; i<MAP_SIZE; i++) map[i]=' ';
	map_xy(map,'$',1,1);
	write(1,map,MAP_SIZE);
	while(1){
		int status = kbhit();
		if (status > 0){
    	/* We have got something to read */
			char key = getchar();
			printf("%c",key);
		}else if (!status) {
    	/* We got a timeout */
			changemode(0);
			printf("\nSorry, time is up.\n");
			return 0;
		}else{

			changemode(0);
			printf("\nPoll() error.\n");
			return 0;
		}
	}
	changemode(0);
	return 0;
}