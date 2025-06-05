CC = gcc
CFLAGS = -I./src -I./cJSON
SRC = src/main.c src/json.c cJSON/cJSON.c
OUT = build/main

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT) build/mi_datos.json
