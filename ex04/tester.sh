#!/bin/bash

# Compilamos el programa
make

echo -e "\n--- CREANDO ARCHIVOS DE PRUEBA ---"
echo "hola mundo hola 42" > test_normal.txt
touch test_vacio.txt
echo "Aquí no hay nada que hacer." > test_sin_palabra.txt

echo -e "\n[1] CASO NORMAL: Reemplazar 'hola' por 'adios'"
echo -e "📄 ANTES (test_normal.txt):"
cat test_normal.txt
echo -e "💻 Comando: ./replace test_normal.txt hola adios"
./replace test_normal.txt hola adios
echo -e "🔄 DESPUÉS (test_normal.txt.replace):"
cat test_normal.txt.replace

echo -e "\n\n[2] CASO LÍMITE: Archivo vacío"
echo -e "📄 ANTES (test_vacio.txt):"
cat test_vacio.txt
echo -e "💻 Comando: ./replace test_vacio.txt hola adios"
./replace test_vacio.txt hola adios
echo -e "🔄 DESPUÉS (test_vacio.txt.replace):"
cat test_vacio.txt.replace

echo -e "\n\n[3] CASO LÍMITE: Palabra no encontrada"
echo -e "📄 ANTES (test_sin_palabra.txt):"
cat test_sin_palabra.txt
echo -e "💻 Comando: ./replace test_sin_palabra.txt secreta revelada"
./replace test_sin_palabra.txt secreta revelada
echo -e "🔄 DESPUÉS (test_sin_palabra.txt.replace):"
cat test_sin_palabra.txt.replace

echo -e "\n\n[4] MANEJO DE ERRORES: Sin argumentos"
echo -e "💻 Comando: ./replace"
./replace

echo -e "\n[5] MANEJO DE ERRORES: Archivo inexistente"
echo -e "💻 Comando: ./replace no_existo.txt s1 s2"
./replace no_existo.txt s1 s2

echo -e "\n[6] MANEJO DE ERRORES: String vacío"
echo -e "💻 Comando: ./replace test_normal.txt \"\" adios"
./replace test_normal.txt "" adios

echo -e "\n--- LIMPIANDO ---"
rm -f test_normal.txt test_vacio.txt test_sin_palabra.txt *.replace
make fclean