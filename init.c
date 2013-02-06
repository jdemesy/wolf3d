/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : init.c

* Purpose :

* Creation Date : 04-02-2013

* Last Modified : Mon 04 Feb 2013 04:46:41 PM CET

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/

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
