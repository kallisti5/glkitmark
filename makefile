all:
	g++ *.cpp -o glkitmark -Wall -lSDL -lGL -lGLU

clean:
	rm -f glkitmark
