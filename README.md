# SOI

## Examen de diagnostico

# �Qu� es un sitema operativo?
	Un sistema operativo es el programa base de una aparato electronico el cual se encarga de vincular todos los drivers (teclado, pantalla, mouse, bocinas)
de una computadora para su maximo uso

# �Qu� sistemas operativos conoces?
	Windows, linux, solaris, MS-Dos, Androis, IOS

# �Qu� diferencias entre estos sistemas operativos identificas?
	La principal diferencia entre ellos la interfaz grafica, el unos el codigo es abierto y en otros no, unos son de celular y otros de computadora

# �Qu� diferencia hay entre memoria logica y fisica?
	La memoria logica es la que se encarga de guardar el cache de los programas y se borra al momento de apagar la computadora, y la fisica es la que guarda todos
los archivos (como USB o DD) y no importa si la maquina se apaga la memoria no borra los archivos

# �Qu� tipo de sistemas de archivos conoce?
	FAT 32, NTFS

# �Qu� es criptografia?
	La criotografia es el proceso por el cual se encriptan (ocultar con un con un codigo) archivos o mensajes


### Temario
## Unidad	Temas	Subtemas
# 1	Introducci�n a los Sistemas Operativos	
- Definici�n y concepto.
- Funciones y caracter�sticas
- Evoluci�n hist�rica
- Clasificaci�n
- Estructura (niveles o estratos de dise�o).
- N�cleo
- Interrupciones (FLIH).
- Despachador (Scheduler).
- Primitivas de comunicaci�n (IPC)

# 2	Administraci�n de procesos y del procesador	
- 2.1 Concepto de proceso.
- 2.2 Estados y transiciones de los procesos.
- 2.3 Procesos ligeros (Hilos o hebras).
- 2.4 Concurrencia y secuencialidad.
    - 2.4.1 Exclusi�n mutua de secciones cr�ticas.
    - 2.4.2 Sincronizaci�n de procesos en S.C.
       - 2.4.2.1 Mecanismo de sem�foros.
       - 2.4.2.2 Mecanismo de monitores.
    - 2.4.3 Interbloqueo (DeadLock).
       - 2.4.3.1 Prevenci�n.
       - 2.4.3.2 Detecci�n.
       - 2.4.3.3 Recuperaci�n.
- 2.5 Niveles objetivos y criterios planificaci�n.
- 2.6 T�cnicas de administraci�n del planificador.
    - 2.6.1 FIFO.
    - 2.6.2 SJF.
    - 2.6.3 RR.
    - 2.6.4 Queves multi-level.
    - 2.6.5 Multi-level feedback queves.

# 3	Administraci�n de Memoria	
- 3.1 Pol�tica y filosof�a.
- 3.2 Memoria real.
    - 3.2.1 Administraci�n de almacenamiento.
    - 3.2.2 Jerarqu�a.
    - 3.2.3 Estrategia de administraci�n de memoria.
    - 3.2.4 Asignaci�n contigua v.s. no contigua.
    - 3.2.5 Multiprogramaci�n de partici�n fija, partici�n variable, con intercambio de almacenamiento.
- 3.3 Organizaci�n de memoria virtual.
    - 3.3.1 Evaluaci�n de las organizaciones de almacenamiento.
    - 3.3.2 Paginaci�n.
    - 3.3.3 Segmentaci�n.
    - 3.3.4 Sistemas de paginaci�n segmentaci�n.
- 3.4 Administraci�n de memoria virtual.
    - 3.4.1 Estrategias de administraci�n.
    - 3.4.2 T�cnicas de reemplazo de p�ginas.
    - 3.4.3 Paginaci�n por demanda.
    - 3.4.4 Paginaci�n anticipada.
    - 3.4.5 Liberaci�n de p�gina.
    - 3.4.6 Tama�o de p�gina.

# 4	Administraci�n de entrada/salida
- 4.1 Dispositivos y manejadores de dispositivos (device drivers).
- 4.2 Mecanismos y funciones de los manejadores de dispositivos (device drivers).
- 4.3 Estructuras de datos para manejo de dispositivos.
- 4.4 Operaciones de entrada / salida.

# 5	Sistema de archivos
- 5.1 Concepto.
- 5.2 Noci�n de archivo real y virtual.
- 5.3 Componentes de un sistema de archivos.
- 5.4 Organizaci�n l�gica y f�sica.
- 5.5 Mecanismos de acceso a los archivos.
- 5.6 Manejo de espacio en memoria secundaria.
- 5.7 Modelo jer�rquico.
- 5.8 Mecanismo de recuperaci�n en caso de falla.

# 6	Protecci�n y seguridad
- 6.1 Concepto y objetivos de protecci�n.
- 6.2 Funciones del sistema de protecci�n.
- 6.3 Implantaci�n de matrices de acceso.
- 6.4 Protecci�n basada en el lenguaje.
- 6.5 Concepto de seguridad.
- 6.6 Clasificaciones de la seguridad.
- 6.7 Cifrado.
_______________________________________________________________________________________________________________________________________

# Descripcion de Tareas


