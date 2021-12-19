#pragma once
#include <string>
/*
Сначала создайте класс Creature со следующими членами:
   имя (std::string);
   символ (char);
   количество здоровья (int);
   количество урона, которое он наносит врагу во время атаки (int);
   количество золота, которое он имеет (int).
Создайте полный набор геттеров (по одному на каждую переменную-член класса). 
*/
class Creature {
protected:
	std::string m_name;
	char m_symbol;
	int m_hp;
	int m_damage;
	int m_gold;
public:
	Creature(std::string name, char symbol, int hp, int damage, int gold):
		m_name{ name }, m_symbol{ symbol }, m_hp{ hp }, m_damage{ damage }, m_gold{gold}
	{}
	std::string getName() { return m_name; }
	char getSymbol() { return m_symbol; }
	int getHealth(){return m_hp;}
	int getDamage(){return m_damage;}
	int getGold(){return m_gold;}
	void reduceHealth(int );
	bool isDead();
	void addGold(int );
};