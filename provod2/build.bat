g++ provod2.cpp -c -o provod2.o
g++ main.cpp -c -o main.o
g++ -o main.exe main.o provod2.o
main.exe