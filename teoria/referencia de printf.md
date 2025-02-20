# Referencia de `printf()`
Esta funcion escribe en la salida estandar (stdout) segun el formato que se le especifique en la cadena de texto por medio de _especificadores_

Los especificadores se denotan con el simobolo `%`

Los especificadores siguen el siguiente formato:
> %[flags][ancho][.precision][longitud]especificador

|Especificador|Que saldra|ejemplo|
|:-|:-|-:|
|__d__ o __i__|Entero en sistema decimal con signo.|392|
|u|Imprime enteros de tipo `unsigned int`.|392|
|o|Imprime enteros `unsigned int` en sistema octal|610|
|x|Imprime enteros `unsigned int` en sistema hexadecimal en minusculas|7fa|
|X|Imprime enteros `unsigned int` en sistema hexadecimal en mayusculas|7fa|
|f|||
|F|||
|e|||
|E|||
|g|||
|G|||
|a|||
|A|||
|c|||
|p|||
|n|||
|%|||
