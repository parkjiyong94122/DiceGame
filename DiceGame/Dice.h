#pragma once

class Dice
{
private:
	char play;

public:
	int diceNumber;
	

public:
	void throwDice();
	void print();
	int at(int index);
	void initThrowDice();

	char choiceThorwDicep1();
	char choiceThrowDiceP2();
	//º¸·ù

};