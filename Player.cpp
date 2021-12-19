#include "Player.h"
//Ќапишите метод levelUp(), который увеличивает уровень Player - а и его урон на 1. 
//“акже напишите метод hasWon(), который возвращает true, 
//если Player достиг 20 уровн€.
void Player::levelUp() {
	m_level++;
	m_damage++;
}
bool Player::hasWon() { return m_level == 20; }