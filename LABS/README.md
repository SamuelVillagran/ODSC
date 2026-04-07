# Laboratorios - Arquitectura Computacional y Sistemas Operativos
**Escuela Colombiana de Ingeniería Julio Garavito**

## 🎯 Propósito General

Estos laboratorios tienen como objetivo desarrollar competencias en dos niveles
de abstracción del software:

1. **Lenguaje C** — programación estructurada de bajo nivel con manejo
   explícito de tipos, arreglos y funciones.
2. **MARIE Assembly** — programación a nivel de arquitectura de computador,
   entendiendo cómo opera una CPU simple con instrucciones básicas.

La progresión busca que el estudiante comprenda cómo un programa de alto nivel
se traduce hasta el nivel de instrucciones de máquina.

---

## 🔵 Laboratorios en Lenguaje C

### Lab01a — Suma de dos enteros
**Archivo:** `lab01a.c`
Lee pares de enteros e imprime su suma. Uso del tipo `int`.

### Lab01b — Máximo de dos reales
**Archivo:** `lab01b.c`
Lee pares de números reales e imprime el mayor. Uso del tipo `float`.

### Lab01c — Mínimo de un vector de reales
**Archivo:** `lab01c.c`
Lee un vector de flotantes y encuentra el mínimo.
Máximo 2000 elementos. Uso del tipo `float`.

### Lab01d — Suma de elementos de un vector entero
**Archivo:** `lab01d.c`
Lee un vector de enteros y calcula la suma total.
Requiere un **procedimiento** para leer y una **función** para sumar.
Máximo 2000 elementos. Uso del tipo `int`.

### Lab01e — Operación aritmética sobre reales
**Archivo:** `lab01e.c`
Lee tríos (operador, operando1, operando2) y aplica
la operación indicada (`+`, `-`, `*`, `/`). Uso del tipo `float`.

---

## 🔴 Laboratorios en MARIE Assembly

### Suma m–n
**Archivo:** `sumamn.mas`
Calcula la suma acumulada desde `m` hasta `n` (inclusive),
con `m ≤ n`. Introduce el uso de bucles y aritmética básica en MARIE.

### Suma max–min
**Archivo:** `maxmin.mas`
Dados 3 enteros, calcula la suma del máximo y el mínimo.
Introduce comparaciones y bifurcaciones condicionales (`SKIPCOND`).

### Cuadrática
**Archivo:** `cuadratica.mas`
Dados los coeficientes `a`, `b`, `c` de `ax² + bx + c = 0`,
determina cuántas raíces reales tiene (0, 1 o 2) evaluando
el discriminante `b² - 4ac`. Solo coeficientes enteros.

---

## 🧠 Conceptos Clave Trabajados

| Concepto | C | MARIE |
|---|---|---|
| Entrada/Salida estándar | `scanf` / `printf` | `INPUT` / `OUTPUT` |
| Tipos de dato | `int`, `float` | Palabra de 16 bits |
| Condicionales | `if / else` | `SKIPCOND` |
| Bucles | `for / while` | Saltos (`JUMP`) |
| Funciones/Procedimientos | `void f()`, `int f()` | Subrutinas con `JNS` |
| Arreglos | `int v[2000]` | Direccionamiento indirecto |

---

## 📁 Estructura sugerida del repositorio
labs/
├── C/
│   ├── lab01a.c
│   ├── lab01b.c
│   ├── lab01c.c
│   ├── lab01d.c
│   └── lab01e.c
└── MARIE/
├── sumamn.mas
├── maxmin.mas
└── cuadratica.mas
---

> Todos los programas leen desde **entrada estándar** y escriben
> en **salida estándar**, siguiendo el formato especificado en cada enunciado.