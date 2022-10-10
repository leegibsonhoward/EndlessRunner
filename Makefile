INCLUDES= -I./include -I./external/SDL2/include
EXTERN_LIB_PATH= -L ./external/SDL2/lib
LIBRARIES= ${EXTERN_LIB_PATH} -lmingw32 -lSDL2main -lSDL2
SRC_FILE= ./src/main.c
OUTPUT_FILE= -o ./bin/main
FLAGS= -g -w

all:
	gcc ${FLAGS} ${INCLUDES} ${SRC_FILE} ${LIBRARIES} ${OUTPUT_FILE}