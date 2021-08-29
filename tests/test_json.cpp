// A simple program that computes the square root of a number
#define __cpp_exceptions 1

//#define JSON_THROW(exception) throw exception

#include "nlohmann/json.hpp"
#include <fstream>
#include <iostream>
#include <math.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

using namespace nlohmann;
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stdout, "Usage: %s <file.json>\n", argv[0]);
        return 1;
    }

    const char *pszFileName = argv[1];
    std::ifstream jConfigFile(pszFileName);
    json jConfig;
    if (jConfigFile.good()) {
        try {
            jConfigFile >> jConfig;
            cout << jConfig["paths"];
            cout << jConfig.at("paths");
            cout << jConfig.at("markets");
        } catch (std::exception &e) {
            cerr << "error:" << e.what() << endl;
        }

    } else {
        cerr << "Invalid config file[" << pszFileName << "]";
    }
#if (defined(JSON_NOEXCEPTION))
//#error "JSON_EXCEP"
#endif
    cout << "Exited normally" << endl;
    return 0;
}
