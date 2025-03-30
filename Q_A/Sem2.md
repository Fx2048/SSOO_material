### Respuestas a los problemas de procesos e hilos

1. Las transiciones faltantes en la figura 2-2 podrían ocurrir en sistemas con características especiales. Una posible transición adicional podría ser de "Listo" a "Nuevo" en sistemas con sobrecarga, donde un proceso se pospone antes de ejecutarse. Otra transición de "Ejecutando" a "Nuevo" podría darse en sistemas que detectan errores críticos y reinician el proceso desde cero.

2. Para la conmutación de procesos en hardware, la CPU necesitaría información como el estado del proceso, registros, contador de programa y pila. La conmutación podría implementarse con un hardware especializado que guarde y restaure el estado del proceso sin intervención del software, reduciendo la sobrecarga.

3. Se usa ensamblador en los manejadores de interrupciones porque permite un control preciso del hardware, acceso a registros específicos y una ejecución más rápida sin la sobrecarga de lenguajes de alto nivel.

4. Se usa una pila del kernel separada porque la pila del proceso interrumpido podría estar en un estado inconsistente. Además, el kernel necesita una pila confiable para manejar excepciones y garantizar seguridad.

5. Si los trabajos se ejecutan en secuencia, el último terminaría en 20 minutos. Si se ejecutan en paralelo y hay 50% de espera de E/S, cada trabajo usa 5 minutos de CPU más 5 de espera, terminando ambos en 10 minutos.

6. Un servidor de archivos con caché requiere acceso rápido a datos en memoria. El modelo de la figura 2-11(a) no es adecuado porque cada solicitud esperaría acceso al disco, ignorando la caché. Tener una caché por proceso podría ser ineficiente debido a duplicación de datos.

7. En un proceso con un solo hilo, el problema del fork no ocurre porque solo hay una instancia esperando entrada. Con múltiples hilos, dos copias del mismo hilo podrían esperar la misma entrada, causando bloqueos inesperados.

8. Si el servidor Web usa `read` con bloqueo, los hilos deben ser a nivel kernel para que el sistema operativo pueda bloquear un hilo sin afectar a los demás.

9. Un servidor de un solo hilo podría ser mejor en sistemas con poca memoria o en dispositivos embebidos con carga baja. Ejemplo: un servidor pequeño de configuración que solo atiende solicitudes ocasionales.

10. Los registros se listan por hilos porque cada hilo tiene su propio contexto de ejecución, aunque comparta memoria con otros hilos del proceso.

11. Un hilo llamaría a `thread_yield` para permitir que otros hilos ejecuten en un entorno cooperativo. Sin interrupciones de reloj, la equidad depende de la cooperación de los hilos.

12. Sí, si el sistema operativo usa planificación apropiativa con interrupciones de reloj, un hilo puede ser interrumpido y otro hilo puede ser programado en su lugar.

13. - Servidor de un solo hilo: Maneja 1000 ms / (15 ms + 1/3 * 75 ms) = 40 peticiones por segundo.
   - Servidor multihilado: Maneja 1000 ms / 15 ms = 66.7 peticiones por segundo, ya que los hilos pueden continuar mientras otros esperan I/O.

14. Ventaja: Menos cambio de contexto y mayor eficiencia. Desventaja: Si un hilo se bloquea, todos los hilos del proceso se bloquean.

15. Se puede usar sincronización explícita con semáforos o variables de condición para forzar el orden.

16. Usar punteros evita problemas de concurrencia cuando varias instancias de un hilo acceden a la misma variable global.

17. Si la interrupción ocurre mientras el sistema en tiempo de ejecución maneja hilos, podría quedar en un estado inconsistente. Solución: Deshabilitar interrupciones brevemente o usar protección de secciones críticas.

18. Sí, usando señales para interrumpir llamadas bloqueadas y volver a intentarlas hasta que la lectura sea segura.

19. No ocurre con hilos a nivel usuario, ya que el planificador del sistema operativo no los gestiona directamente.

20. No ocurre con planificación por turno circular, porque todos los procesos reciben tiempo de CPU equitativamente.

21. - Hilos a nivel usuario: Una pila por proceso.
   - Hilos a nivel kernel: Una pila por hilo, ya que cada hilo puede ejecutarse independientemente.

22. No, porque las condiciones de carrera requieren eventos simultáneos y una simulación secuencial no los permite.

23. No, porque dos CPUs pueden acceder a la variable `turno` en paralelo, causando inconsistencias.

24. Funciona en planificación apropiativa y no apropiativa porque depende solo de variables compartidas, no de interrupciones.

25. El sistema operativo deshabilita interrupciones y usa colas de espera para implementar semáforos.

26. Se pueden usar semáforos binarios para implementar semáforos contadores mediante colas de espera.

27. No es necesario, ya que los dos procesos pueden sincronizarse con una simple espera mutua.

28. - Hilos de kernel: Sí, porque el kernel los gestiona.
   - Hilos de usuario: No, porque el kernel no los maneja.

29. `waituntil` no se usa porque evaluar predicados arbitrarios puede ser ineficiente y complicado de implementar.

30. Se usa paso de mensajes, similar a colas de mensajes en UNIX.

31. Sí, los intentos repetidos sin espera pueden causar condiciones de carrera.

32. Un proceso tardará `T × n` segundos en completarse debido a la alternancia entre procesos.

33. No se puede determinar a partir del código fuente. En tiempo de ejecución, se mide la relación CPU/I/O para clasificar procesos.

34. Un proceso interactivo puede seleccionar procesos críticos para evitar bloqueos en sistemas multitarea.

35. Fórmulas de eficiencia:
   - (a) 1
   - (b) 1
   - (c) (T / (T + S))
   - (d) (Q / (Q + S))
   - (e) Tiende a 0

36. Se usa SJF: Orden ideal depende de X.

37. Se comparan los tiempos de respuesta en cada algoritmo.

38. Se intercambia 30 veces más la primera vez, total: 31 intercambios.

39. Se puede detectar abuso limitando cambios rápidos de prioridad.

40. Predicción con α=1/2:
   - (40+20+40+15)/4 = 28.75 ms

41. Se usa el test de tiempo real para encontrar el mayor x.

42. Planificación de dos niveles combina equidad con eficiencia.

43. Se evalúa si la CPU puede manejar la carga.

44. Separar mecanismo y política permite flexibilidad en la planificación.

45. Se marca HAMBRIENTO antes de intentar comer para evitar interbloqueo.

46. Afecta la sincronización, pudiendo causar inanición.

47. Tres variantes del problema lectores/escritores.

48. Se escribe un script con bloqueos para evitar condiciones de carrera.

49. Implementación de sistema de mensajes con semáforos.

50. Solución de los filósofos con monitores.

51. Algoritmo de exclusión mutua para baños compartidos.

52. Extensión de la solución de la figura 2-23.

53. Implementación de productor-consumidor sin semáforos.

