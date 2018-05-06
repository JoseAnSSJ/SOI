# SOI

## Examen de diagnostico

# ¿Qué es un sitema operativo?
	Un sistema operativo es el programa base de una aparato electronico el cual se encarga de vincular todos los drivers (teclado, pantalla, mouse, bocinas)
de una computadora para su maximo uso

# ¿Qué sistemas operativos conoces?
	Windows, linux, solaris, MS-Dos, Androis, IOS

# ¿Qué diferencias entre estos sistemas operativos identificas?
	La principal diferencia entre ellos la interfaz grafica, el unos el codigo es abierto y en otros no, unos son de celular y otros de computadora

# ¿Qué diferencia hay entre memoria logica y fisica?
	La memoria logica es la que se encarga de guardar el cache de los programas y se borra al momento de apagar la computadora, y la fisica es la que guarda todos
los archivos (como USB o DD) y no importa si la maquina se apaga la memoria no borra los archivos

# ¿Qué tipo de sistemas de archivos conoce?
	FAT 32, NTFS

# ¿Qué es criptografia?
	La criotografia es el proceso por el cual se encriptan (ocultar con un con un codigo) archivos o mensajes


### Temario
## Unidad	Temas	Subtemas
# 1	Introducción a los Sistemas Operativos	
- Definición y concepto.
- Funciones y características
- Evolución histórica
- Clasificación
- Estructura (niveles o estratos de diseño).
- Núcleo
- Interrupciones (FLIH).
- Despachador (Scheduler).
- Primitivas de comunicación (IPC)

# 2	Administración de procesos y del procesador	
- 2.1 Concepto de proceso.
- 2.2 Estados y transiciones de los procesos.
- 2.3 Procesos ligeros (Hilos o hebras).
- 2.4 Concurrencia y secuencialidad.
    - 2.4.1 Exclusión mutua de secciones críticas.
    - 2.4.2 Sincronización de procesos en S.C.
       - 2.4.2.1 Mecanismo de semáforos.
       - 2.4.2.2 Mecanismo de monitores.
    - 2.4.3 Interbloqueo (DeadLock).
       - 2.4.3.1 Prevención.
       - 2.4.3.2 Detección.
       - 2.4.3.3 Recuperación.
- 2.5 Niveles objetivos y criterios planificación.
- 2.6 Técnicas de administración del planificador.
    - 2.6.1 FIFO.
    - 2.6.2 SJF.
    - 2.6.3 RR.
    - 2.6.4 Queves multi-level.
    - 2.6.5 Multi-level feedback queves.

# 3	Administración de Memoria	
- 3.1 Política y filosofía.
- 3.2 Memoria real.
    - 3.2.1 Administración de almacenamiento.
    - 3.2.2 Jerarquía.
    - 3.2.3 Estrategia de administración de memoria.
    - 3.2.4 Asignación contigua v.s. no contigua.
    - 3.2.5 Multiprogramación de partición fija, partición variable, con intercambio de almacenamiento.
- 3.3 Organización de memoria virtual.
    - 3.3.1 Evaluación de las organizaciones de almacenamiento.
    - 3.3.2 Paginación.
    - 3.3.3 Segmentación.
    - 3.3.4 Sistemas de paginación segmentación.
- 3.4 Administración de memoria virtual.
    - 3.4.1 Estrategias de administración.
    - 3.4.2 Técnicas de reemplazo de páginas.
    - 3.4.3 Paginación por demanda.
    - 3.4.4 Paginación anticipada.
    - 3.4.5 Liberación de página.
    - 3.4.6 Tamaño de página.

# 4	Administración de entrada/salida
- 4.1 Dispositivos y manejadores de dispositivos (device drivers).
- 4.2 Mecanismos y funciones de los manejadores de dispositivos (device drivers).
- 4.3 Estructuras de datos para manejo de dispositivos.
- 4.4 Operaciones de entrada / salida.

# 5	Sistema de archivos
- 5.1 Concepto.
- 5.2 Noción de archivo real y virtual.
- 5.3 Componentes de un sistema de archivos.
- 5.4 Organización lógica y física.
- 5.5 Mecanismos de acceso a los archivos.
- 5.6 Manejo de espacio en memoria secundaria.
- 5.7 Modelo jerárquico.
- 5.8 Mecanismo de recuperación en caso de falla.

