MAKEFLAGS="-j 4"
CC=g++ `pkg-config --cflags opencv`
INCLUDES = `pkg-config --libs opencv` -I/home/sascha/OpenCV/opencv-3.0.0/build/lib
LDFLAGS= -lopencv_core -lopencv_imgproc -lopencv_objdetect -lopencv_highgui -lpthread -v
CFLAGS= -g -O2
OBJ := obj
SRC := src

all: test


test: $(addprefix $(OBJ)/,test.o) | $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(addprefix $(OBJ)/,test.o) $(LDFLAGS) $(INCLUDES)

$(OBJ)/test.o: $(addprefix $(SRC)/,test.cpp) | $(OBJ)
	$(CC) $(CFLAGS) -o $@ -c $(SRC)/test.cpp $(LDFLAGS) $(INCLUDES)

$(OBJ):
	mkdir $(OBJ)

remake: cleaner all

clean:
	rm -rf $(OBJ)

cleaner:
	rm -rf $(OBJ) test pics/*