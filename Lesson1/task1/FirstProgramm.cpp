#include <iostream>
#include <fstream>
int main(int argc,char** argv)
{
    setlocale(LC_ALL, "Russian");
    std::ifstream inputFile("in.txt");
    std::ofstream outputFile("out.txt");
    if (inputFile.is_open()&&outputFile.is_open())
    {
        int N;
        inputFile >> N;
        int* numbers1 = new int[N];
            for (int i = 0; i <N; ++i)
            {
            inputFile >> numbers1[i];
            }
       
        int M;
        inputFile >> M;
      
        int* numbers2 = new int[M];
        for (int i = 0; i < M; ++i)
        {
            inputFile >> numbers2[i];
           
        }
        outputFile << M;
        outputFile << "\n";
        outputFile << numbers2[M - 1];
        outputFile << " ";
        for (int i = 0; i < M-1; ++i)
        {
            outputFile << numbers2[i];
            outputFile << " ";
        }
        outputFile << "\n";
        outputFile << N;
        outputFile << "\n";
        for (int i = 1; i < N; ++i)
        {
            outputFile << numbers1[i];
            outputFile << " ";
        }
        outputFile << numbers1[0];
        delete[] numbers1;
        delete[] numbers2;
    }
    return 0;
}

