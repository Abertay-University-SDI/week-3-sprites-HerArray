#pragma once

#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Background : public GameObject

{
public:
	Background();
	~Background();

	bool loadTexture(const std::string& gfxFile);
	void update(float dt) override;




protected:

	sf::Texture backgroundTexture;
};

