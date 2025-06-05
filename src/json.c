#include <stdio.h>
#include <stdlib.h>
#include "json.h"
#include "../cJSON/cJSON.h"

void generar_json(const char *ruta) {
    cJSON *raiz = cJSON_CreateObject();

    cJSON_AddStringToObject(raiz, "nombre", "Héctor Bonifacio Echevarría Cervantes de la Cruz Arroyo Rojas");
    cJSON_AddNumberToObject(raiz, "edad", 19);
    cJSON_AddStringToObject(raiz, "carnet", "C12345");
    cJSON_AddBoolToObject(raiz, "estudiante activo", 1);

    char *cadena_json = cJSON_Print(raiz);

    FILE *archivo = fopen(ruta, "w");
    if (archivo) {
        fputs(cadena_json, archivo);
        fclose(archivo);
    }

    free(cadena_json);
    cJSON_Delete(raiz);
}
