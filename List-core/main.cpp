#include "src/graphics/Window.h"
#include "src/graphics/Shapes.h"

int main() {
	List::Graphics::Window window("List-engine", 800, 600);
	List::Graphics::Triangle triangle(0,0,255);
	List::Graphics::Square square(255, 255, 255);
	List::Graphics::Circle circle(400, 255, 255, 255);
	glClearColor(255, 0, 0, 1);
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
	while (!window.Closed()) {
		window.Clear();
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.Update();
	}
	/*system("pause");*/
	return 0;
}