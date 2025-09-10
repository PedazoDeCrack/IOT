# Compilador
CC = gcc

# Flags de compilación
CFLAGS = -Wall -Wextra -std=c11

# Nombre del ejecutable
TARGET = analog_data

# Archivos fuente
SRC = main.c

# Regla por defecto
all: $(TARGET)

# Compilar
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Ejecutar
run: $(TARGET)
	./$(TARGET)

# Limpiar archivos compilados y binarios generados
clean:
	rm -f $(TARGET) AnalogData.bin
