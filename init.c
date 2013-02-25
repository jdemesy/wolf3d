/*
** init.c for wolf3d in /home/jdemesy/projets/wolf3d
** 
** Made by Julien Demesy
** Login   <jdemesy@epitech.net>
** 
** Started on  Mon Feb 25 18:48:30 2013 Julien Demesy
** Last update Mon Feb 25 18:48:31 2013 Julien Demesy
*/

#include "attributes.h"

void init_attributes(t_player *player, t_projplane *pp)
{
	player->height = HEIGHT;
	player->fov = FOV * M_PI / 180.f;
	pp->width = PP_WIDTH;
	pp->height = PP_HEIGHT;
	pp->wcenter = pp->width / 2.f;
	pp->hcenter = pp->height / 2.f;
	pp->step_angle = player->fov / pp->width;
	player->distance = pp->wcenter / tan(player->fov / 2.f)
}
