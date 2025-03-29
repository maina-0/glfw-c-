

CC = clang++
CFLAGS = -g -Wall -v -O2
LIBS = -lGLEW -lGL -lglfw -lX11 -lpthread -lXrandr -lXi

main:main.o
	$(CC) main.o -o main $(LIBS)

main.o:main.cpp
	$(CC) -c $(CFLAGS) main.cpp -o main.o 

clean:
	rm *.o
