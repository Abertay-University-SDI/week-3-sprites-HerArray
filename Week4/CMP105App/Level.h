#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include <string.h>
#include <iostream>
#include "Cursor.h"
#include "Enemy.h"
#include "Background.h"


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	//GameObjects

	Player player;
	Enemy enemy1;
	Enemy enemy2;

	Background background;
	Cursor cursor;
	
	sf::View cameraView;
	const float VIEW_SPEED = 200.0f;
};