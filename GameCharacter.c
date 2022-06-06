// Copyright (c) 2022 Huzaifa Khalid All rights reserved.
//
// Created by Huzaifa Khalid
// Created on June 2022
// This program is character

#include <gb/gb.h>

// generical character structure: id, position, graphics

struct GameCharacter {
    UBYTE spritids[4];  // all characters use 4 sprites
    UINT8 x;
    UINT8 y;
    UINT8 width;
    UINT8 height;
};
