## OpenGL Template

![OpenGL](https://img.shields.io/badge/OpenGL-FFFFFF?logo=opengl)
![CMake](https://img.shields.io/badge/CMake-064F8C?logo=cmake&logoColor=white)
![Unlicense](https://img.shields.io/badge/Unlicense-orange?logo=unlicense&logoColor=white)

A basic **OpenGL** Project written in C using **CMake**, **GLEW**, and **GLFW3**. 
This template sets up an OpenGL application inside a system native window, using GLFW3 for window management and GLEW for OpenGL function loading.

### 📋 Prerequisites

Before building the project, make sure you have the following installed on your system:
- A C compiler (GCC, Clang);
- CMake (for build orchestration);
- GLEW (for loading OpenGL extensions);
- GLFW3 (for window management).

### 🔧 Installation

Install a C compiler of your preference, CMake, GLEW and GLFW3 development libraries.

**DEB-based**

```bash
sudo apt install build-essential cmake libglew-dev libglfw3-dev
```

**RPM-based**

```bash
sudo dnf install @c-development make cmake glew-devel glfw-devel
```

### 🏗️ Build

After cloning the repository, generate the *Makefile* by running **CMake** inside it:

```bash
cmake .
```

Then, build the binary with **Make**:

```bash
make
```

### ▶️ Running

After **Make** finishes building, you may run it with:

```bash
./OpenGLTemplate
```

If you encounter a "Permission denied" error, add execution permission:

```bash
chmod +x OpenGLTemplate
```

## 📑 License

This template is available in the public domain under the [Unlicense](./LICENSE) license.
