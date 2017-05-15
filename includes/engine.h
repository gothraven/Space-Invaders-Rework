/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    engine.h                                      #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/20/03 00:39:21 by Z.Safiy                                  #
#    Updated: 2017/25/03 00:56:21 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#ifndef ENGINE_H
#define ENGINE_H value

#include <time.h>

#include "terminal.h"
#include "map.h"
#include "player.h"
#include "load.h"
#include "game.h"
#include "list.h"
#include "invaders.h"
#include "shots.h"
#include "ctime.h"

int engine_launcher(Game_t * game,Mod_t * mode,int levelNumber);
int show_modes();
int show_options();

#endif