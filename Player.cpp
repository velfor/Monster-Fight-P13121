#include "Player.h"
//�������� ����� levelUp(), ������� ����������� ������� Player - � � ��� ���� �� 1. 
//����� �������� ����� hasWon(), ������� ���������� true, 
//���� Player ������ 20 ������.
void Player::levelUp() {
	m_level++;
	m_damage++;
}
bool Player::hasWon() { return m_level == 20; }