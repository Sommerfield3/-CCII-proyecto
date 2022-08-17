# Ciencia de la Computación II - Proyecto Final
Este es un programa para la agendación de citas de centros médicos donde se pueden generar ingresos de citas, consultas de citas, ingreso de nuevos pacientes, 
ingreso de nuevos médicos, eliminación de citas, también se usa el hash [md5](#md5). para el cifrado las claves u contraseñas designadas a la hora de envío a la base de datos.
Durante el desarrollo del programa se utilizó [MySQL](#MySQL) para el almacenamiento de la información guardada temporalmente dentro de vectores en el programa en una base de datos y para la generación
de la interfaz de usuario y funcionalidades del código con sintáxis heredada parcialmente de C++ se usó [QT](#QT) 6.3.1.. 

##MySQL
MySQL es un sistema de gestión de bases de datos relacional desarrollado bajo licencia dual: Licencia pública general/Licencia comercial por Oracle Corporation 
y está considerada como la base de datos de código abierto más popular del mundo. MySQL está escrito en C y C++. Su analizador SQL está escrito en yacc (Yet Another Compiler-Compiler), pero utiliza un analizador léxico casero . MySQL funciona en muchas plataformas de sistema , incluidas AIX , BSDi , FreeBSD , HP-UX ,
ArcaOS , eComStation , IBM i , IRIX , Linux , macOS , Microsoft Windows , NetBSD , Novell NetWare , OpenBSD , OpenSolaris, OS/2 Warp, 
QNX , Oracle Solaris , Symbian , SunOS , SCO OpenServer , SCO UnixWare , Sanos y Tru64 . También existe un puerto de MySQL a OpenVMS.

## MD5
El Message Digest 5 es un algoritmo de reducción criptográfico de 128 bits (este tamaño es independiente del tamaño del archivo) de alta velocidad
para el procesamiento de texto y encriptación o también para la autentificación de texto dado el resumen generado. Durante el procesamiento, el mensaje será extendido hasta que
su longitud en bits sea congruente con 448, módulo 512. Esto es, si se le resta 448 a la longitud del mensaje tras este paso, se obtiene un múltiplo de 512. 
Esta extensión se realiza siempre, incluso si la longitud del mensaje es ya congruente con 448, módulo 512. En el último bloque del 512 bits se aplica un relleno de un 1 con tantos como haga falta, 
reservando los últimos 64 bits para indicar el tamaño del archivo. MD5 trata la lectura de bytes de menos significativos a más significativos (little endian).
Se utilizan 4 vectores públicos de 32 bits cada uno (A, B, C, D) para mezclarse con las 16 palabras de cada bloque de entrada de 512 bits, realizando un total de 64 vueltas. 
Luego de las 64 vueltas, los vectores A, B, C, D, habrán cambiado varias veces de valor y luego se procede a usarlos como los nuevo 4 vectores que se mezclan con el segundo 
bloque de bits de entrada y así sucesivamente mientras se encadenan, el último valor de los vectores A, B, C y D es el resumen de 128 bits del archivo ingresado. Debido a la detección de colisiones (diferentes entradas, mismas salidas)
su nivel de seguridad se ha visto drásticamente reducida, pero no obstante aún sigue en uso aunque no es recomendado para la trata de información sensible.

##Qt
Qt es un un software multiplataforma escrito en C++ diseñado para la creación de interfaces gráficas de usuario, así como también de aplicaciones multiplataforma que se ejecutan varias 
plataformas de software y hardware, como Linux, Windows, macOS, Android o sistemas integrados, con cambios nulos o mínimos en el código. Qt usa C++ de forma nativa y tiene acceso a bases de datosSQL , análisis XML , análisis JSON , administración de subprocesos y soporte de red.
