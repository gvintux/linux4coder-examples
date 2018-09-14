PROJECT_NAME=ex_0
BUILD_DIR=build
SRC_DIR=src
C_FLAGS=-Wall -g -O0
.PHONY: all clean prepare_dirs
all: prepare_dirs ${BUILD_DIR}/${PROJECT_NAME}
prepare_dirs:
	mkdir -p ${BUILD_DIR}
${BUILD_DIR}/${PROJECT_NAME}: ${BUILD_DIR}/main.o
	$(CC) $^ -o $@
${BUILD_DIR}/main.o: ${SRC_DIR}/main.c
	$(CC) -c $^ -o $@ ${C_FLAGS}
clean:
	rm ${BUILD_DIR} -fR
