#pragma once
#include <glfw3.h>

namespace List {
	namespace Graphics {
		class Shape {

		};

		class Triangle:public Shape {
		private:
			float _startPosX, _startPosY;
			float _red, _green, _blue;
		public:
			Triangle(float red, float green, float blue);
			void Draw() const;
		};
	}
}