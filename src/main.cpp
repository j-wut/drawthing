#define NANOVG_GL2_IMPLEMENTATION // Use GL2 implementation.
#include <OpenGL/gl.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}