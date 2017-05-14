/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    mode_exist.c                                #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/
#include "load.h"

int mode_exist(char * name)
{

	DIR * mode = opendir(MODE_DIR);	
	struct dirent * dir = NULL;
	while((dir=readdir(mode))!=NULL){
		if(dir->d_name[0] != '.')
			if(strcmp(name,dir->d_name) == 0)
				return 1;
	}	
	return 0;

}