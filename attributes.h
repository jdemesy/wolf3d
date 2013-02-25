/*
** attributes.h for wolf3d in /home/jdemesy/projets/wolf3d
** 
** Made by Julien Demesy
** Login   <jdemesy@epitech.net>
** 
** Started on  Mon Feb 25 18:48:08 2013 Julien Demesy
** Last update Mon Feb 25 18:48:17 2013 Julien Demesy
*/

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
