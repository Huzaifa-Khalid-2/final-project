// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: March 2022
// this is the final project

#include <stdio.h>
#include <gb/gb.h>
#include "background.c"
#include "backgroundtiles.c"
#include "Smile.h"



void main() {
	set_sprite_data(0, 1, TileData);
	set_sprite_tile(0, 0);
	move_sprite(0, 88, 78);
	set_bkg_data(0, 7, backgroundtiles);
	set_bkg_tiles(0, 0, 40, 18, background);
	SHOW_BKG;
	DISPLAY_ON;

	while(1) {
		scroll_bkg(1, 0);
		delay(100);
	}
}
