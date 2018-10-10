#pragma once
#include <glfw3.h>

namespace List {
	namespace Graphics {
		class Shape {
		protected:
			float _red, _green, _blue;
		public:
			Shape(float, float, float);
			virtual void Draw() = 0;
		};

		class Triangle:public Shape {	
		public:
			Triangle(float red, float green, float blue);
			void Draw() override;
		};

		class Square :public Shape {
		public:
			Square(float red, float green, float blue);
			void Draw() override;
		};

		class Circle :public Shape {
			GLfloat _size;
		public:
			Circle(float size, float red, float green, float blue);
			void Draw() override;
		};
	}
}