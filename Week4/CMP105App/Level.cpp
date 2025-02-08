#include "Level.h"
#include "player.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	
	if (!background.loadTexture("gfx/Level1_1.png"))
	{
		std::cout << "Didn't load background" << std::endl;
	}
	
	window->setMouseCursorVisible(false);


	cameraView = window->getDefaultView();
	
	player.setInput(input);
	player.setWindow(window);

	//enemy1.setWindow(window);


}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	player.handleInput(dt);
}


// Update game objects
void Level::update(float dt)
{
	player.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);
	window->draw(player);
	
	endDraw();
}
