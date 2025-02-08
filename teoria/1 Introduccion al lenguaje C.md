# Introduccion al lenguaje C.
## Historia.
El lenguaje C es un lenguaje de programación de propósito general, creado en 1972 por Dennis Ritchie en los laboratorios Bell. Es uno de los lenguajes más utilizados en la historia de la computación y ha influenciado muchos otros lenguajes como C++, Java, Python y Go.

## Manipulación de memoria.
El lenguaje C se diferencia de los lenguajes de alto nivel principalmente por su control directo sobre la memoria, lo que permite una gestión eficiente de los recursos del sistema.

## Caracteristicas.
### C es un lengaje compilado.
Un lenguaje compilado es aquel en el que el código fuente es transformado en código máquina (binario) antes de ejecutarse. Esta conversión la realiza un programa llamado compilador, que genera un archivo ejecutable que puede correr directamente en la computadora sin necesidad del código fuente original. Dicho ejecutable lo generamos con GCC.
```
gcc archivo.c -o nombre_del_programa
```

### C es un lenjuage estatico.
El tipado estático es una característica de algunos lenguajes de programación donde el tipo de dato de una variable se define en tiempo de compilación y no puede cambiar en tiempo de ejecución.

El siguiente codigo de C no es valido.
```c
int num = 10;  // 'num' siempre será un entero
num = "Hola";  // ❌ Error: No se puede asignar una cadena a un entero
```

Mientras que este de Python, si lo es, ya que es un lenguaje de tipado dinamico.
```py
num = 10
num = "Hola"  # ✅ Permitido en Python
```

### C es un lenguaje debilmente tipado.
Un lenguaje débilmente tipado es aquel que permite conversiones implícitas entre diferentes tipos de datos sin necesidad de que el programador las especifique de forma explícita. Esto puede hacer que el código sea más flexible, pero también puede generar errores difíciles de detectar.

Un ejemplo de este comportamiento es el siguiente codigo, el cual imprime una lista de numeros enteros como caracteres, notese que jamas se declaran explicitamente como caracteres.
```c
#include <stdio.h>

int main()
{
  int hola_mundo[] = {72, 111, 108, 97, 44, 32, 109, 117, 110, 100, 111, 33};
  int size = sizeof(hola_mundo)/sizeof(hola_mundo[0]); // Se obtiene la longitud de la lista.
  
  for (int i = 0; i < size; i++) printf("%c", hola_mundo[i]);
  
  return 0;
}
```

El cual da como salida:
> Hola, mundo!

Esto es debido a la tabla de caracteres ascii, donde podemos observar que, en efecto, los numeros de la lista corresponden a las letras impresas.
```
    0 NUL    16 DLE    32      48 0    64 @    80 P    96 `   112 p 
    1 SOH    17 DC1    33 !    49 1    65 A    81 Q    97 a   113 q 
    2 STX    18 DC2    34 "    50 2    66 B    82 R    98 b   114 r 
    3 ETX    19 DC3    35 #    51 3    67 C    83 S    99 c   115 s 
    4 EOT    20 DC4    36 $    52 4    68 D    84 T   100 d   116 t 
    5 ENQ    21 NAK    37 %    53 5    69 E    85 U   101 e   117 u 
    6 ACK    22 SYN    38 &    54 6    70 F    86 V   102 f   118 v 
    7 BEL    23 ETB    39 '    55 7    71 G    87 W   103 g   119 w 
    8 BS     24 CAN    40 (    56 8    72 H    88 X   104 h   120 x 
    9 HT     25 EM     41 )    57 9    73 I    89 Y   105 i   121 y 
   10 LF     26 SUB    42 *    58 :    74 J    90 Z   106 j   122 z 
   11 VT     27 ESC    43 +    59 ;    75 K    91 [   107 k   123 { 
   12 FF     28 FS     44 ,    60 <    76 L    92 \   108 l   124 | 
   13 CR     29 GS     45 -    61 =    77 M    93 ]   109 m   125 } 
   14 SO     30 RS     46 .    62 >    78 N    94 ^   110 n   126 ~ 
   15 SI     31 US     47 /    63 ?    79 O    95 _   111 o   127 DEL 
```

## Proyectos escritos en C.
- Windows (MSVC).
- Linux (gcc).
- Mac OS.
- iOS.
- Unity.
- Unreal Engine.
- Apache.
- NGINX.
- MySQL.
- SqLite.
- GCC.
