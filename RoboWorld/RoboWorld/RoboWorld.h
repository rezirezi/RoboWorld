#pragma once
#define WORLD_X 50
#define WORLD_Y 20
#include "instinct/Instinct.h"


class Robot: public Instinct::Senses, public Instinct::Actions, public Instinct::Monitor
{
public:
	Robot();
	~Robot();
	int Pos_x;
	int Pos_y;
	char C;
	int Dir; // direction 1-n 2-e 3-s 4-w
	int Speed = 0;
	unsigned char cMap[WORLD_Y][WORLD_X]; // this is the 2D world



private:

};

Robot::Robot()
{
}

Robot::~Robot()
{
}