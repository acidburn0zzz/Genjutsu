//
//  main.h
//  Genjutsu
//
//  Created by AJ Minich on 12/23/12.
//
//

#ifndef Genjutsu_main_h
#define Genjutsu_main_h

/*
 * INCLUDES
 */

#include <stdlib.h>

#include <GLUT/glut.h>

/*
 * CONSTANTS
 */

const double BOX_MOVE_DISTANCE = 5.0f;
const double BOX_MOVE_INTERVAL = 20.0f;

/*
 * GLOBAL VARIABLES
 */

int last_frame_time     = 0;
double box_X            = 0;
double move_rate        = BOX_MOVE_DISTANCE;



#endif
