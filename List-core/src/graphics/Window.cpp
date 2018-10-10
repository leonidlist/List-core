#include "Window.h"

namespace List {
	namespace Graphics {
		Window::Window(const char* name, int width, int height) {
			_name = name;
			_width = width;
			_height = height;
			if (!Init()) {
				glfwTerminate();
			}
		}

		Window::~Window() {
			glfwTerminate();
		}

		int Window::GetHeight() const {
			return _height;
		}

		int Window::GetWidth() const {
			return _width;
		}

		void Window::DisplayWindowInfo() const {
			std::cout << "Window width: " << _width << std::endl;
			std::cout << "Window height: " << _height << std::endl;
		}

		void Window::Update() {
			glfwPollEvents();
			glfwGetFramebufferSize(_window, &_width, &_height);
			glViewport(0, 0, _width, _height);
			glfwSwapBuffers(_window);			
		}

		bool Window::Closed() const {
			return glfwWindowShouldClose(_window);
		}

		bool Window::Init() {
			if (!glfwInit()) {
				std::cout << "Error in GLFW init." << std::endl;
				return false;
			}
			else {
				std::cout << "GLFW init done." << std::endl;
			}
			_window = glfwCreateWindow(_width, _height, _name, NULL, NULL);
			if (!_window) {
				std::cout << "Failed to create GLFW window." << std::endl;
				glfwTerminate();
				return false;
			}
			glfwMakeContextCurrent(_window);
			if (glewInit() != GLEW_OK) {
				std::cout << "Failed to initialize GLEW." << std::endl;
				return false;
			}
			std::cout << glGetString(GL_VERSION) << std::endl;
			return true;
		}

		void Window::Clear() const {
			glClear(GL_COLOR_BUFFER_BIT);
			glClear(GL_DEPTH_BUFFER_BIT);
		}
	}
}