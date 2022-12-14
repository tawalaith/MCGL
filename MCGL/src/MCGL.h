#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <ranges>

#include "Texture.h"
#include "graphics/Shader.h"
#include "graphics/VertexArray.h"
#include "graphics/CubeRenderer.h"
#include "graphics/Chunk.h"
#include "camera/Camera.h"
#include "Window.h"

class MCGL
{
public:
	MCGL();
	~MCGL();

	void Run();

private:
	void ProcessInput();

private:
	Window window;
};

