#pragma once
#include <stdio.h>									
#include <Windows.h>									
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"player.h"


#define MAPSIZE 5
#define DESTINATION 36

using namespace std;


void gotoxy(int x, int y);
void moveShortCutOrTrap(player* p);
void drawmap();
void moveMap(int *diceNumber, player *p);
void printLocationP(player *p1, player *p2);
void drawDice(int *diceNumber);
int gameResult(player* p1, player* p2);
char choiceDarwDiceP1();
char choiceDarwDiceP2();

