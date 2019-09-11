# Compilación
Suponiendo que tenemos a **gcc** en nuestro PATH (Windows) o en /usr/bin (Linux), podemos ejecutar el siguiente comando:

> gcc main.c funciones.c colors.c

...para compilar, y para ejecutar sería así:

> ./a.exe

^ Si están en Windows 10 (PowerShell)



> a.exe

^ Si están en Windows 7 (CMD)



> ./a.out

^ Si están en Linux (acordate que existe el operador **&&** en las terminales de GNU/Linux y CMD en Windows. **PowerShell** (Windows 10) no soporta estos operadores).

# Guardado de datos y salida
El archivo **binario.bin** se guardó con el procedimiento **preLoad()**. Las funciones de escritura están comentadas dentro de la función **main()** para que el programa ejecutable te muestre lo que tiene el archivo binario de manera directa; Sin embargo, pueden ser descomentadas para testear. Deberías tener una salida cómo la mostrada en esta captura de pantalla:

![salida del programa (captura)](https://i.imgur.com/UzsV166.png)
