#include "Player.h"

Player::Player()
{

	movementSpeed = 200.0f;

	if (!playerTexture.loadFromFile("gfx/mushroom.png"))
	{
		setFillColor(sf::Color::Red);
	}

	setTexture(&playerTexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(200, 100);

	//collision box
	setCollisionBox(0, 0, 100, 100);
	setCollider(true);

}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	setVelocity(0, 0);
	
	//keyboard input
	if (input->isKeyDown(sf::Keyboard::Left) || input->isKeyDown(sf::Keyboard::A))
	{
		setVelocity(-movementSpeed, getVelocity().y);
	}
	if (input->isKeyDown(sf::Keyboard::Right) || input->isKeyDown(sf::Keyboard::D))
	{
		setVelocity(movementSpeed, getVelocity().y);
	}
	if (input->isKeyDown(sf::Keyboard::Up) || input->isKeyDown(sf::Keyboard::W))
	{
		setVelocity(getVelocity().x, -movementSpeed);
	}
	if (input->isKeyDown(sf::Keyboard::Down) || input->isKeyDown(sf::Keyboard::S))
	{
		setVelocity(getVelocity().x, movementSpeed);
	}
}

void Player::update(float dt)
{
	move(velocity * dt);
}
