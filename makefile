all:
	g++ *.cpp -o glkitmark -Wall -lSDL2 -lGL -lGLU

clean:
	rm -f glkitmark
