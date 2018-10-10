#include "src/graphics/Window.h"
#include "src/graphics/Shapes.h"

int main() {
	List::Graphics::Window window("List-engine", 800, 600);
	List::Graphics::Triangle triangle(0,0,255);
	List::Graphics::Square square(255, 255, 255);
	glClearColor(255, 0, 0, 1);
	std::cout << glGetString(GL_VERSION) << std::endl;
	while (!window.Closed()) {
		window.Clear();
		square.Draw();
		window.Update();
	}
	/*system("pause");*/
	return 0;
}