#include "Shapes.h"

namespace List {
	namespace Graphics {
		Shape::Shape(float red, float green, float blue) {
			_red = red;
			_green = green;
			_blue = blue;
		}
		Triangle::Triangle(float red, float green, float blue):Shape(red,green,blue) {}
		Square::Square(float red, float green, float blue):Shape(red, green, blue) {}
		Circle::Circle(float size, float red, float green, float blue):Shape(red, green, blue) {
			_size = size;
		}

		void Triangle::Draw() {
			glBegin(GL_TRIANGLES);
			glColor3f(_red, _green, _blue);
			glVertex2f(0, 0.4f);
			glVertex2f(0.4f, -0.4f);
			glVertex2f(-0.4f, -0.4f);
			glEnd();
		}

		void Square::Draw() {
			glBegin(GL_QUAD_STRIP);
			glColor3f(_red, _green, _blue);
			glVertex2f(-0.2f, 0.2f);
			glVertex2f(0.2f, 0.2f);
			glVertex2f(-0.2f, -0.2f);
			glVertex2f(0.2f, -0.2f);
			glEnd();
		}

		void Circle::Draw() {
			glPointSize(_size);
			glEnable(GL_POINT_SMOOTH);
			glBegin(GL_POINTS);
			glColor3f(_red, _green, _blue);
			glVertex2f(0, 0);
			glEnd();
		}
	}
}