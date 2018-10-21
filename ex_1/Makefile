PROJECT_NAME=ex_1
BUILD_DIR=build
SRC_DIR=src
C_FLAGS=-Wall -g -O0
.PHONY: all clean prepare_dirs
all: prepare_dirs ${BUILD_DIR}/types ${BUILD_DIR}/real_num
prepare_dirs:
	mkdir -p ${BUILD_DIR}
${BUILD_DIR}/real_num: ${BUILD_DIR}/real_num.o
	$(CC) $^ -o $@
${BUILD_DIR}/real_num.o: ${SRC_DIR}/real_num/main.c
	$(CC) -c $^ -o $@ ${C_FLAGS}
${BUILD_DIR}/types: ${BUILD_DIR}/types.o
	$(CC) $^ -o $@
${BUILD_DIR}/types.o: ${SRC_DIR}/types/main.c
		$(CC) -c $^ -o $@ ${C_FLAGS}
clean:
	rm ${BUILD_DIR} -fR
