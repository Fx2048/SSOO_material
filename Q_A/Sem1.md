
### **1. Qué es un sistema operativo**
- **Definición:** Un software que proporciona una abstracción de los recursos físicos (hardware) y gestiona estos recursos de manera eficiente.
- **Funciones principales:**
  - **Máquina extendida:** Simplifica la interacción con el hardware a través de abstracciones como archivos y procesos.
  - **Administrador de recursos:** Gestiona el uso y la asignación de recursos como CPU, memoria, discos y dispositivos de entrada/salida (E/S).

---

### **2. Modos de operación**
- **Modo kernel:** El sistema operativo tiene control total del hardware y puede ejecutar instrucciones privilegiadas.
- **Modo usuario:** Los programas de usuario están restringidos y no pueden acceder directamente a los recursos críticos.

---

### **3. Componentes básicos**
- **Hardware:** Procesadores, memoria principal, discos, teclados, monitores y dispositivos de red.
- **Software del sistema operativo:** Incluye manejadores de interrupciones, planificación de procesos y sistemas de archivos.
- **Software de usuario:** Como navegadores, reproductores de música y aplicaciones gráficas, que interactúan con el sistema operativo.

---

### **4. Abstracción**
- **Importancia de la abstracción:** Facilita el trabajo de los programadores al ocultar los detalles complejos del hardware. Por ejemplo, se abstraen dispositivos como discos duros mediante sistemas de archivos.

---

### **5. Historia de los sistemas operativos**
- **Primera generación (1945-1955):** Computadoras con tubos al vacío, sin sistemas operativos.
- **Segunda generación (1955-1965):** Introducción de los transistores y procesamiento por lotes.
- **Tercera generación (1965-1980):** Uso de circuitos integrados y multiprogramación.
- **Cuarta generación (actualidad):** Sistemas distribuidos y sistemas operativos modernos.

---

### **6. Administración de recursos**
- **Multiplexación en el tiempo:** Programas toman turnos para usar recursos como la CPU.
- **Multiplexación en el espacio:** Recursos como la memoria se dividen entre los programas en ejecución simultánea.

---

Aquí tienes respuestas concisas y razonadas a cada una de las preguntas:

---

**1. ¿Qué es la multiprogramación?**  
La multiprogramación es la capacidad del sistema operativo para mantener varios programas (o procesos) en la memoria al mismo tiempo y alternar su ejecución. Aprovecha los tiempos de espera (por ejemplo, durante operaciones de E/S) para que mientras un proceso está bloqueado, otro pueda utilizar la CPU, aumentando así la utilización del procesador.

---

**2. ¿Qué es spooling? ¿Cree usted que las computadoras personales avanzadas tendrán spooling como característica estándar en el futuro?**  
El spooling (Simultaneous Peripheral Operations On-Line) consiste en colocar tareas de entrada/salida en una cola (buffer) de manera que se puedan procesar de forma secuencial. Es común en la impresión y en otros dispositivos lentos.  
Actualmente, los sistemas operativos personales ya utilizan técnicas de spooling para impresoras, escáneres y otros periféricos. Por ello, es razonable que esta técnica siga siendo una característica estándar, adaptada a nuevas tecnologías.

---

**3. En las primeras computadoras, cada byte de datos leído o escrito se manejaba mediante la CPU (no había DMA). ¿Qué implicaciones tiene esto para la multiprogramación?**  
Si la CPU debe gestionar cada byte mediante instrucciones de software, se consume mucho tiempo en operaciones de E/S. Esto provoca que la CPU esté ocupada “atendiendo” dispositivos en lugar de ejecutar procesos, lo que reduce la eficiencia y limita la capacidad de ejecutar varios programas simultáneamente (menor paralelismo y mayor tiempo en contextos de bloqueo).

---

**4. La idea de una familia de computadoras fue introducida en la década de 1960 con las mainframes IBM System/360. ¿Está muerta ahora esta idea o sigue en pie?**  
La idea de tener una familia de computadoras compatibles sigue vigente. Aunque la tecnología ha evolucionado (con arquitecturas x86, ARM, etc.), los fabricantes aún buscan compatibilidad dentro de una línea de productos para facilitar el desarrollo de software y la migración entre modelos.

---

**5. Costo y requerimientos de RAM de video:**

- **Pantalla de texto monocromático (25×80):**  
  – Total de caracteres: 25 × 80 = 2,000.  
  – Suponiendo 1 byte por carácter, se requieren aproximadamente 2 KB de RAM de video.

- **Mapa de bits de 1024×768 píxeles y 24 bits de color:**  
  – Total de píxeles: 1024 × 768 ≈ 786,432.  
  – Cada píxel usa 3 bytes (24 bits), lo que resulta en aproximadamente 786,432 × 3 ≈ 2,359,296 bytes, es decir, unos 2.36 MB.

