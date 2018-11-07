PROJECT_NAME=ex_2
BUILD_DIR=build
SRC_DIR=src
C_FLAGS=-Wall -g -O0
.PHONY: all clean prepare_dirs
all: prepare_dirs ${BUILD_DIR}/errors ${BUILD_DIR}/printf_scanf
prepare_dirs:
	mkdir -p ${BUILD_DIR}
${BUILD_DIR}/errors: ${BUILD_DIR}/errors.o
	$(CC) $^ -o $@
${BUILD_DIR}/errors.o: ${SRC_DIR}/errors/main.c
	$(CC) -c $^ -o $@ ${C_FLAGS}
${BUILD_DIR}/printf_scanf: ${BUILD_DIR}/printf_scanf.o
	$(CC) $^ -o $@
${BUILD_DIR}/printf_scanf.o: ${SRC_DIR}/printf_scanf/main.c
		$(CC) -c $^ -o $@ ${C_FLAGS}
clean:
	rm ${BUILD_DIR} -fR
