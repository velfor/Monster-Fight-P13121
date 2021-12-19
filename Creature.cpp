#include "Creature.h"
/*
Добавьте еще три метода:
   void reduceHealth(int) — уменьшает здоровье Creature на указанное целочисленное значение;
   bool isDead() — возвращает true, если здоровье Creature равно 0 или меньше;
   void addGold(int) — добавляет золото Creature-у.
*/
void Creature::reduceHealth(int health) { m_hp -= health; }
bool Creature::isDead() { return m_hp <= 0; }
void Creature::addGold(int gold) { m_gold += gold; }