#pragma once
#include <stdio.h>									
#include <Windows.h>									
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"Position.h"
#include"Dice.h"



#define MAPSIZE 5
#define DESTINATION 36

using namespace std;

void gotoxy(int x, int y);
void drawmap();

int arriveLocation(location* p1, location* p2);
