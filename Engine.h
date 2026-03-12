#pragma once

#ifndef __ENGINE_H__
#define __ENGINE_H__

#define COL		10
#define ROW		10

extern char Map[ROW][COL];

void init(int x, int y);
void Move(int* x, int* y);
void Render();

#endif