# 6	Protección y seguridad
- 6.1 Concepto y objetivos de protección.
- 6.2 Funciones del sistema de protección.
- 6.3 Implantación de matrices de acceso.
- 6.4 Protección basada en el lenguaje.
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
	En informática y telecomunicaciones la carga útil? (payload en inglés) es el conjunto de datos transmitidos que es en realidad el mensaje enviado. La carga útil excluye las cabeceras o metadatos, que son enviados simplemente para facilitar la entrega del mensaje.

## - Carga absoluta:
	El proceso de carga absoluta consiste en que con la máquina vacía ó inactiva no hay necesidad de hacer relocalización de programas tan solo se puede especificar la dirección absoluta del programa que se cargue en primer lugar.

## - Carga en tiempo real dinamica:

## - Carga reubicable:

## - Compactacion:
	Proceso consistente en agrupar los datos de uno o varios ficheros para ahorrar espacio de almacenamiento.

## - Comparticion:
	Compartir archivos consiste en poner a disponibilidad el contenido de uno o más directorios a través de la red. Todos los sistemas de Windows cuentan con dispositivos estándar que facilitan el hecho de compartir el contenido de un directorio. No obstante, compartir archivos puede implicar problemas de seguridad ya que, por definición, brinda a los usuarios acceso al contenido de una parte del disco duro.

## - Direccion fisica:
	En la informática, una dirección física (también denominada dirección real o dirección binaria) es una dirección de memoria que se representa en forma de un número binario en la circuitería de bus de direcciones para permitir que el bus de datos acceda a una celda de almacenamiento particular de la red principal de memoria o un registro de dispositivo de E/S mapeada en memoria.

## - Direccion logica:
	Los programas de computadora utilizan direcciones de memoria para ejecutar código máquina, almacenar y recibir datos.

## - Direccion relativa:
	(relative address). Una dirección relativa es un identificador que indica la posición de una ubicación de memoria en una computadora relativa a la dirección base.

## - Editor de enlaces:
	Es el que establece la combinación de programas mencionada y también crea una imagen de carga a memoria, que resguarda en el almacenamiento secundario (disco), para usos futuros.

## - Editor dinamico:

## - Enlazador:
	Es un programa que toma los objetos generados en los primeros pasos del proceso de compilación, la información de todos los recursos necesarios (biblioteca), quita aquellos recursos que no necesita, y enlaza el código objeto con su(s) biblioteca(s) con lo que finalmente produce un fichero ejecutable o una biblioteca.

## - Fragmentacion externa:
	Este tipo de fragmentación aparece como consecuencia de las distintas políticas de ajuste de bloques que tiene un sistema de ficheros, o al utilizar asignaciones dinámicas de bloques en el caso de la memoria.

## - Fragmentacion interna:
	La fragmentación interna es la pérdida de espacio en disco debido al hecho de que el tamaño de un determinado archivo sea inferior al tamaño del cluster, ya que teóricamente el archivo estaría obligado a ser referenciado como un cluster completo.

## - Gestion de memoria:
	La administración de memoria representa un vínculo delicado entre el rendimiento (tiempo de acceso) y la cantidad (espacio disponible). Siempre se busca obtener el mayor espacio disponible en la memoria.

## - Marca:
	Las marcas dicen al browser cómo formatear el texto o que partes de texto deben hacer. Por ejemplo, el par de marcas <strong>…</strong> indican al browser que debe poner el texto entre las dos marcas en negrita, la marca simple <hr> indica que se debe insertar una línea horizontal, etc.

## - Organizacion logica:
	La mayoría de las computadoras organizan los archivos en jerarquías llamadas carpetas, directorios o catálogos . (El concepto es el mismo independientemente de la terminología usada.) 

## - Organizacion fisica:
	Los datos son arreglados por su adyacencia física, es decir, de acuerdo con el dispositivo de almacenamiento secundario. Los registros son de tamaño fijo o de tamaño variable y pueden organizarse de varias formas para constituir archivos físicos. 

## - Pagina:
	En los sistemas de memoria virtual, unidad de almacenamiento de datos que se lleva a la RAM, normalmente desde un disco duro, cuando un elemento solicitado de información no se encuentra allí.

## - Particionamiento:
	La partición es el nombre que reciben las divisiones de una unidad física de almacenamiento de datos. Los sistemas operativos suelen interpretar cada partición de un disco rígido como un disco independiente, aún cuando se trate de divisiones virtuales de una misma unidad física.

## - Particionamiento fisico:

## - Particionamiento dinamico:
	Ocupa una porción de la partición extendida o la totalidad de la misma, la cual se ha formateado con un tipo específico de sistema de archivos (FAT32, NTFS, ext2,...) y se le ha asignado una unidad, así el sistema operativo reconoce las particiones lógicas o su sistema de archivos.

