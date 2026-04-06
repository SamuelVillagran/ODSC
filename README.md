# 🚀 Organización de los Sistemas de Cómputo (ODSC)

[cite_start]Bienvenido al repositorio central de **ODSC**[cite: 2, 7]. [cite_start]Este curso explora el puente fundamental entre el software de alto nivel y el hardware físico, cubriendo desde la lógica digital básica hasta la complejidad de los sistemas operativos modernos[cite: 19, 21].

---

## 📋 Resumen de la Materia
[cite_start]La asignatura se centra en comprender cómo las máquinas actuales logran su capacidad mediante microprocesadores de alta velocidad y una gestión eficiente de recursos[cite: 20]. [cite_start]A lo largo del curso, estudiamos la **Arquitectura von Neumann** [cite: 42][cite_start], el diseño de circuitos [cite: 46][cite_start], la programación en bajo nivel (**Assembler**) [cite: 52] [cite_start]y cómo el **Sistema Operativo** actúa como el puente esencial entre el usuario y los recursos físicos del sistema[cite: 21, 22].

---

## 🖥️ Lenguaje de Programación C
[cite_start]Antes de interactuar directamente con el hardware, utilizamos el lenguaje de programación **C** junto con el compilador **GCC**[cite: 114]. C es un lenguaje estructurado de propósito general que, por su bajo nivel de abstracción, permite una gestión directa de la memoria y los procesos. Es fundamental en esta materia para comprender cómo se construyen y operan los sistemas operativos y cómo el software interactúa estrechamente con la arquitectura de la máquina.

---

## 🛠️ Set de Instrucciones MARIE
[cite_start]**MARIE** (*Machine Architecture that is Really Intuitive and Easy*) es nuestra arquitectura de referencia para entender el ciclo de ejecución de la CPU y desarrollar soluciones en lenguaje ensamblador[cite: 129, 134].

| Tipo | Mnemónico | Opcode | Descripción |
| :--- | :--- | :---: | :--- |
| **Aritmética** | `ADD X` | 3 | [cite_start]Suma el contenido de la dirección X al AC[cite: 130]. |
| | `SUBT X` | 4 | [cite_start]Resta el contenido de la dirección X al AC[cite: 130]. |
| | `ADDI X` | B | [cite_start]Suma indirecta usando el valor en X como dirección[cite: 130]. |
| | `CLEAR` | A | [cite_start]Pone el AC en ceros[cite: 130]. |
| **Data Transfer**| `LOAD X` | 1 | [cite_start]Carga el contenido de la dirección X en el AC[cite: 130]. |
| | `STORE X` | 2 | [cite_start]Guarda el contenido del AC en la dirección X[cite: 130]. |
| | `LOADI X` | D | [cite_start]Carga indirecta usando el valor en X como dirección[cite: 130]. |
| **I/O** | `INPUT` | 5 | [cite_start]Entrada desde el teclado hacia el AC[cite: 130]. |
| | `OUTPUT` | 6 | [cite_start]Salida del valor del AC a la pantalla[cite: 130]. |
| **Control** | `JUMP X` | 9 | [cite_start]Salto incondicional a la dirección X[cite: 130]. |
| | `SKIPCOND C`| 8 | [cite_start]Salta la sig. instrucción si se cumple la condición C[cite: 130]. |
| | `HALT` | 7 | [cite_start]Termina la ejecución del programa[cite: 130]. |

---

## 💽 Máquinas Virtuales
[cite_start]Para el componente práctico de Sistemas Operativos, empleamos **Máquinas Virtuales**[cite: 28]. [cite_start]Una máquina virtual es un entorno de software que emula un sistema informático completo, permitiendo instalar, configurar e identificar labores de administración de sistemas operativos de forma aislada e independiente del hardware físico[cite: 28, 115]. Esto nos permite probar distribuciones Linux u otros sistemas de manera segura, sin alterar la configuración principal del equipo anfitrión.

---

## 📚 Ejes Temáticos

### 🏗️ Unidad 1: Arquitectura del Computador
* [cite_start]**Fundamentos:** Componentes principales, modelo von Neumann y evolución histórica[cite: 40, 41, 42].
* [cite_start]**Representación de Datos:** Sistemas numéricos, representación de enteros con signo, punto flotante y códigos de caracteres[cite: 44, 45].
* [cite_start]**Lógica Digital:** Diseño de circuitos combinatorios y secuenciales con compuertas lógicas[cite: 46].

### 💻 Unidad 2: ISA y Assembler
* [cite_start]**CPU:** Organización y componentes básicos de la Unidad Central de Proceso[cite: 53].
* [cite_start]**Programación:** Implementación de programas de tamaño pequeño y mediano en lenguaje ensamblador[cite: 50].

### 🐧 Unidad 3: Sistemas Operativos
* [cite_start]**Gestión de Procesos:** Conceptos básicos, planificación de CPU, operaciones sobre procesos y comunicación[cite: 66, 67].
* [cite_start]**Memoria:** Gestión de la memoria, jerarquías, memoria caché y el mecanismo de memoria virtual[cite: 68, 69].
* [cite_start]**Almacenamiento:** Archivos, métodos de acceso, almacenamiento secundario y RAID[cite: 70].

---

## 🔧 Herramientas Utilizadas
* [cite_start]🛠️ **Logisim / Nand2Tetris:** Diseño y simulación de circuitos digitales[cite: 111, 116].
* [cite_start]🖥️ **MARIE:** Entorno de ejecución para programas en ensamblador[cite: 116].
* [cite_start]📂 **Virtual Machines:** Para administración e instalación de sistemas operativos[cite: 28, 115].
* [cite_start]⚙️ **GCC:** Compilador para proyectos en lenguaje C[cite: 114].

---

## 📖 Bibliografía Principal
1. [cite_start]**The Essentials of Computer Organization and Architecture**, Linda Null[cite: 102].
2. [cite_start]**Operating Systems: Internals and Design Principles**, William Stallings[cite: 103].

---
> [cite_start]*"El computador es la herramienta que combina hardware, software y algoritmos, y constituye el núcleo de la tecnología informática"*[cite: 19].

**Algunos PDF's NO están autorizados para distribuirse masivamente por lo que no son propiedad de este autor, todos los derechos reservados a la Universidad Escuela Colombiana de Ingenieria Julio Garabito.**
