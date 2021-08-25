# pheromone
QMK proyecto compatible con Miguelio VIA y configuración dinámica de fader y encoder

[Link al proyecto origen](https://github.com/luantty2/pheromone_keyboard)

En la comunidad de keebary hemos unido fuerzas para fabricado 15 de estos teclados, si eres apasionado a los teclados mecánicos te invito al [Discord](https://discord.gg/d9GmPy8), ahí compartimos conocimientos y realizamos proyectos como este.

El teclado Pheromone está muy enfocado a creadores, con el slider se pueden controlar programas de edición de imágenea, video y música, pero no todos vamos a darle ese uso, otros queremos un teclado particular y que podamos configurarlo a nuestro gusto.

El firmware original del Pheromone tiene unas configuraciones que inhabilita el uso del cambio de capa con MO y algunas personalizaciones por medio de VIA, por eso hemos creado el nuestro propio.

El slider o fader es lo que ha recibido mas cambios, originalmente funciona como MIDI, ahora si lo pones al centro no realiza ninguna acción y cuando lo subes o bajas es cuando hace como si pulsara una tecla repetidas veces, mientras mas a los extremos mas repeticiones hace.

La sensibilidad y el espacio sin acción al centro son configurables en el código en las lineas:

```c
#define POT_MINTIME 40
#define POT_MAXTIME 500
#define POT_CENTER_TOLERANCE 15
```

POT_MINTIME son los milisegundos mínimo que espera entre repetición
POT_MAXTIME son los milisegundos máximos
POT_CENTER_TOLERANCE es el espacio sin acción al centro

Las acciones de ratón están habilitadas por lo que una acción podría ser hacer scroll o click.

Las acciones del encoder también son configurables y estas son por cada capa, por defecto cuando se habilita VIA se cuenta con 4 capas distintas.

Para configurarlo basta con flashear el .hex de la carpeta QMK/compilado de este repositorio, para esto puedes hacer uso de [QMK toolbox](https://github.com/qmk/qmk_toolbox/releases)

Después de eso con [Miguelio VIA](https://github.com/ci-bus/Miguelio-VIA-Keyboards/releases) podrás personalizarlo sin programar.

NOTA: Tanbién puedes usar el VIA original pero necesitas cargar el archivo json para que te lo detecte y no podrás cambiar las acciones del slider ni del encoder.
