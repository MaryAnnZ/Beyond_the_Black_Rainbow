#version 330 core

in vec2 UV;

out vec4 color;

uniform sampler2D renderedTexture;

void main(){
	//color = vec3(UV.x, UV.y, 0);
	color = texture(renderedTexture, UV);
}