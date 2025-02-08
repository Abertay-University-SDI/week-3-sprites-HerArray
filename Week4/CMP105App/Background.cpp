#include "Background.h"

Background::Background()
{
	setSize(sf::Vector2f(11038, 675));
	setPosition(0, 0);

}

Background::~Background()
{
}

bool Background::loadTexture(const std::string& gfxFile) {
	if (!backgroundTexture.loadFromFile("gfx/Level1_1.png"))
	{
		std::cout << "Couldn't load background" << gfxFile << std::endl;
		return false;
	}
	setTexture(&backgroundTexture);
	return true;
}

void Background::update(float dt)
{
}
