/*
** find_walls.c for wolf3d in /home/jdemesy/projets/wolf3d
** 
** Made by Julien Demesy
** Login   <jdemesy@epitech.net>
** 
** Started on  Tue Feb 26 08:25:12 2013 Julien Demesy
** Last update Tue Feb 26 08:32:44 2013 Julien Demesy
*/

#include "map.h"
#include "attributes.h"

void	find_walls(t_map *map, t_player *player, t_projplane *pp)
{
  double current_angle;
  double current_col;

  current_angle = player->pov_a - (player->fov / 2);
  current_col = 0;
  while (current_col < pp->width)
    {
      current_angle += pp->step_angle;
      current_col++;
    }
}
