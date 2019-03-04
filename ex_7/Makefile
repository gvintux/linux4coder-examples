PROJECT_NAME=ex_7
BUILD_DIR=build
SRC_DIR=src
C_FLAGS=-Wall -g -O0
.PHONY: all clean prepare_dirs
all: prepare_dirs ${BUILD_DIR}/struct ${BUILD_DIR}/typedef ${BUILD_DIR}/union_enum
prepare_dirs:
	mkdir -p ${BUILD_DIR}
${BUILD_DIR}/struct: ${BUILD_DIR}/struct.o
	$(CC) $^ -o $@
${BUILD_DIR}/struct.o: ${SRC_DIR}/struct/main.c
	$(CC) -c $^ -o $@ ${C_FLAGS}
${BUILD_DIR}/typedef: ${BUILD_DIR}/typedef.o
	$(CC) $^ -o $@
${BUILD_DIR}/typedef.o: ${SRC_DIR}/typedef/main.c
		$(CC) -c $^ -o $@ ${C_FLAGS}
${BUILD_DIR}/union_enum: ${BUILD_DIR}/union_enum.o
	$(CC) $^ -o $@
${BUILD_DIR}/union_enum.o: ${SRC_DIR}/union_enum/main.c
	$(CC) -c $^ -o $@ ${C_FLAGS}
clean:
	rm ${BUILD_DIR} -fR