- **Costo con precios de 1980:**  
  – A 5 dólares/KB, 2 KB costarían 2 × 5 = 10 dólares.  
  – Para 2.36 MB (2,360 KB): 2,360 × 5 ≈ 11,800 dólares.

- **Costo actual:**  
  Hoy el costo de la memoria es varias órdenes de magnitud menor; 2.36 MB de RAM de video cuesta solo una fracción de dólar (en centavos o menos), lo que explica la amplia adopción de GUI.

---

**6. Ejemplo de metas de diseño que se contradicen:**  
– **Utilización de recursos vs. Puntualidad (tiempo real):** Maximizar el uso de la CPU puede implicar largas colas de procesos, lo que dificulta garantizar respuestas rápidas en sistemas de tiempo real.  
– También podría mencionarse robustez frente a rendimiento, donde agregar mecanismos de seguridad y verificación puede ralentizar el sistema.

---

**7. ¿Cuál de las siguientes instrucciones debe permitirse sólo en modo kernel?**  
Las operaciones que afectan directamente la estructura del hardware o la protección del sistema deben estar restringidas. Por ejemplo:  
- **a) Deshabilitar todas las interrupciones**  
- **c) Establecer el reloj de la hora del día** (por afectar la sincronización global)  
- **d) Cambiar el mapa de memoria**  
La instrucción **b) Leer el reloj de la hora del día** es segura para modo usuario.  
Por lo tanto, las opciones a, c y d son operaciones privilegiadas que sólo deben ejecutarse en modo kernel.

---

**8. Sistema con 2 CPUs, cada una con 2 hilos (4 “virtual CPUs”) y tres programas: P0 (5 ms), P1 (10 ms) y P2 (20 ms).**  
Si no hay bloqueos y cada programa se ejecuta en una CPU (sin cambiar de CPU), se pueden asignar los tres procesos a tres de las 4 “CPUs virtuales” simultáneamente. Por lo tanto, el tiempo total será el del proceso más largo, es decir, **20 ms**.

---

**9. Canalización de 4 etapas, cada una de 1 ns:**  
Una vez llena la canalización, la máquina puede finalizar una instrucción cada 1 ns. Esto equivale a **1 × 10⁹ instrucciones/segundo (1 GHz de throughput)**.

---

**10. Tiempo promedio de acceso a una palabra (con caché, RAM y disco):**

- Tiempo de caché: 2 ns con 95% de aciertos.  
- Si falla en caché (5%), se accede a RAM en 10 ns con 99% de aciertos.  
- Fallo en RAM (0.05 × 0.01 = 0.0005, o 0.05%) se accede al disco en 10 ms (10,000,000 ns).

Cálculo:  
 T_avg = 0.95·2 ns + 0.05·0.99·10 ns + 0.0005·10,000,000 ns  
    = 1.9 ns + 0.495 ns + 5000 ns  
    ≈ **5002.4 ns** (aprox. 5 microsegundos)

---

**11. Digitalización del texto (700 páginas, 50 líneas de 80 caracteres = 2,800,000 caracteres):**

- **Registros:** Si se accede carácter por carácter a ~1 ns por acceso, el total sería 2.8×10⁶ ns, es decir, **2.8 ms**.  
- **RAM:** A 10 ns por carácter, 2.8×10⁶ × 10 ns = **28 ms**.  
- **Disco:** Si el disco accede en bloques de 1024 caracteres, se tienen 2,800,000/1024 ≈ 2734 bloques.  
  – Cada bloque tiene un costo de, digamos, 10 ms (incluyendo latencia), lo que da aproximadamente **27.3 s**.  
- **Cinta:** El acceso inicial puede tardar varios minutos; luego se transfiere a la misma velocidad que el disco, por lo que el tiempo total podría ser aún mayor (varios minutos).

---

**12. Llamadas al sistema para escribir en disco:**  
Para lectura, el proceso se bloquea porque necesita los datos. Para escritura, en muchos sistemas el proceso se bloquea hasta que los datos han sido copiados a un búfer del sistema operativo; la escritura real al disco puede ser diferida (escritura diferida o asíncrona). Así, **el proceso llamador puede desbloquearse una vez que la copia a memoria intermedia se complete, sin esperar a la finalización física en disco**.

---

**13. ¿Qué es una instrucción de trap?**  
Un trap es una instrucción especial que genera una interrupción de software. Se usa para invocar servicios del sistema operativo (llamadas al sistema) o para manejar errores, permitiendo que el control se transfiera del modo usuario al modo kernel.

---

