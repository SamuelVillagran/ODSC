# 🚀 Organización de los Sistemas de Cómputo (ODSC)

Bienvenido al repositorio central de **ODSC**. Este curso explora el puente fundamental entre el software de alto nivel y el hardware físico, cubriendo desde la lógica digital básica hasta la complejidad de los sistemas operativos modernos.

---

## 📋 Resumen de la Materia
La asignatura se centra en comprender cómo las máquinas actuales logran su capacidad mediante microprocesadores de alta velocidad y una gestión eficiente de recursos. A lo largo del curso, estudiamos la **Arquitectura von Neumann**, el diseño de circuitos, la programación en bajo nivel (**Assembler**) y cómo el **Sistema Operativo** actúa como el puente esencial entre el usuario y los recursos físicos del sistema.

---

## 🛠️ Set de Instrucciones MARIE
**MARIE** (*Machine Architecture that is Really Intuitive and Easy*) es nuestra arquitectura de referencia para entender el ciclo de ejecución de la CPU.

| Tipo | Mnemónico | Opcode | Descripción |
| :--- | :--- | :---: | :--- |
| **Aritmética** | `ADD X` | 3 | Suma el contenido de la dirección X al AC. |
| | `SUBT X` | 4 | Resta el contenido de la dirección X al AC. |
| | `ADDI X` | B | Suma indirecta usando el valor en X como dirección. |
| | `CLEAR` | A | Pone el AC en ceros. |
| **Data Transfer**| `LOAD X` | 1 | Carga el contenido de la dirección X en el AC. |
| | `STORE X` | 2 | Guarda el contenido del AC en la dirección X. |
| | `LOADI X` | D | Carga indirecta usando el valor en X como dirección. |
| **I/O** | `INPUT` | 5 | Entrada desde el teclado hacia el AC. |
| | `OUTPUT` | 6 | Salida del valor del AC a la pantalla. |
| **Control** | `JUMP X` | 9 | Salto incondicional a la dirección X. |
| | `SKIPCOND C`| 8 | Salta la sig. instrucción si se cumple la condición C. |
| | `HALT` | 7 | Termina la ejecución del programa. |

---

## 📚 Ejes Temáticos

### 🏗️ Unidad 1: Arquitectura del Computador
* **Fundamentos:** Componentes principales y evolución histórica.
* **Representación de Datos:** Sistemas numéricos, punto flotante y códigos de caracteres.
* **Lógica Digital:** Diseño de circuitos combinatorios y secuenciales con compuertas lógicas.

### 💻 Unidad 2: ISA y Assembler
* **CPU:** Organización de la Unidad Central de Proceso y registros (AC, PC, IR, MAR, MBR).
* **Programación:** Implementación de soluciones lógicas y ciclos en lenguaje ensamblador.

### 🐧 Unidad 3: Sistemas Operativos
* **Gestión de Procesos:** Ciclo de vida, planificación de CPU y sincronización.
* **Memoria:** Jerarquías de memoria, caché y el mecanismo de **Memoria Virtual**.
* **Almacenamiento:** Sistemas de archivos, gestión de E/S y tecnología RAID.

---

## 🔧 Herramientas Utilizadas
* 🛠️ **Logisim:** Simulación de circuitos lógicos.
* 🖥️ **MARIE Sim:** Entorno de ejecución para programas en ensamblador.
* 📂 **Virtual Machines:** Instalación y configuración de sistemas operativos (ej. Slackware, Zorin).

---

## 📖 Bibliografía Principal
1. **The Essentials of Computer Organization and Architecture**, Linda Null.
2. **Operating Systems: Internals and Design Principles**, William Stallings.

---
> *“El computador es la herramienta que combina hardware, software y algoritmos, constituyendo el núcleo de la tecnología moderna.”*
