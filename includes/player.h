/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    player.h                                    #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/18/03 23:26:09 by Z.Safiy                                  #
#    Updated: 2017/18/03 23:26:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#ifndef PLAYER_H
#define PLAYER_H

#define RIGHTKEY 'd'
#define LEFTKEY 'q'
#define SPACEKEY ' '

void move_player(char * map, char ** shape, int x, int y, char keypressed);
void move_player_left(char * map,char ** shape,int x, int y);
void move_player_right(char * map,char ** shape,int x, int y);


#endif