#include <iostream>

#include "image.hpp"
#include "perlin.hpp"

int main() {
	std::cout << "Hello, o!" << std::endl;


	perlin::Perlin map(1532512342);

	Image image;
	image.generate(512, 512);

	double frequency = 8;
	double fx = image.getWidth() / frequency;
	double fy = image.getHeight() / frequency;


	for (int y = 0; y < 512; y++) {
		for (int x = 0; x < 512; x++) {
			double p = map.noise2D(x / fx, y / fy);
		}
	}

	image.write("out.bmp");
	return 0;
}