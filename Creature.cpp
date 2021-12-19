#include "Creature.h"
/*
�������� ��� ��� ������:
   void reduceHealth(int) � ��������� �������� Creature �� ��������� ������������� ��������;
   bool isDead() � ���������� true, ���� �������� Creature ����� 0 ��� ������;
   void addGold(int) � ��������� ������ Creature-�.
*/
void Creature::reduceHealth(int health) { m_hp -= health; }
bool Creature::isDead() { return m_hp <= 0; }
void Creature::addGold(int gold) { m_gold += gold; }