Temario de la materia de Sistemas operativos I
________________________________________________________________________________________________________________________________________

Guia de Examen de la Unidad I
________________________________________________________________________________________________________________________________________


# Glosario

## - RDIM
	Registro de direccion de memoria que especifica la direccion de la memoria siguiente lectura o escritura
## - RDAM
	Registro de datos de memoria que contiene los datos que se van a escribir en la memoria o que recibe datos leidos de la memoria
________________________________________________________________________________________________________________________________________

# Glosario Tarea

## - Carga:
	En inform�tica y telecomunicaciones la carga �til? (payload en ingl�s) es el conjunto de datos transmitidos que es en realidad el mensaje enviado. La carga �til excluye las cabeceras o metadatos, que son enviados simplemente para facilitar la entrega del mensaje.

## - Carga absoluta:
	El proceso de carga absoluta consiste en que con la m�quina vac�a � inactiva no hay necesidad de hacer relocalizaci�n de programas tan solo se puede especificar la direcci�n absoluta del programa que se cargue en primer lugar.

## - Carga en tiempo real dinamica:

## - Carga reubicable:

## - Compactacion:
	Proceso consistente en agrupar los datos de uno o varios ficheros para ahorrar espacio de almacenamiento.

## - Comparticion:
	Compartir archivos consiste en poner a disponibilidad el contenido de uno o m�s directorios a trav�s de la red. Todos los sistemas de Windows cuentan con dispositivos est�ndar que facilitan el hecho de compartir el contenido de un directorio. No obstante, compartir archivos puede implicar problemas de seguridad ya que, por definici�n, brinda a los usuarios acceso al contenido de una parte del disco duro.

## - Direccion fisica:
	En la inform�tica, una direcci�n f�sica (tambi�n denominada direcci�n real o direcci�n binaria) es una direcci�n de memoria que se representa en forma de un n�mero binario en la circuiter�a de bus de direcciones para permitir que el bus de datos acceda a una celda de almacenamiento particular de la red principal de memoria o un registro de dispositivo de E/S mapeada en memoria.

## - Direccion logica:
	Los programas de computadora utilizan direcciones de memoria para ejecutar c�digo m�quina, almacenar y recibir datos.

## - Direccion relativa:
	(relative address). Una direcci�n relativa es un identificador que indica la posici�n de una ubicaci�n de memoria en una computadora relativa a la direcci�n base.

## - Editor de enlaces:
	Es el que establece la combinaci�n de programas mencionada y tambi�n crea una imagen de carga a memoria, que resguarda en el almacenamiento secundario (disco), para usos futuros.

## - Editor dinamico:

## - Enlazador:
	Es un programa que toma los objetos generados en los primeros pasos del proceso de compilaci�n, la informaci�n de todos los recursos necesarios (biblioteca), quita aquellos recursos que no necesita, y enlaza el c�digo objeto con su(s) biblioteca(s) con lo que finalmente produce un fichero ejecutable o una biblioteca.

## - Fragmentacion externa:
	Este tipo de fragmentaci�n aparece como consecuencia de las distintas pol�ticas de ajuste de bloques que tiene un sistema de ficheros, o al utilizar asignaciones din�micas de bloques en el caso de la memoria.

## - Fragmentacion interna:
	La fragmentaci�n interna es la p�rdida de espacio en disco debido al hecho de que el tama�o de un determinado archivo sea inferior al tama�o del cluster, ya que te�ricamente el archivo estar�a obligado a ser referenciado como un cluster completo.

## - Gestion de memoria:
	La administraci�n de memoria representa un v�nculo delicado entre el rendimiento (tiempo de acceso) y la cantidad (espacio disponible). Siempre se busca obtener el mayor espacio disponible en la memoria.

## - Marca:
	Las marcas dicen al browser c�mo formatear el texto o que partes de texto deben hacer. Por ejemplo, el par de marcas <strong>�</strong> indican al browser que debe poner el texto entre las dos marcas en negrita, la marca simple <hr> indica que se debe insertar una l�nea horizontal, etc.

## - Organizacion logica:
	La mayor�a de las computadoras organizan los archivos en jerarqu�as llamadas carpetas, directorios o cat�logos . (El concepto es el mismo independientemente de la terminolog�a usada.) 

## - Organizacion fisica:
	Los datos son arreglados por su adyacencia f�sica, es decir, de acuerdo con el dispositivo de almacenamiento secundario. Los registros son de tama�o fijo o de tama�o variable y pueden organizarse de varias formas para constituir archivos f�sicos. 

## - Pagina:
	En los sistemas de memoria virtual, unidad de almacenamiento de datos que se lleva a la RAM, normalmente desde un disco duro, cuando un elemento solicitado de informaci�n no se encuentra all�.

## - Particionamiento:
	La partici�n es el nombre que reciben las divisiones de una unidad f�sica de almacenamiento de datos. Los sistemas operativos suelen interpretar cada partici�n de un disco r�gido como un disco independiente, a�n cuando se trate de divisiones virtuales de una misma unidad f�sica.

## - Particionamiento fisico:

