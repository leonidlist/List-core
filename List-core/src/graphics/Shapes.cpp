#include "Shapes.h"

namespace List {
	namespace Graphics {
		Triangle::Triangle(float red, float green, float blue) {
			_red = red;
			_green = green;
			_blue = blue;
		}

		void Triangle::Draw() const {
			glBegin(GL_TRIANGLES);
			glColor3f(_red, _green, _blue);
			glVertex2f(0, 0.4f);
			glVertex2f(0.4f, -0.4f);
			glVertex2f(-0.4f, -0.4f);
			glEnd();
		}
	}
}