## - Proteccion:
	Si se corren varias aplicaciones al mismo tiempo, cada una debe tener un límite de memoria para poder trabajar en ésta y tener cuidado que otra aplicación que esté corriendo al mismo tiempo no utilice una parte de la memoria de la otra, porque se produciría una mezcla de datos que nadie sabe en qué desastre puede terminar.

## - Reubicacion:
	El concepto de reubicación se utiliza en este contexto para definir el traspaso de los datos relacionados con un mismo objeto de un espacio a otro de la memoria.

## - Segmentacion:
	En los sistemas de almacenamiento virtual, la segmentación identifica las unidades lógicas de los programas y datos para facilitar el control de acceso y participación.

## - Tabla de Paginas:
________________________________________________________________________________________________________________________________________

# Glosario Unidad IV

## - Asignación de fichero

## - Asignación de fichero indexado

## - Asignación de ficheros contigua

## - Asignación de ficheros encadenada

## - Base de datos: Una BD (base de datos), es una colección de datos clasificados y estructurados que son guardados en uno o varios ficheros pero referenciados como si de un único fichero se tratara. Es una recopilación de información relativa a un asunto o propósito particular, como el seguimiento de pedidos de clientes o el mantenimiento de una colección de música. Puede dividir los datos en contenedores de almacenamiento denominados tablas.

## - Bloque: Unidad de información constituida por un encabezamiento y un campo de información.

## - Campo: Es cada una de las columnas de la planilla donde se guarda un tipo concreto de información.

## - Campo clave: Se llama así al nombre que designa a aquel campo cuyo contenido no puede aparecer en dos registros que pertenezcan a una misma tabla.

## - Directorio: Contenedor para programas y archivos en interfaces gráficas de usuario, representado en la pantalla mediante una imagen gráfica (icono) de una carpeta de archivo.

## - Directorio de trabajo o actual: Término utilizado a veces para describir el directorio en el que está instalado el software de un servidor web. 

## - Fichero: Colección de registros de un ordenador, relacionados entre sí y tratados como una unidad.

## - Fichero de acceso directo o hash: Conjunto de caracteres que identifican unívocamente a un archivo. Es un código que lo diferencia del resto.

## - Fichero indexado: 

## - Fichero secuencial: 

## - Fichero secuencial indexado: 

## - Método de acceso: 

## - Nodo-i: 

## - Nombre de fichero: Nombre del archivo

## - Pila: Es una estructura de datos que consta de una seria de valores en el cual las inserciones y eliminaciones se hacen por un extremo llamado cima o tope. Esta estructura se conoce también como LIFO o stack (apilamiento).

## - Registro: El registro (registry) es una parte fundamental del sistema operativo. Referido a cualquier sistema operativo Windows, podemos definirlo como una base de datos dinámica diseñada para recopilar información muy valiosa necesaria para la correcta ejecución tanto del sistema operativo como de las aplicaciones. Así, guarda en su interior parte de la configuración y personalización del sistema, las claves de usuario y el acceso a los diferentes recursos, al tiempo que las asociaciones de archivos con sus correspondientes programas o la configuración del hardware.

## - Ruta del nombre: Direccion donde se encuentran los archivos

## - Sistema de gestión de ficheros: 

## - Tabla de asignación de disco: Estructura que posee la información que describe las características de las particiones implantadas en un disco duro. Este elemento, que se encuentra en el sector MBR del disco, contiene las diferentes divisiones y tipos de formato que se han realizado en el disco. De esta manera, pueden coexistir diferentes sistemas operativos sin que la organización del disco (FAT, NTFS, ext3, reiserfs, etc.) tenga que ser «compatible».

## - Tabla de asignación de fichero: Las tablas de hash (HashTable) son estructuras especialmente diseñadas para acelerar las búsquedas de un elemento, indicando su clave única. La idea es que cada elemento va asociado con una clave, a la cual se le aplica una función (hash) que devuelve directamente la ubicación del elemento en la estructura. A medida que se van agregando elementos a la colección, ésta no conserva ningún orden en particular, y, además, tampoco esta diseñada para ser recorrida de ningún modo. Una tabla de hash tiene un objetivo puntual: acelerar las búsquedas.

## - Tabla de bits: Una tabla de códigos es un juego de caracteres donde cada uno tiene asignado un número utilizado para su representación interna.
________________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________________

________________________________________________________________________________________________________________________________________
