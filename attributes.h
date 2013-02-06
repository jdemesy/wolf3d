/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : attributes.h

* Purpose :

* Creation Date : 04-02-2013

* Last Modified : Mon 04 Feb 2013 04:46:44 PM CET

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/

#ifndef ATTRIBUTES_H_
# define ATTRIBUTES_H_

/* Parameters
** Change game parameters here
*/
# define FOV 60		// Field of view (defined in degrees)
# define HEIGHT 32	// Player height (defined in units)

# define PP_WIDTH 320	// Projection Plane Width
# define PP_HEIGHT 200	// Projection Plane Height

/* Player Attributes structure*/
typedef struct s_player
{
	double height;
	double fov;	// in radians here
	double pov_x;	// Point of View X coordinate
	double pov_y;	// POV Y Coordinate
	double pov_a;	// POV angle (in radians)
	double distance;	// Distance from PP
} t_player;

/* Projection Plane attributes structure*/
typedef struct s_projplane
{
	double width;
	double height;
	double wcenter;
	double hcenter;
	double step_angle;	// Angle to move between subsequent rays
} t_projplane;

#endif /* ATTRIBUTES_H_ */
