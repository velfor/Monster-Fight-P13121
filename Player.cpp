#include "Player.h"
//�������� ����� levelUp(), ������� ����������� ������� Player - � � ��� ���� �� 1. 
//����� �������� ����� hasWon(), ������� ���������� true, 
//���� Player ������ 20 ������.
void Player::levelUp() {
	m_level++;
	m_damage++;
	m_hp += 2;
}
bool Player::hasWon() { return m_level == 20; }