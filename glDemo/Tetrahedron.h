#pragma once

#include "core.h"

class Tetrahedron
{
	GLuint					vertexBuffer;
	GLuint					colourBuffer;
	GLuint					indexBuffer;

public:

	Tetrahedron();
	~Tetrahedron();

	void render();
};