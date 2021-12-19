#pragma once
#include "Creature.h"
/*
������ ��� ����� ������� ����� Player, ������� ��������� Creature. Player �����:
   ����������-���� level, ������� ���������� � 1;
   ��� (������������ ������ � ����������);
   ������ @;
   10 ����� ��������;
   1 ���� ����� (��� ������);
   0 ������.
*/
//�������� ����� levelUp(), ������� ����������� ������� Player - � � ��� ���� �� 1. 
//����� �������� ������ ��� ����� level � ����� hasWon(), ������� ���������� true, 
//���� Player ������ 20 ������.
class Player : public Creature {
private:
	int m_level;
public:
	Player(	std::string name, 
			char symbol = '@', 
			int hp= 10, 
			int damage = 1, 
			int gold = 0, 
			int level = 1):
			Creature(name, symbol, hp, damage, gold), m_level{level}
	{}
	int getLevel() { return m_level; }
	void levelUp();
	bool hasWon();
};

