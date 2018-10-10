#pragma once
#include <glfw3.h>
#include <iostream>

namespace List {
	namespace Graphics {
		class Window {
		private:
			int _width, _height;
			const char* _name;
			GLFWwindow *_window;
			bool _closed;
		public:
			Window(const char* name, int height, int width);
			~Window();
			bool Closed() const;
			void Update();
			void Clear() const;

			void DisplayWindowInfo() const;

			int GetWidth() const ;
			int GetHeight() const ;
		private:
			bool Init();
		};
	}
}