cd ..
g++ provod2.cpp -c -o provod2.o
g++ example\main.cpp -c -o example\main.o
g++ -o example\main.exe example\main.o provod2.o
del /Q example\main.o
del /Q provod2.o
cd example
