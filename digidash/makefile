.DEFAULT_GOAL=macos
RAYLIB_FLAGS=`pkg-config --libs --cflags raylib`

default: digidash.c
	clang -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 digidash.c -o digidash

macos: digidash.c
	clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL $(RAYLIB_FLAGS) digidash.c -o digidash
