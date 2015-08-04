CC=gcc
CC_FLAGS=-fno-stack-protector

ifeq ($(OS),Windows*)
	EXT=.exe
else
	EXT=
endif

all: build

build:
	$(CC) $(CC_FLAGS) game_data.c game_func.c game_i18n.c main.c -o ../bin/vulrpg$(EXT)
