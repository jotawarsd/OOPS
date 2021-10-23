#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    fstream myfile("test.txt", ios::in | ios::out | ios::trunc);
    myfile << "Hello world!"

    
}