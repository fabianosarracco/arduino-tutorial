03-Far lampeggiare più LED
=====

Occorrente
-----

- 1 Breadboard (BB)
- 2 LED
- 2 Resistenze da 1kOhm (marrone, nero, rosso)
- 4 fili jumper

Setup Hardware
-----

1. Scollegare il cavo USB da Arduino;
2. Collegare il PIN I/O DIGITALE 8 di Arduino al foro I-12 della BB.
3. Collegare una resistenza ai fori H-4 e H-12 della BB.
4. Collegare il catodo del LED (terminale più corto) al foro I-2 della BB.
5. Collegare l'anodo del LED (terminale più lungo) al foro I-4 della BB.
7. Collegare la porta GND con la sezione - della BB (ground).
8. Collegare J-2 con la sezione - della BB.
9. Collegare il PIN I/O DIGITALE 9 di Arduino al foro I-16 della BB.
10. Collegare l'altra resistenza ai fori H-16 e H-24 della BB.
11. Collegare il catodo del LED al foro I-26 della BB.
12. Collegare l'anodo del LED al foro I-24 della BB.
13. Collegare il foro J-26 con la sezione - della BB (ground).
14. Collegare la porta USB di Arduino.

Una volta collegato Arduino all'alimentazione, caricare nell'IDE lo sketch
arduno-tut-03.ino ed avviarlo.

Risultato
----

Questo progetto è del tutto analogo al progetto 02, eccetto il fatto che abbiamo
aggiunto un ulteriore LED sul PIN 9 che si spegne quando l'altro LED è acceso.