## - Particionamiento dinamico:
	Ocupa una porci�n de la partici�n extendida o la totalidad de la misma, la cual se ha formateado con un tipo espec�fico de sistema de archivos (FAT32, NTFS, ext2,...) y se le ha asignado una unidad, as� el sistema operativo reconoce las particiones l�gicas o su sistema de archivos.

## - Proteccion:
	Si se corren varias aplicaciones al mismo tiempo, cada una debe tener un l�mite de memoria para poder trabajar en �sta y tener cuidado que otra aplicaci�n que est� corriendo al mismo tiempo no utilice una parte de la memoria de la otra, porque se producir�a una mezcla de datos que nadie sabe en qu� desastre puede terminar.

## - Reubicacion:
	El concepto de reubicaci�n se utiliza en este contexto para definir el traspaso de los datos relacionados con un mismo objeto de un espacio a otro de la memoria.

## - Segmentacion:
	En los sistemas de almacenamiento virtual, la segmentaci�n identifica las unidades l�gicas de los programas y datos para facilitar el control de acceso y participaci�n.

## - Tabla de Paginas:
________________________________________________________________________________________________________________________________________

# Glosario Unidad IV

## - Asignaci�n de fichero

## - Asignaci�n de fichero indexado

## - Asignaci�n de ficheros contigua

## - Asignaci�n de ficheros encadenada

## - Base de datos: Una BD (base de datos), es una colecci�n de datos clasificados y estructurados que son guardados en uno o varios ficheros pero referenciados como si de un �nico fichero se tratara. Es una recopilaci�n de informaci�n relativa a un asunto o prop�sito particular, como el seguimiento de pedidos de clientes o el mantenimiento de una colecci�n de m�sica. Puede dividir los datos en contenedores de almacenamiento denominados tablas.

## - Bloque: Unidad de informaci�n constituida por un encabezamiento y un campo de informaci�n.

## - Campo: Es cada una de las columnas de la planilla donde se guarda un tipo concreto de informaci�n.

## - Campo clave: Se llama as� al nombre que designa a aquel campo cuyo contenido no puede aparecer en dos registros que pertenezcan a una misma tabla.

## - Directorio: Contenedor para programas y archivos en interfaces gr�ficas de usuario, representado en la pantalla mediante una imagen gr�fica (icono) de una carpeta de archivo.

## - Directorio de trabajo o actual: T�rmino utilizado a veces para describir el directorio en el que est� instalado el software de un servidor web. 

## - Fichero: Colecci�n de registros de un ordenador, relacionados entre s� y tratados como una unidad.

## - Fichero de acceso directo o hash: Conjunto de caracteres que identifican un�vocamente a un archivo. Es un c�digo que lo diferencia del resto.

## - Fichero indexado: 

## - Fichero secuencial: 

## - Fichero secuencial indexado: 

## - M�todo de acceso: 

## - Nodo-i: 

## - Nombre de fichero: Nombre del archivo

## - Pila: Es una estructura de datos que consta de una seria de valores en el cual las inserciones y eliminaciones se hacen por un extremo llamado cima o tope. Esta estructura se conoce tambi�n como LIFO o stack (apilamiento).

## - Registro: El registro (registry) es una parte fundamental del sistema operativo. Referido a cualquier sistema operativo Windows, podemos definirlo como una base de datos din�mica dise�ada para recopilar informaci�n muy valiosa necesaria para la correcta ejecuci�n tanto del sistema operativo como de las aplicaciones. As�, guarda en su interior parte de la configuraci�n y personalizaci�n del sistema, las claves de usuario y el acceso a los diferentes recursos, al tiempo que las asociaciones de archivos con sus correspondientes programas o la configuraci�n del hardware.

## - Ruta del nombre: Direccion donde se encuentran los archivos

## - Sistema de gesti�n de ficheros: 

## - Tabla de asignaci�n de disco: Estructura que posee la informaci�n que describe las caracter�sticas de las particiones implantadas en un disco duro. Este elemento, que se encuentra en el sector MBR del disco, contiene las diferentes divisiones y tipos de formato que se han realizado en el disco. De esta manera, pueden coexistir diferentes sistemas operativos sin que la organizaci�n del disco (FAT, NTFS, ext3, reiserfs, etc.) tenga que ser �compatible�.

## - Tabla de asignaci�n de fichero: Las tablas de hash (HashTable) son estructuras especialmente dise�adas para acelerar las b�squedas de un elemento, indicando su clave �nica. La idea es que cada elemento va asociado con una clave, a la cual se le aplica una funci�n (hash) que devuelve directamente la ubicaci�n del elemento en la estructura. A medida que se van agregando elementos a la colecci�n, �sta no conserva ning�n orden en particular, y, adem�s, tampoco esta dise�ada para ser recorrida de ning�n modo. Una tabla de hash tiene un objetivo puntual: acelerar las b�squedas.

## - Tabla de bits: Una tabla de c�digos es un juego de caracteres donde cada uno tiene asignado un n�mero utilizado para su representaci�n interna.
________________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________________

________________________________________________________________________________________________________________________________________
