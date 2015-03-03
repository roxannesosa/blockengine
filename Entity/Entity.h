#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <string>

class Entity
{
public:
	Entity(SDL_Renderer* renderer);
	~Entity();

	virtual bool load(std::string fileName, int w, int h);
	virtual void update();
	virtual void render();
	virtual void move(int x, int y);
	virtual void setPos(int x, int y);
	virtual int getX();
	virtual int getY();
	virtual int getW();
	virtual int getH();

private:
	SDL_Renderer* renderer;
	SDL_Texture* texture;
	SDL_Rect rect;

};

