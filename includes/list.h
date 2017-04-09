/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    list.h                                      #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/06/04 13:26:25 by Z.Safiy                                  #
#    Updated: 2017/06/04 13:26:25 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/


#ifndef LIST_H
#define LIST_H value

#include <stdlib.h>
#include <stdio.h>

int isEmpty(Path_t * path);
Path_t * list_add(Path_t * path,int h,int v);
Path_t * list_close(Path_t * path);
int isEmpty(Path_t * path);
void list_show(Path_t * path);


#endif