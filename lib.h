#include <iostream>
#include <fstream>

template <typename T>
struct List{
	T primero;
	T segundo;
};

class Gen{

	public:
		Gen(int i);
		int getId();
		void setId(int i);	
	private:
		int id;
};
Gen::Gen(int i){
	id = i;
}

int Gen::getId(){
	return id;
}

void Gen::setId(int i){
	id = i;
}


void createImage(int width, int height)
{
	std::ofstream out ("./scene.ppm", std::ios::out);
	out << "P3\n" << width << " " << height << "\n255\n";

	 for (int j = height-1; j >= 0; --j) {
		 std::cout << "\rScanlines remaining: " << j << ' ' << std::endl;
	 	for (int i = 0; i < width; ++i) {
			auto r = double(i) / (width-1);
			auto g = double(j) / (height-1);
			auto b = 0.25;
			
			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			out << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}

	out.close();
	std::cout << "\nDone!" << std::endl;
}
