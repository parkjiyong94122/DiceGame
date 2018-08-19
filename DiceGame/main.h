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
void printLocationP(position *p1, position *p2);
int gameResult(position* p1, position* p2);
/*

void moveShortCutOrTrap(position* p);

void moveMap(int *diceNumber, position *p);

void drawDice(int *diceNumber);

char choiceDarwDiceP1();
char choiceDarwDiceP2();
*/