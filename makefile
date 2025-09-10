# Nombre del compilador
CC = gcc

# Flags de compilación
CFLAGS = -Wall -Wextra -std=c11

# Nombre del ejecutable
TARGET = stream_char_test

# Archivos fuente
SRC = main.c

# Regla por defecto
all: $(TARGET)

# Compilación
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Limpiar archivos compilados
clean:
	rm -f $(TARGET) test_file_char.txt
