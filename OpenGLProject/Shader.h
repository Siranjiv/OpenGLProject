#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <GL\glew.h>

class Shader
{
public:
	Shader();

	void createFromString(const char* vertexCode, const char* fragmentCode);

	GLuint GetProjectionLocation();
	GLuint GetModelLocation();

	void UseShader();
	void ClearShader();


	~Shader();

private:
	GLuint shaderID, uniformProjection, uniformModel;
	
	void CompileShader();
	void AddShader();


};

