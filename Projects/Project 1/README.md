# Proyectos - Organización de los Sistemas de Cómputo
**Escuela Colombiana de Ingeniería Julio Garavito**

---

## 🎯 Propósito General

Estos proyectos llevan los conceptos de los laboratorios a un nivel superior,
enfrentando problemas algorítmicos reales que requieren:

- **Aritmética de fracciones** implementada a nivel ensamblador (MARIE)
- **Aritmética en bases no estándar** implementada en C con lógica de
  complemento

El objetivo es demostrar que cualquier algoritmo, sin importar su complejidad,
puede implementarse tanto en lenguaje de alto nivel como directamente sobre
la arquitectura del procesador.

---

## 🔴 Proyecto MARIE — Fracciones Egipcias

**Archivo:** `profe.mas`

Implementa el **algoritmo voraz de Sylvester** para descomponer cualquier
fracción racional positiva `a/b` en una suma de fracciones unitarias distintas
(fracciones egipcias), donde cada término tiene numerador 1.

**Ejemplo:**
19/20 = 1/2 + 1/3 + 1/9 + 1/180
**Conceptos clave:**
- División entera en MARIE
- Aritmética de fracciones (suma y resta) sin soporte nativo
- Bucles con condición de parada (residuo = 0)
- Salida de múltiples denominadores por caso, terminando en `0`

---

## 🔵 Proyecto C — División en Base 19

**Archivo:** `pro01.c`

Lee dos números representados en **base 19** como cadenas de texto
y calcula su **división entera** usando el método de
**restas sucesivas en complemento a 19**.

**Dígitos de base 19:** `0–9` y `A–I` (donde `A=10`, ..., `I=18`)

**Conceptos clave:**
- Representación y aritmética en bases no decimales
- Complemento a 19 como mecanismo de resta
- Manejo de cadenas largas (hasta 350,000 caracteres)
- Precisión ajustada a la longitud del operando más largo

---

## 🧠 Habilidades Desarrolladas

| Habilidad | MARIE (Fracciones) | C (Base 19) |
|---|---|---|
| Algoritmos voraces | ✅ | |
| Aritmética de fracciones | ✅ | |
| Bases numéricas no estándar | | ✅ |
| Complemento aritmético | | ✅ |
| Manejo de cadenas grandes | | ✅ |
| Bucles y condiciones en bajo nivel | ✅ | ✅ |

---

> Ambos proyectos leen desde **entrada estándar** y escriben en
> **salida estándar** con el formato exacto especificado en cada enunciado.


**Ningún PDF de este repositorio esta autorizado para su distribución, todos los derechos reservados a la Universidad Escuela Colombiana de Ingeniería Julio Garavito.**