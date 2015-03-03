#include <iostream>

#include "Entity.h"

Entity::Entity(SDL_Renderer *renderer)
{
	this->renderer = renderer;
	texture = nullptr;
	rect.x = 0;
	rect.y = 0;
	rect.w = 0;
	rect.h = 0;
}

Entity::~Entity()
{
	SDL_DestroyTexture(texture);
}

bool Entity::load(std::string fileName, int w, int h)
{
	if (texture == nullptr)
	{
		if ((texture = IMG_LoadTexture(renderer, fileName.c_str())) == nullptr)
		{
			std::cout << "Warning: " << SDL_GetError() << std::endl;
		}
	}
	rect.w = w;
	rect.h = h;

	return true;
}
void Entity::update()
{

}
void Entity::render()
{
	if (texture)
		SDL_RenderCopy(renderer, texture, nullptr, &rect);
}

void Entity::move(int x, int y)
{
	rect.x += x;
	rect.y += y;
}

void Entity::setPos(int x, int y)
{
	rect.x = x;
	rect.y = y;
}

int Entity::getX()
{
	return rect.x;
}
int Entity::getY()
{
	return rect.y;
}
int Entity::getW()
{
	return rect.w;
}
int Entity::getH()
{
	return rect.h;
}


