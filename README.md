# Laboratorio #5

En este laboratorio se genera un archivo JSON con datos personales suministrados en el enunciado usando la biblioteca `cJSON`.

## Requisitos

- `gcc`, `make`, `cmake`, `meson`
- Primero es necesario clonar la biblioteca cJSON dentro del archivo raíz:
```bash
git clone https://github.com/DaveGamble/cJSON.git
```

## Compilación

### Con Make
```bash
make
./build/main
```

### Con CMake
```bash
mkdir build
cd build
cmake ..
make
./main
```

### Con Meson
```bash
meson setup build
meson compile -C build
./build/main
```

El archivo generado estará en: `build/mi_datos.json`
