#include <iostream>
#include <cstdio>
#include <fstream>

int main() {
	std::cout << "Thank you for installing RCCoreutils\n";
	std::ifstream gcc("/bin/gcc");
	if (!gcc) {
		std::cout << "gcc not found, aborting\n";
		return -1;
	} else {
		std::cout << "gcc found\n";
	}
	gcc.close();
	std::ifstream curl("/bin/curl");
	if (!curl) {
		std::cout << "curl not found, installing\n";
		system("./curl.sh");
	} else {
		std::cout << "curl found\n";
	}
	curl.close();
	std::ifstream libcap("/bin/captest");
	if (!libcap) {
		std::cout << "libcap/-ng not found, installing\n";
		system("./libcap.sh");
	} else {
		std::cout << "libcap found\n";
	}
	libcap.close();
	std::cout << "You may now run make\n";
}
