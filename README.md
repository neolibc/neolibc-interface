# NeoLibC Bridge Interface

NeoLibC is written using primitive functionality normally provided by the original C standard library. It is not, however, fundamentally dependent upon any implementation of the C stdlib in order to perform its functions. Any custom implementation of the C standard library providing the same interface can be used. Additionally, NeoLibC does not use the entire C standard library.

For these reasons, NeoLibC is built on this bridge library instead of upon the C stdlib directly. For now,  the C standard library is considered a dependency, but, if needed, it would eventually be possible to use NeoLibC without the C standard library.

This repository contains the interface that NeoLib C makes use of, which mostly coincides with the C standard library, but may include modifications where we decided that the C standard library had a historical mistake (such as the gets() function, which we omit, or the strtok() function, which must represent a thread-safe operation).

# Interfaz de Puente NeoLibC

NeoLibC está escrito con funcionalidad que normalmente provee la biblioteca estandear original de C. Sin embargo, a fin de ejecutar, no es fundamentalmente dependiente en ninguna implemetación de la biblioteca estandear de C. Cualquier implementación personalizada de la biblioteca estandear de C que provea la misma interfaz se puede usar. Además, NeoLibC no usa toda la biblioteca estandear de C.

Por lo tanto, NeoLibC está construido en esta biblioteca que funciona como puente en vez de la biblioteca estandear de C. Actualmente, se requiere la biblioteca estandear pero, eventualmente, cuando sea necessario, sería posible utilizar NeoLibC sin la biblioteca estandear.

Este repositorio de Git contiene la interfaz que NeoLibC usa, que en su mayor parte es similar a la biblioteca estandear de C, pero puede incluir modificaciones donde concluimos que había una equivocación histórica (por ejemplo la función gets(), que omitimos, o la función strtok(), que en nuestra versión debe representar una operación que tenga seguradad en hilos).
