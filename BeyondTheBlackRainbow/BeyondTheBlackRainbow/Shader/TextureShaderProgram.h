#pragma once

#include "..\Shader\ShaderProgram.h"
#include "..\Texture\Texture.h"

class TextureShaderProgram : public ShaderProgram
{
public:
	TextureShaderProgram(GLuint shaderProgramID);
	~TextureShaderProgram();

	virtual void loadUniformLocations();
	virtual void fillUniformLocation(MeshNode* node, std::vector<LightNode*> lights);
	virtual void fillUniformLocation(Text* text);
	virtual void fillUniformLocation(Framebuffer* frameBuffer);

private:
	GLuint locationMVP;
	GLuint locationTexture;
};

