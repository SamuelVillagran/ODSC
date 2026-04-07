# 🚀 Organización de los Sistemas de Cómputo (ODSC)

Bienvenido al repositorio central de **ODSC**. Este curso explora el puente fundamental entre el software de alto nivel y el hardware físico, cubriendo desde la lógica digital básica hasta la complejidad de los sistemas operativos modernos.

---

## 📋 Resumen de la Materia
La asignatura se centra en comprender cómo las máquinas actuales logran su capacidad mediante microprocesadores de alta velocidad y una gestión eficiente de recursos. A lo largo del curso, estudiamos la **Arquitectura von Neumann**, el diseño de circuitos, la programación en bajo nivel (**Assembler**) y cómo el **Sistema Operativo** actúa como el puente esencial entre el usuario y los recursos físicos del sistema.

---

## 🖥️ Lenguaje de Programación C
Antes de interactuar directamente con el hardware a nivel de bits, utilizamos el lenguaje de programación **C** junto con el compilador **GCC**. C es un lenguaje estructurado de propósito general que se caracteriza por un bajo nivel de abstracción. Esto permite una gestión directa de la memoria y los procesos, siendo la herramienta fundamental para comprender cómo se construyen los sistemas operativos y cómo el software interactúa estrechamente con la arquitectura física de la máquina.

---

## 🛠️ Set de Instrucciones MARIE
**MARIE** (*Machine Architecture that is Really Intuitive and Easy*) es nuestra arquitectura de referencia para entender el ciclo de ejecución de la CPU (**Fetch-Decode-Execute**) y desarrollar soluciones en lenguaje ensamblador.

| Tipo | Mnemónico | Opcode (Hex) | Descripción |
| :--- | :--- | :---: | :--- |
| **Aritmética** | `ADD X` | 3 | Suma el contenido de la dirección X al AC. |
| | `SUBT X` | 4 | Resta el contenido de la dirección X al AC. |
| | `ADDI X` | B | Suma indirecta usando el valor en X como dirección. |
| | `CLEAR` | A | Pone el AC en ceros. |
| **Data Transfer**| `LOAD X` | 1 | Carga el contenido de la dirección X en el AC. |
| | `STORE X` | 2 | Guarda el contenido del AC en la dirección X. |
| | `LOADI X` | D | Carga indirecta usando el valor en X como dirección. |
| | `STOREI X` | E | Almacenamiento indirecto usando el valor de X como dirección. |
| **I/O** | `INPUT` | 5 | Entrada desde el teclado hacia el AC. |
| | `OUTPUT` | 6 | Salida del valor del AC a la pantalla. |
| **Control** | `JUMP X` | 9 | Salto incondicional a la dirección X. |
| | `SKIPCOND C`| 8 | Salta la sig. instrucción si se cumple la condición C ( <, = o > 0). |
| | `HALT` | 7 | Termina la ejecución del programa. |

---

## 💽 Máquinas Virtuales
Para el componente práctico de Sistemas Operativos, empleamos **Máquinas Virtuales**. Una máquina virtual es un entorno de software que emula un sistema informático completo sobre un hardware anfitrión. Esto permite instalar, configurar y administrar diversos sistemas operativos de forma aislada y segura. En este curso, son esenciales para experimentar con distribuciones como **Slackware** o **Windows Server** sin riesgo de afectar el sistema operativo principal del equipo.

---

## 📚 Ejes Temáticos

### 🏗️ Unidad 1: Arquitectura del Computador
* **Fundamentos:** Componentes principales, modelo von Neumann y evolución histórica.
* **Representación de Datos:** Sistemas numéricos (Binario, Hexadecimal), representación de enteros con signo y punto flotante.
* **Lógica Digital:** Diseño de circuitos combinatorios y secuenciales mediante compuertas lógicas.

### 💻 Unidad 2: ISA y Assembler
* **CPU:** Organización interna, registros (AC, PC, IR, MAR, MBR) y buses de datos.
* **Programación:** Implementación de algoritmos, ciclos y condicionales en lenguaje ensamblador.

### 🐧 Unidad 3: Sistemas Operativos
* **Gestión de Procesos:** Planificación de CPU, estados de procesos, comunicación y sincronización (bloqueos).
* **Jerarquía de Memoria:** Gestión de memoria física, caché y el mecanismo de **Memoria Virtual**.
* **E/S y Archivos:** Sistemas de archivos, gestión de periféricos y tecnología de almacenamiento RAID.

---

## 🔧 Herramientas del Curso
* 🛠️ **Logisim / Nand2Tetris:** Diseño y simulación de circuitos digitales.
* 🖥️ **MARIE Sim:** Entorno de simulación para arquitectura y assembler.
* 📂 **VirtualBox / VMware:** Para el despliegue de máquinas virtuales.
* ⚙️ **GCC:** Compilador estándar para proyectos en lenguaje C.

---

## 📖 Bibliografía
1. **Linda Null**, *The Essentials of Computer Organization and Architecture*.
2. **William Stallings**, *Operating Systems: Internals and Design Principles*.

---
> "El computador es la herramienta que combina hardware, software y algoritmos, constituyendo el núcleo de la tecnología informática moderna."  
> — **William Stallings (2018)**

**Los PDF's de este repositorio NO están autorizados para distribuirse masivamente ni se desea autorizar su distribución por lo que no son propiedad de este autor, todos los derechos reservados a la Universidad Escuela Colombiana de Ingenieria Julio Garabito.**
