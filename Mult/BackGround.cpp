#include "BackGround.h"   //���������� .h ���� ����

BackGround::BackGround() {
	texture.loadFromFile("images/background.png");	//��������� �������� � ��������
	sprite.setTexture(texture);          //������� ������ �� ��������
}





sf::Sprite BackGround::getSprite() {
	return sprite;         //���������� ������
}

