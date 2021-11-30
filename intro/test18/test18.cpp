/*  对于文件的操作要使用fstream库*/
#include <fstream>
#include <iostream>
#include <cstdlib>

int main(){
    using namespace std;
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("infile.dat");
    if (in_stream.fail()){
        cout << "input file opening failed\n";
        exit(1);
    }

    out_stream.open("outfile.dat");
    if (out_stream.fail()){
        cout << "output file opening failed\n";
        exit(1);
    }

    int first, second, third;
    in_stream >> first >> second >> third;
    /*  以下的输出都存到了outfile.dat文件中去了*/
    out_stream << "the sum of the first 3 numbers in infile.dat is "
        << (first + second + third) << endl;
    in_stream.close();
    out_stream.close();

    cout << "appending data to outfile.dat\n";
    ofstream fout;
    fout.open("outfile.dat", ios::app);
    fout << "5 6 pick up sticks.\n"
        << "7 8 ain't c++ great!";
    fout.close();
    cout << "ending of appending to outfile.dat\n";

    return 0;
}