**14. Diferencia clave entre un trap y una interrupción:**  
– **Trap:** Generado intencionalmente por el programa (por ejemplo, para llamar al sistema operativo) y se produce de manera controlada.  
– **Interrupción:** Proviene del hardware de manera asíncrona (por ejemplo, finalización de una operación de E/S) y no es iniciada por el software.

---

**15. ¿Por qué se necesita la tabla de procesos en un sistema de tiempo compartido? ¿Se necesita también en sistemas de un solo proceso?**  
La tabla de procesos almacena el estado, la información de control y los recursos asignados a cada proceso, lo que es esencial para la planificación y gestión en sistemas con múltiples procesos. En un sistema de computadora personal que ejecuta un único proceso durante toda la sesión, **no se requiere una tabla de procesos compleja**; bastaría con almacenar la información del único proceso en ejecución.

---

**16. Montar un sistema de archivos en un directorio no vacío:**  
En general, montar en un directorio vacío evita ocultar archivos. Sin embargo, podría ser conveniente montar en un directorio no vacío para permitir el acceso a archivos “base” mientras se sobrepone otro sistema de archivos, por ejemplo, para integrar recursos o para mantener compatibilidad con aplicaciones heredadas. Esto puede ser útil en sistemas en los que se desee que ciertos datos siempre estén disponibles, aunque conlleva el riesgo de “ocultar” archivos existentes.

---

**17. Propósito de una llamada al sistema:**  
Una llamada al sistema es la interfaz mediante la cual un programa de usuario solicita servicios o recursos al sistema operativo (por ejemplo, acceso a dispositivos, manejo de archivos o comunicación entre procesos). Permite que el software de usuario opere sin acceso directo al hardware y se beneficie de la seguridad y abstracción que ofrece el kernel.

---

**18. Condiciones que hacen fallar:**

- **fork:** Fallará si no hay suficiente memoria o recursos para crear un nuevo proceso.  
- **exec:** Fallará si el archivo ejecutable no existe, no tiene permisos adecuados o no es un formato válido.  
- **unlink:** Fallará si el archivo no existe o si el proceso carece de permisos para eliminarlo.

---

**19. Sobre la llamada `cuenta = write(fd, bufer, nbytes);`:**  
Sí, puede devolver un valor menor que *nbytes*. Esto puede ocurrir si se produce una interrupción, si hay un error durante la transferencia o si se llega al final de un dispositivo (por ejemplo, cuando se escribe en un socket o un dispositivo de almacenamiento con espacio limitado).

---

**20. Contenido de bufer tras:**
```c
lseek(fd, 3, SEEK_SET);
read(fd, &bufer, 4);
```
Dado el archivo con bytes: 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5  
– La llamada lseek sitúa el puntero en el byte con índice 3 (asumiendo numeración desde 0).  
– Los 4 bytes leídos serán:  
 Índice 3 → 1  
 Índice 4 → 5  
 Índice 5 → 9  
 Índice 6 → 2  
Por lo tanto, **bufer contendrá [1, 5, 9, 2]**.

---

**21. Recuperación de un archivo de 10 MB en disco:**

- El archivo se almacena en la misma pista (pista 50) en sectores consecutivos.  
- El brazo se encuentra en la pista 100, por lo que debe moverse 50 cilindros: 50 × 1 ms = **50 ms**.  
- Se requiere esperar 5 ms para que el sector inicial gire bajo la cabeza.  
- La lectura de 10 MB a 100 MB/s toma: 10 MB / 100 MB/s = **100 ms**.  
Sumando: 50 ms + 5 ms + 100 ms = **155 ms** en total.

---

**22. Diferencia entre archivo especial de bloque y de carácter:**  
– **Archivo de bloque:** Permite el acceso a datos en bloques y generalmente incluye mecanismos de búfer; se usa para dispositivos de almacenamiento, donde se pueden leer o escribir bloques completos.  
– **Archivo de carácter:** Se accede secuencialmente, carácter por carácter (o sin búfer a nivel de bloque) y se usa para dispositivos como terminales o puertos serie.

---

**23. Nombres en biblioteca y llamada al sistema (read):**  
No es esencial que ambos tengan el mismo nombre. Lo importante es la función de la llamada al sistema (la interfaz con el kernel). El procedimiento de biblioteca es simplemente una capa de abstracción que puede tener un nombre diferente, pero lo crucial es que la llamada al sistema (la parte que invoca al kernel) se mantenga consistente.

---

**24. Uso del modelo cliente-servidor en una sola computadora:**  
Sí. Incluso en una única máquina se puede estructurar el software en módulos donde un “servidor” proporciona servicios (por ejemplo, acceso a archivos, impresión o bases de datos) y varios “clientes” solicitan esos servicios. Esto favorece la modularidad y la separación de responsabilidades.

---

