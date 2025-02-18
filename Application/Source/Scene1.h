#ifndef SCENE_1_H
#define SCENE_1_H
#pragma once
#include "Scene.h"

class Scene1 : public Scene
{
	enum GEOMETRY_TYPE
	{
		GEO_TRIANGLE_1 = 0,
		GEO_TRIANGLE_2,
		NUM_GEOMETRY,
		
	};
private:
	unsigned m_vertexArrayID;
	unsigned m_vertexBuffer[NUM_GEOMETRY];
	unsigned m_colorbuffer[NUM_GEOMETRY];
	unsigned m_programID;
public:
	Scene1();
	~Scene1();

	virtual void Init();
	virtual void Update(double dt);
	virtual void Render();
	virtual void Exit();
};

#endif