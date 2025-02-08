#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>
#include "iostream"



class Player : public GameObject
{
public:
	Player();
	~Player();


	void handleInput(float dt) override;
	void update(float dt) override;

	//movement speed

	void setMovementSpeed(float speed)
	{
		movementSpeed = speed;
	}
	float getMovementSpeed() const
	{
		return movementSpeed;
	}

private:

	float movementSpeed;
	sf::Texture playerTexture;
	
};