**25. Importancia de saber qué llamadas a procedimiento generan llamadas al sistema:**  
Es útil para el programador conocer qué funciones de biblioteca implican llamadas al sistema porque:  
– Las llamadas al sistema suelen ser más costosas en términos de tiempo que las llamadas internas.  
– Permite escribir código más eficiente, evitando abusar de operaciones costosas en secciones críticas.  
Se vuelve especialmente relevante en aplicaciones de alto rendimiento o sistemas embebidos donde cada ciclo cuenta.

---

**26. Consecuencias de que algunas llamadas de UNIX no tengan equivalentes en la API Win32:**  
La ausencia de equivalentes directos obliga al programador a reescribir o adaptar funcionalidades al migrar programas de UNIX a Windows. Esto puede afectar la portabilidad, requerir cambios en la lógica del programa y aumentar la complejidad en el mantenimiento y la interoperabilidad del software.

---

**27. Sobre la portabilidad de un sistema operativo:**

– Un sistema operativo completamente portátil es inviable porque cada arquitectura de hardware tiene diferencias fundamentales (como manejo de interrupciones, gestión de memoria y dispositivos).  
– Para lograr alta portabilidad se pueden definir dos capas de abstracción de alto nivel:  
 • **Capa de abstracción de hardware (HAL):** Oculta las diferencias de hardware a través de interfaces uniformes.  
 • **Interfaz de llamadas al sistema:** Define cómo el software de usuario interactúa con el kernel sin conocer los detalles del hardware.

---

**28. Separación de directiva y mecanismo en microkernel:**  
Esta separación permite que la política (qué se debe hacer) se defina de forma independiente del mecanismo (cómo se hace). En los microkernels, el núcleo mínimo proporciona mecanismos básicos (comunicación, gestión de procesos, etc.) y la mayoría de las políticas (como la planificación o manejo de dispositivos) se implementan en servidores en espacio de usuario, facilitando la modularidad y portabilidad.

---

**29. Conversiones de unidades:**

(a) **¿A cuántos segundos equivale un microaño?**  
 – 1 año ≈ 31,536,000 s  
 – Un microaño = 31,536,000 × 10⁻⁶ ≈ **31.536 s**

(b) **¿Qué tan largo es un gigamicrón?**  
 – 1 micrón = 10⁻⁶ metros  
 – 1 gigamicrón = 10⁹ micrones = 10⁹ × 10⁻⁶ m = **10³ m = 1 km**

(c) **¿Cuántos bytes hay en 1 TB?**  
 – En notación decimal: 1 TB = 10¹² bytes.  
 – (En notación binaria se suele usar 2⁴⁰ ≈ 1.1×10¹² bytes, pero la respuesta estándar es **1,000,000,000,000 bytes**).

(d) **6000 yottagramos en kilogramos:**  
 – 1 yottagramo = 10²⁴ gramos  
 – 6000 yottagramos = 6000 × 10²⁴ g  
 – Dividiendo entre 1000 para pasar a kilogramos: 6000 × 10²¹ kg = **6×10²⁴ kg**

---

**30. Escribir un shell básico:**  
Se requiere desarrollar un programa que:
- Lea la línea de comandos (por ejemplo, usando `getline` o similar).
- Parsee la entrada en comandos y argumentos.
- Utilice llamadas al sistema como `fork()`, `exec()` y `wait()` para crear procesos y ejecutar programas.
- Implemente características básicas como redirección de entrada/salida, tuberías y manejo de trabajos en segundo plano.  
La solución puede estar escrita en C o en otro lenguaje que permita acceso a llamadas al sistema.

---

**31. Script de shell para crear procesos hijos ilimitados:**  
Un ejemplo (advertido para no ejecutarlo en sistemas de producción) podría ser:
```bash
#!/bin/bash
sync   # vacía los búferes del sistema de archivos
while true; do
    ( sleep 1000 ) &  # Crea un proceso hijo que duerme
done
```
Este script genera continuamente procesos hijos. Se debe tener extrema precaución al ejecutarlo, ya que puede saturar el sistema.

---

**32. Interpretar el contenido de un directorio con herramientas como od o DEBUG:**  
El programa **od** (octal dump) en UNIX permite ver el contenido binario de un directorio (o de un archivo) en un formato legible en distintos radices (octal, hexadecimal, etc.). De forma similar, **DEBUG** en MS-DOS puede mostrar los bytes en memoria.  
El ejercicio consiste en crear (por ejemplo) un directorio con algunos archivos, luego usar una de estas herramientas para examinar el contenido “crudo” y relacionarlo con la estructura del sistema de archivos (por ejemplo, identificar entradas de directorio, metadatos, etc.). La interpretación dependerá del formato específico y la documentación del sistema de archivos.

