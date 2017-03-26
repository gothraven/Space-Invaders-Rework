/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    terminal.h                                  #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/12/03 18:05:32 by Z.Safiy                                  #
#    Updated: 2017/13/03 01:06:52 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#ifndef TERMINAL_H
#define TERMINAL_H value

#include <stdio.h>
#include <unistd.h>
#include <poll.h>
#include <termios.h>


void changemode(int dir);
int poll_ft(void);


#endif